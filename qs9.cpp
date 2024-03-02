#include<iostream>
using namespace std;
int main() {
    const int size = 10;
    int numbers[size];
    cout << "Enter 10 integer numbers separated by spaces: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    cout << "Even Numbers Are: ";
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
    cout << "Odd Numbers Are: ";
    for (int i = 0; i < size; ++i) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
