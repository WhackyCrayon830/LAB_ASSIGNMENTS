#include <iostream>
#include <time.h>
#include <string>
using namespace std;

enum class Suit{
    HEARTS,
    CLUBS,
    SPADES,
    DIAMONDS,
    INVALID
};

class Card{
    private:
        int rank;
        Suit symbol;

        int generateRank(){
            return (rand() % 13) + 1;
        }

        Suit generateSuit(){
            switch ((rand() % 4) + 1){
                case 1: return Suit::CLUBS;
                case 2: return Suit::DIAMONDS;
                case 3: return Suit::HEARTS;
                case 4: return Suit::SPADES;
            }
            return Suit::INVALID;
        }

        string rankToString(int rank) const{
            switch (rank) {
            case 1: return "ACE";
            case 11: return "JACK";
            case 12: return "QUEEN";
            case 13: return "KING";
            default: return to_string(rank);
            }
        }

        string suitToString(Suit suit){
            switch (suit){
                case Suit::CLUBS : return "CLUBS";
                case Suit::HEARTS : return "HEARTS";
                case Suit::SPADES : return "SPADES";
                case Suit::DIAMONDS : return "DIAMONDS";
                default : return "INVALID";
            }
        }

        string suitToColor(Suit suit){
            return (suit == Suit::CLUBS || suit == Suit::SPADES) ? "BLACK" : "RED";
        }
        
    public:
        Card(int rank, Suit suit){
            this->rank = rank;
            this->symbol = suit;
        }

        Card(){
            this->rank = generateRank();
            this->symbol = generateSuit();
        }

        void display(){
            cout << "Rank: " << rankToString(this->rank) << endl;
            cout << "Suit: " << suitToString(this->symbol) << endl;
            cout << "Color: " << suitToColor(this->symbol) << endl;
        }
};


int main() {
    srand(time(0));
    
    Card randomCard;
    randomCard.display();
    return 0;
}