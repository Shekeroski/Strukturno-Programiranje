#include <iostream>
using namespace std;

// Рекурзивна функција за обработка на цифрите
void processNumber(int number, int compareValue) {
    if (number == 0) {
        return; // Крај на рекурзијата
    }

    // Рекурзивно обработи на останатите цифри (во вистински редослед)
    processNumber(number / 10, compareValue);

    // Земете ја последната цифра
    int digit = number % 10;

    // Проверете дали е поголема од 5
    if (digit > compareValue) {
        cout << "1";
    } else {
        cout << "0"; // Ако е помала или еднаква, печати 0
    }
}

int main() {
    int number,compareValue;

    // Внесување на бројот
    cout << "Внеси број: ";
    cin >> number;

    cin>>compareValue; // Фиксен праг за споредба

    // Започни ја рекурзивната функција
    processNumber(number, compareValue);

    return 0;
}