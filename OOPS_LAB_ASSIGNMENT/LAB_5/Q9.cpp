#include <iostream>
using namespace std;

class Vehicle {
  protected:
    string make;
    string model;
    int year;

  public:
    Vehicle(string mk, string md, int yr) : make(mk), model(md), year(yr) {}

    void displayVehicleInfo() const {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    virtual ~Vehicle() {}
};

class Truck : public Vehicle {
  protected:
    double load_capacity;

  public:
    Truck(string mk, string md, int yr, double lc) : Vehicle(mk, md, yr), load_capacity(lc) {}

    void displayTruckInfo() const {
        displayVehicleInfo();
        cout << "Load Capacity: " << load_capacity << " tons" << endl;
    }
};

class RefrigeratedTruck : public Truck {
  private:
    double temperature_control;

  public:
    RefrigeratedTruck(string mk, string md, int yr, double lc, double temp)
        : Truck(mk, md, yr, lc), temperature_control(temp) {}

    void displayRefrigeratedTruckInfo() const {
        displayTruckInfo();
        cout << "Temperature Control: " << temperature_control << " C" << endl;
    }
};

int main() {

    cout << "Truck Details:\n";
    Truck t1("Tata", "LPT 1613", 2022, 10);
    t1.displayTruckInfo();

    cout << "\nRefrigerated Truck Details:\n";
    RefrigeratedTruck rt1("Volvo", "F12", 2023, 15, -5);
    rt1.displayRefrigeratedTruckInfo();

    return 0;
}
