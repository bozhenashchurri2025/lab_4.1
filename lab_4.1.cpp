// Lab_4.1_.cpp
// Щур Божена
// Лабораторна робота № 4.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 27


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, N, i;
    double S;

    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

    // цикл while
    S = 0;
    i = k;
    while (i <= N)
    {
        S += (pow(i, 2) / (pow(k, 2) + pow(N, 2)));
        i++;
    }
    cout << "while: " << S << endl;

    // цикл do...while
    S = 0;
    i = k;
    do {
        S += (pow(i, 2) / (pow(k, 2) + pow(N, 2)));
        i++;
    } while (i <= N);
    cout << "do...while: " << S << endl;

    // цикл for (зростання)
    S = 0;
    for (i = k; i <= N; i++)
    {
        S += (pow(i, 2) / (pow(k, 2) + pow(N, 2)));
    }
    cout << "for (up): " << S << endl;

    // цикл for (спадання)
    S = 0;
    for (i = N; i >= k; i--)
    {
        S += (pow(i, 2) / (pow(k, 2) + pow(N, 2)));
    }
    cout << "for (down): " << S << endl;

    return 0;
}# lab_4.1
