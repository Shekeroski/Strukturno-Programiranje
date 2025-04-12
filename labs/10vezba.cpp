//da se ispecatat 10 broevi pogolemi od x koi sto go sodrzat brojot c,p pati
#include <iostream>
    using namespace std;

    int main() {
        int x, c, p;
        cout << "Vnesete x, c, p: ";
        cin >> x >> c >> p;

        int count = 0;
        int broj = x + 1; // Početak od broja veće od x

        while (count < 10) {
            int temp = broj;
            int brojCifara = 0;

            // Proveri koliko puta cifra c se pojavljuje u broju
            while (temp > 0) {
                int cifra = temp % 10;
                if (cifra == c) {
                    brojCifara++;
                }
                temp /= 10;
            }

            // Ako broj sadrži cifru c točno p puta, ispiši ga
            if (brojCifara == p) {
                cout << broj << " ";
                count++;
            }
            broj++;
        }

        cout << endl;
        return 0;
    }
