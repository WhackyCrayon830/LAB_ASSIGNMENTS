#include <iostream>
using namespace std;

class Order {
  private:
    inline static int nextID = 1000;

  public:
    int orderID;
    int price;
    Order() {}
    Order(int p) : price(p) {
        orderID = ++nextID;
    }

    ~Order() {}

    void displayOrder() {
        cout << "||ID: " << orderID << " | " << "$: " << price << "||";
    }
};

class Node {
  public:
    Order data;
    Node *next;

    Node(const Order &o) : data(o), next(nullptr) {}
    ~Node() {}
};

class OrderList {
  private:
    Node *head;
    int size;

  public:
    OrderList() : head(nullptr), size(0) {}

    void addOrder(int price);
    void deleteOrder(int id);
    void displayOrders();
    void listDetails();
    Order *search(int id);
    int getSize() const;
    int getTotalValue() const;
};

void OrderList::addOrder(int price) {
    Node *newNode = new Node(Order(price));
    newNode->next = head;
    head = newNode;
    size++;
}

void OrderList::deleteOrder(int id) {
    Node *curr = head;
    Node *prev = nullptr;

    while (curr && curr->data.orderID != id) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr) {
        cout << endl << "Order Not Found!" << endl;
        return;
    }
    if (prev == nullptr) {
        head = curr->next;
    } else {
        prev->next = curr->next;
    }
    size--;
    delete curr;
}

void OrderList::displayOrders() {
    Node *curr = head;
    while (curr) {
        curr->data.displayOrder();
        if (curr->next != nullptr) {
            cout << " -> ";
        }
        curr = curr->next;
    }
    cout << endl;
}

void OrderList::listDetails() {
    cout << endl;
    cout << "--------------------" << endl;
    cout << "Total Number of Orders: " << size << endl;
    cout << "Total List Price: $" << getTotalValue() << endl;
    cout << "--------------------" << endl;
}

Order *OrderList::search(int id) {
    Node *curr = head;
    while (curr && curr->data.orderID != id) {
        curr = curr->next;
    }
    return &(curr->data);
}

int OrderList::getSize() const {
    return size;
}

int OrderList::getTotalValue() const {
    int sum = 0;
    Node *curr = head;
    while (curr) {
        sum += curr->data.price;
        curr = curr->next;
    }
    return sum;
}

int main() {

    OrderList restaurant_list;
    restaurant_list.addOrder(10);
    restaurant_list.addOrder(15);
    restaurant_list.addOrder(21);
    restaurant_list.addOrder(55);
    restaurant_list.addOrder(10);

    restaurant_list.listDetails();
    cout << "Unedited Order List: ";
    restaurant_list.displayOrders();
    cout << endl << "Deleted (1003): ";
    restaurant_list.deleteOrder(1003);
    restaurant_list.displayOrders();
    cout << endl << "Order 1004 (Searched): ";
    restaurant_list.search(1004)->displayOrder();
    cout << endl;
    return 0;
}