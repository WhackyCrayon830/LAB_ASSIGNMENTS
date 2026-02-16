#include <iostream>
using namespace std;

class Parent {
  private:
    string personalSecret = "I lost my wallet with my ID.";

  protected:
    string familySecret = "We are very rich.";

  public:
    string noSecret = "They have a weird family.";
};

class CloseChild : public Parent {
  public:
    void spillFamilySecrets() {
        cout << "CloseChild: " << familySecret << endl; // OK
    }
};

class MiddleChild : protected Parent {
  public:
    void spillFamilySecrets() {
        cout << "MiddleChild: " << familySecret << endl; // OK
    }
};

class NeighboursChild : private Parent {
  public:
    void spillFamilySecrets() {
        cout << "NeighboursChild: " << noSecret << endl; // OK
    }
};

int main() {
    CloseChild closeChild;
    MiddleChild middleChild;
    NeighboursChild neighbor;

    closeChild.spillFamilySecrets();
    middleChild.spillFamilySecrets();
    neighbor.spillFamilySecrets();

    // Accessible only in public inheritance
    cout << "Access from main: " << closeChild.noSecret << endl;

    // ❌ These would give errors:
    // cout << middleChild.noSecret << endl;  // protected inheritance
    // cout << neighbor.noSecret << endl;     // private inheritance

    return 0;
}
