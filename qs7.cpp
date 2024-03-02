#include <iostream>
using namespace std;
int main() {
    int opt;
    float value;
    cout << "Converter Menu:" << "\n";
    cout << "1. inch to ft (1 ft = 12 inch)" << "\n";
    cout << "2. cm to m (1 m = 100 cm)" << "\n";
    cout << "3. miles to km (1 km = 0.621 miles)" << "\n";
    cout << "4. degree Celsius to kelvin (Kelvin = Celsius + 273)" << "\n";
    cout << "Enter your opt: ";
    cin >> opt;
    switch (opt) {
        case 1:
            cout << "Enter value in inches: ";
            cin >> value;
            cout << "Result: " <<  value / 12.0 << " ft" << "\n";
            break;
        case 2:
            cout << "Enter value in centimeters: ";
            cin >> value;
            cout << "Result: " << value/100.0 <<" m\n";
            break;
        case 3:
            cout << "Enter value in miles: ";
            cin >> value;
            cout << "Result: " <<value*0.621 <<" km" << "\n";
            break;
        case 4:
            cout << "Enter value in degrees Celsius: ";
            cin >> value;
            cout << "Result: "<< value + 273.15 << " K" << "\n";
            break;
        default:
            cout << "Invalid Option" << "\n";
            break;
    }
    return 0;
}
