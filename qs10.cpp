#include <iostream>
using namespace std;
int main() {
    int nD = 7;
    float dS[nD];
    float tS = 0;
    for (int i = 0; i < nD; ++i) {
        cout << "Enter sales for day " << i + 1 << ": ";
        cin >> dS[i];
        tS += dS[i];
    }
    float avgS = tS / nD;
    int cB = 0;
    for (int i = 0; i < nD; ++i) {
        if (dS[i] < avgS) {
            cB++;
        }
    }
    cout << "\nWeekly Sale Calculator!" << endl;
    cout << "Total weekly sale: " << tS << endl;
    cout << "Average daily sale: " << avgS << endl;
    cout << "Count of Day Below Average: " << cB << endl;
    if (tS >= 10000) {
        cout << "Weekly Total Target Achieved" << endl;
    } else {
        cout << "Weekly Total Target Not Achieved" << endl;
    }
    return 0;
}
