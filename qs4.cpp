#include <iostream>
using namespace std;
int main() {
  int num, sum = 0;
  cout << "Enter a number: ";
  cin >> num;
  for (int i = 2; i <= num; i += 2) {
    sum += i;
  }
  cout << "Sum of even numbers: " << sum << endl;
  return 0;
}
