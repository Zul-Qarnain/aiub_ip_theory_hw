#include <iostream>
using namespace std;
int main() {
  cout << "Enter number of elements: ";
  int s;
  cin >> s;
  float arr1[s];
  int arr2[s];
  for (int i = 0; i < s; ++i) {
    cout << "Enter elements for array1:"<<i<<"- ";
    cin >> arr1[i];
  }cout<<" \n";
  for (int i = 0; i < s; ++i) {
    cout << "Enter elements for array2: "<<i<<"- ";
    cin >> arr2[i];
  }cout << "Product of elements in reverse order: ";
  for (int i = 0; i < s ; ++i) {
    cout << arr1[i] * arr2[s-(i+1)] << " ";
  }cout << endl;
  return 0;
}
