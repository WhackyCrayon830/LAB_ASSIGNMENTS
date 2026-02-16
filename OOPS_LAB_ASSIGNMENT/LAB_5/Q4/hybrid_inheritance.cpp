#include <iostream>
using namespace std;

class Device {
  public:
    void printDeviceDetails() {
        cout << "--------------" << endl;
        cout << "Power: 25W" << endl;
        cout << "Voltage: 5V" << endl;
        cout << "Amperage: 0.5A" << endl;
        cout << "--------------" << endl;
    }
};

class Phone : virtual public Device {
  public:
    void printPhoneDetails() {
        cout << "--------------" << endl;
        cout << "Gen: 5G" << endl;
        cout << "Plan: Unlimited" << endl;
        cout << "Technology: Volte" << endl;
        cout << "--------------" << endl;
    }
};

class Camera : virtual public Device {
  public:
    void printCameraDetails() {
        cout << "--------------" << endl;
        cout << "Aperture: 2.5" << endl;
        cout << "ISO: 500" << endl;
        cout << "Shutter: 1/20" << endl;
        cout << "--------------" << endl;
    }
};

class SmartPhone : public Camera, public Phone {};

int main() {
    SmartPhone apple;
    apple.printDeviceDetails();
    apple.printPhoneDetails();
    apple.printCameraDetails();
    return 0;
}