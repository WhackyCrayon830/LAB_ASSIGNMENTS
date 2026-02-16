#include <iostream>
using namespace std;

class Speedometer {
  public:
    void speedDetails() {
        cout << "------------" << endl;
        cout << "Speed: 70 Km/Hr" << endl;
        cout << "------------" << endl;
    }
};
class FuelGuage {
  public:
    void fuelDetails() {
        cout << "------------" << endl;
        cout << "Range: 86 Km" << endl;
        cout << "------------" << endl;
    }
};
class Thermometer {
  public:
    void thermalDetails() {
        cout << "------------" << endl;
        cout << "Temprature: Optimal" << endl;
        cout << "------------" << endl;
    }
};

class DashBoard : public Speedometer, public FuelGuage, public Thermometer {
  public:
    void viewDash() {
        speedDetails();
        fuelDetails();
        thermalDetails();
    }
};

int main() {
    DashBoard dash;
    dash.viewDash();
    return 0;
}