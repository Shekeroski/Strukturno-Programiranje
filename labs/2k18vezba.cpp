#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Внесување на димензиите на матриците
    cout << "Внесете број на редови и колони: ";
    cin >> rows >> cols;

    // Дефинирање на матриците
    int A[rows][cols], B[rows][cols];

    // Внесување на првата матрица
    cout << "Внесете елементите на првата матрица A: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Внесување на втората матрица
    cout << "Внесете елементите на втората матрица B: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    int count = 0;  // Бројач за идентични колони

    // Прегледување на колоните на првата матрица
    for (int j = 0; j < cols; j++) {
        // Прегледување на колоните на втората матрица      // j ostanvit isto a k se zgolemvit odnosno kolonite od vtorata matrica
        for (int k = 0; k < cols; k++) {
            bool isEqual = true;  // Променлива која проверува дали колоните се исти

            // Проверка на елементите во колоните
            for (int i = 0; i < rows; i++) {
                if (A[i][j] != B[i][k]) {
                    isEqual = false;
                    break;  // Прекини ако не се исти
                }
            }

            // Ако колоните се исти, зголеми го бројачот
            if (isEqual) {
                count++;
                break;  // Ако најдеме една иста колона, нема потреба да продолжуваме со споредување на другите колони на матрицата B
            }
        }
    }

    // Печатење на бројот на исти колони
    cout << "Број на исти колони: " << count << endl;

    return 0;
}