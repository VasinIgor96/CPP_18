#include <iostream>
#include <string>

using namespace std;

struct Iron {
    string brand;
    string model;
    string color;
    int minTemperature;
    int maxTemperature;
    bool steamEnabled;
    double power;
};

void displayIron(const Iron& iron) {
    cout << "Brand: " << iron.brand << endl;
    cout << "Model: " << iron.model << endl;
    cout << "Color: " << iron.color << endl;
    cout << "Min Temperature: " << iron.minTemperature << " °C" << endl;
    cout << "Max Temperature: " << iron.maxTemperature << " °C" << endl;
    cout << "Steam Enabled: " << (iron.steamEnabled ? "Yes" : "No") << endl;
    cout << "Power: " << iron.power << " W" << endl;
}

int main() {
    Iron iron;

    iron.brand = "Philips";
    iron.model = "GC1234";
    iron.color = "Blue";
    iron.minTemperature = 100;
    iron.maxTemperature = 200;
    iron.steamEnabled = true;
    iron.power = 1500.0;

    cout << "Iron Details:" << endl;
    displayIron(iron);

    return 0;
}
