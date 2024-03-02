#include <iostream>
using namespace std;
int main() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;
    cout << "Vowels in the input word: ";
    for (int i = 0; word[i] != '\0'; ++i) {
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cout << word[i];
        }
    }
    cout << '\n';
    return 0;
}
