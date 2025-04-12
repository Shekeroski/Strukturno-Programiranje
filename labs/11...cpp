 #include <iostream>
using namespace std;

void brojce(int broj) {
    int broevi;
    while (cin >> broevi) {  // Čitamo broevi od korisnikot
        int brojac = 0;
        int tempBroj = broevi;
        int tempBrojDuzina = 0;

        // Brojenje na cifri na brojot "broj"
        int tempFirst = broj;
        while (tempFirst != 0) {
            tempFirst /= 10;
            tempBrojDuzina++;
        }

        // Proverka na brojot na cifri vo vlezniot broj
        int tempBrojDuzinaOriginal = 0;
        int tempBrojCopy = broevi;

        // Prvo, izračunaj dužinu originalnog broja
        while (tempBrojCopy != 0) {
            tempBrojCopy /= 10;
            tempBrojDuzinaOriginal++;
        }

        // Proveri sve sekvence u tempBroj
        for (int i = 0; i <= tempBrojDuzinaOriginal; i++) {
            // Uzimanje sekvence cifara
            int subBroj = 0;
            int multiplier = 1;
            int temp = tempBroj;

            // Uzimanje cifara od trenutne pozicije
            for (int j = 0; j < tempBrojDuzina; j++) {
                subBroj = (temp % 10) * multiplier + subBroj;
                temp /= 10;
                multiplier *= 10;
            }

            // Proveri da li se subBroj poklapa sa brojem
            if (subBroj == broj) {
                brojac++;
            }

            // Odstranuvanje na poslednija cifra
            tempBroj /= 10;
        }

        // Ispisuvanje na rezultatot
        cout << "Vo brojot: " << broevi << " brojot: " << broj << " se javuva: " << brojac << " pati" << endl;
    }
}

int main() {
    int a;
    cin >> a;  // Čitame broj od korisnikot
    brojce(a);  // Povikuvame funkcija koja go broi povtoruvanjeto na brojot
    return 0;
}