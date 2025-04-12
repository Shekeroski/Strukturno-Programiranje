#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char str[20];
    char c;
    cin.getline(str, 20);
    cin >> c;

    int indeks = -1, indeks2 = -1;
    int len = strlen(str);


    for (int i = 0; i < len; i++) {
        if (str[i] == c) {
            indeks = i;
            break;
        }
    }

    if (indeks == -1) {
        cout << "Знакот не се појавува во стрингот." << endl;
        return 0;
    }

    for (int i = indeks + 1; i < len; i++) {
        if (str[i] == c) {
            indeks2 = i;
            break;
        }
    }

    if (indeks2 == -1) {
        indeks2 = len - 1;
    }

    for (int i = indeks; i <= indeks2; i++) {
        if (!isspace(str[i])) {
            cout << str[i];
        }
    }
    cout << endl;

    return 0;
}