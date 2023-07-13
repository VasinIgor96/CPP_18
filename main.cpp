#include <iostream>
#include <string>

using namespace std;

struct WashingMachine {
    string brand;
    string color;
    double width;
    double length;
    double height;
    double power;
    double spinSpeed;
    int temperature;
};

void displayWashingMachine(const WashingMachine& machine) {
    cout << "Brand: " << machine.brand << endl;
    cout << "Color: " << machine.color << endl;
    cout << "Width: " << machine.width << " cm" << endl;
    cout << "Length: " << machine.length << " cm" << endl;
    cout << "Height: " << machine.height << " cm" << endl;
    cout << "Power: " << machine.power << " W" << endl;
    cout << "Spin Speed: " << machine.spinSpeed << " RPM" << endl;
    cout << "Temperature: " << machine.temperature << " °C" << endl;
}

int main() {
    using namespace std;

    WashingMachine machine;

    machine.brand = "Samsung";
    machine.color = "White";
    machine.width = 60.0;
    machine.length = 60.0;
    machine.height = 85.0;
    machine.power = 2000.0;
    machine.spinSpeed = 1200.0;
    machine.temperature = 40;

    cout << "Washing Machine Details:" << endl;
    displayWashingMachine(machine);

    return 0;
}
