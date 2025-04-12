#include <iostream>
using namespace std;

int main() {
    long long n;  // За читање на големи броеви
    cin >> n;  // Читање на првиот број

    while (n >= 10) {
        // Пресметување на последните две цифри
        int last_digit = n % 10;
        int second_last_digit = (n / 10) % 10;

        // Пресметување на сумата на последните две цифри
        int sum = last_digit + second_last_digit;

        // Отстранување на последните две цифри
        n /= 100;

        // Додавање на сумата од последните две цифри на крајот на бројот
       if(sum>=10) {
           n=n*100+sum;
       }else {
           n=n*10+sum;
       }
        // Печатење на тековниот број
        cout << n << endl;
    }

    return 0;
}