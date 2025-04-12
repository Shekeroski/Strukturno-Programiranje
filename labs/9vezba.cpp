#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    int pozicija = 0;

    cout << "Vnesete binarni broevi (vnesete neshto sto ne e broj za kraj):\n";

    while (cin >> a) {
        int dekadniBroj = 0;
        int temp = a;
        int stepen = 0;

        while (temp > 0) {
            int cifra = temp % 10;
            dekadniBroj += cifra * pow(2, stepen);
            temp /= 10;
            stepen++;
        }

        cout << "Binarni broj: " << a << " -> Dekadni broj: " << dekadniBroj << endl;
        pozicija++;
    }

    return 0;
}