#include <iostream>
#include <string>
using namespace std;

enum Status {
    PENDING,
    COMPLETED
};

class Player {
  private:
    inline static int nextPlayerID = 1000;

  public:
    int playerID;
    string userName;
    Status playerTurn;

    Player(string user) : userName(user), playerTurn(Status::PENDING) {
        playerID = ++nextPlayerID;
    }

    void displayPlayer() {
        cout << "||ID: " << playerID << " | " << "NAME: " << userName << "||";
    }
};

class Node {
  public:
    Player data;
    Node *next;

    Node(const Player &p) : data(p), next(nullptr) {}
    ~Node() {}
};

class PlayerList {
  private:
    Node *head;
    int size;

  public:
    PlayerList() : head(nullptr), size(0) {}
    ~PlayerList() {}

    void addPlayer(const Player &p);
    void deleteCompletedPlayers();
    void displayPlayers();
    void countPlayers();
    Player *searchPlayer(int id);
};

void PlayerList::addPlayer(const Player &p) {
    Node *newNode = new Node(p);

    if (head == nullptr) {
        head = newNode;
        newNode->next = head; // circular link
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    size++;
}

void PlayerList::deleteCompletedPlayers() {
    if (!head)
        return;
    Node *curr = head;
    Node *prev = nullptr;
    do {
        if (curr->data.playerTurn == Status::COMPLETED) {

            if (curr == head) {
                Node *last = head;

                while (last->next != head)
                    last = last->next;

                if (head->next == head) { // only one node
                    delete head;
                    head = nullptr;
                    return;
                }

                head = head->next;
                last->next = head;
                delete curr;
                curr = head;
            } else {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            }

            size--;
        } else {
            prev = curr;
            curr = curr->next;
        }
    } while (curr != head && head != nullptr);
}

Player *PlayerList::searchPlayer(int id) {
    if (!head)
        return nullptr;

    Node *temp = head;

    do {
        if (temp->data.playerID == id) {
            return &(temp->data);
        }
        temp = temp->next;
    } while (temp != head);

    return nullptr;
}

void PlayerList::displayPlayers() {
    if (!head) {
        cout << "HEAD -> NULL\n";
        return;
    }

    Node *curr = head;

    cout << "HEAD -> ";

    do {
        curr->data.displayPlayer();
        cout << " -> ";
        curr = curr->next;
    } while (curr != head);

    cout << "HEAD\n";
}

void PlayerList::countPlayers() {
    cout << endl << "SIZE: " << size << endl;
}

int main() {
    PlayerList list;

    // Adding players
    list.addPlayer(Player("Alice"));
    list.addPlayer(Player("Bob"));
    list.addPlayer(Player("Charlie"));
    list.addPlayer(Player("Diana"));

    cout << "\nInitial Player List:\n";
    list.displayPlayers();
    list.countPlayers();

    int searchID = 1002;
    Player *found = list.searchPlayer(searchID);

    if (found) {
        cout << "\nFound Player: ";
        found->displayPlayer();
        cout << endl;
    } else {
        cout << "\nPlayer not found\n";
    }

    // Mark some players as completed
    Player *p1 = list.searchPlayer(1001);
    Player *p3 = list.searchPlayer(1003);

    if (p1)
        p1->playerTurn = COMPLETED;
    if (p3)
        p3->playerTurn = COMPLETED;

    cout << "\nAfter marking some players COMPLETED:\n";
    list.displayPlayers();

    // Delete completed players
    list.deleteCompletedPlayers();

    cout << "\nAfter deleting completed players:\n";
    list.displayPlayers();
    list.countPlayers();
    return 0;
}