#include <iostream>
#include <string>

using namespace std;

struct WaterHeater {
    string brand;
    string color;
    double power;
    double capacity;
    int heatingTemperature;
};

void displayWaterHeater(const WaterHeater& heater) {
    cout << "Brand: " << heater.brand << endl;
    cout << "Color: " << heater.color << endl;
    cout << "Power: " << heater.power << " W" << endl;
    cout << "Capacity: " << heater.capacity << " liters" << endl;
    cout << "Heating Temperature: " << heater.heatingTemperature << " °C" << endl;
}

int main() {
    WaterHeater heater;

    heater.brand = "Bosch";
    heater.color = "White";
    heater.power = 2000.0;
    heater.capacity = 50.0;
    heater.heatingTemperature = 60;

    cout << "Water Heater Details:" << endl;
    displayWaterHeater(heater);

    return 0;
}
