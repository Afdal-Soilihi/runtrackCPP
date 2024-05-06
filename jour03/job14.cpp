#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool estPalindrome(const string& s) {
    int debut = 0;
    int fin = s.length() - 1;

    while (debut < fin) {
        if (s[debut] != s[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    vector<string> tab = {"radar", "hello", "lvel", "stats", "world"};

    cout << "Palindromes trouves dans le tableau :" << endl;
    for (const string& mot : tab) {
        if (estPalindrome(mot)) {
            cout << mot << endl;
        }
    }

    return 0;
}