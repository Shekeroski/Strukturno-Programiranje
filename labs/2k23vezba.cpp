#include<iostream>
using namespace std;

int sum_parni(int n) {
    if (n < 2) {
        return 0;
    }
    if (n % 2 == 0) {
        return n + sum_parni(n - 2);
    } else {
        return sum_parni(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    // Пресметај го збирот на парни броеви до n и испечати го
    cout << "Збирот на парните броеви до " << n << " е: " << sum_parni(n) << endl;

    return 0;
}