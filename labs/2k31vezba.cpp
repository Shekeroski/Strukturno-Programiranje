#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool palindrom(char str[], int len) {
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        int palindrombrojac=0;
        char str[100];
        cin.getline(str, 100);
        int len = strlen(str);

        char zboroj[100];
        int indeksodzborojte = 0;

        for (int j = 0; j <= len; j++) {
            if (isalpha(str[j])) {
                zboroj[indeksodzborojte++] = tolower(str[j]);
            }
            if (!isalpha(str[j]) || j == len) {
                if (indeksodzborojte>0) {
                    zboroj[indeksodzborojte] = '\0'; // Завршување на тековниот збор
                    if (palindrom(zboroj, indeksodzborojte)) {
                        palindrombrojac++;
                    }
                    indeksodzborojte = 0; // Ресетирање на индексот за нов збор
                }
            }
        }
         cout<<str<<": "<<palindrombrojac<<endl;
    }
    return 0;
}