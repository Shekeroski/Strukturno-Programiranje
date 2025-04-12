#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void transform(char *text) {
    char str[20];
    int len = strlen(text);
    for(int i = 0; i < len; i++) {
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' ||
           text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            str[i] = toupper(text[i]);
           } else {
               str[i] = tolower(text[i]);
           }
    }
    str[len] = '\0';
    cout << str << endl;
}

int main() {
    char str[20];
    cin.getline(str, 20);
    transform(str);
    return 0;
}