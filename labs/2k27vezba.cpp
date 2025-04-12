#include<iostream>
using namespace std;

void sort(int *x, int *y, int *z) {
    if(*y > *x) {
        swap(*x, *y);
    }
    if(*z > *x) {
        swap(*x, *z);
    }
    if(*y < *z) {
        swap(*z, *y);
    }
}

void swap(int &x,int &y) {
    int z;
    z=x;
    x=y;
    y=z;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    sort(&a, &b, &c);

    cout << a << " " << b << " " << c;
    return 0;
}