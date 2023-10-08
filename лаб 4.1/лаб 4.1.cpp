// Lab_04_1.cpp
// < ÷ай ƒев≥д >
// Ћабораторна робота є 4.1
// ÷икли.
// ¬ар≥ант 23
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 10;  // ¬каж≥ть значенн€ n
    double S1 = 0, S2 = 0, S3 = 0, S4 = 0;

    // 1) while(Е) { Е }
    int i = 3;
    while (i <= n) {
        S1 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
        i++;
    }

    // 2) do{ Е } while(Е);
    i = 3;
    do {
        S2 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
        i++;
    } while (i <= n);

    // 3) for(Е; Е; n++) {Е }
    for (i = 3; i <= n; i++) {
        S3 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
    }

    // 4) for(Е; Е; n--) {Е }
    for (i = n; i >= 3; i--) {
        S4 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
    }

    cout<< "while :" << S1 << endl;
    cout << "do-while : " << S2 << endl;
    cout << "for n++ : " << S3 << endl;
    cout << "for n-- : " << S4 << endl;

    return 0;
}
