#include <iostream>
using namespace std;
int main() {
    float bP, sP;
    cout << "Enter buying price: ";
    cin >> bP;
    cout << "Enter selling price: ";
    cin >> sP;
    float profit = sP - bP;
    if (profit > 0) {
        cout << "Profit: $" << profit << " tk\n";
    } 
    else if (profit < 0) {
        cout << "Loss: $" << -profit << " tk\n";
    } 
    else {
        cout << "No profit, no loss." << " tk\n";
    }
    return 0;
}
