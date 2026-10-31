#include <iostream>
using namespace std;

class WiFi {
public:
    void connect() {
        cout << "Connecting through WiFi" << endl;
    }
};

class Bluetooth {
public:
    void connect() {
        cout << "Connecting through Bluetooth" << endl;
    }
};

class SmartHub : public WiFi, public Bluetooth {
public:
    void control() {
        WiFi::connect();
        Bluetooth::connect();
        cout << "Smart Hub is controlling devices" << endl;
    }
};

int main() {
    SmartHub s;
    s.control();

    return 0;
}
