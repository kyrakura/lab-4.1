#include <iostream>
#include <cmath>

int main() {
    int n = 10;  // ������ �������� n
    double S1 = 0, S2 = 0, S3 = 0, S4 = 0;

    // 1) while(�) { � }
    int i = 3;
    while (i <= n) {
        S1 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
        i++;
    }

    // 2) do{ � } while(�);
    i = 3;
    do {
        S2 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
        i++;
    } while (i <= n);

    // 3) for(�; �; n++) {� }
    for (i = 3; i <= n; i++) {
        S3 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
    }

    // 4) for(�; �; n--) {� }
    for (i = n; i >= 3; i--) {
        S4 += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
    }

    std::cout << "while :" << S1 << std::endl;
    std::cout << "do-while : " << S2 << std::endl;
    std::cout << "for n++ : " << S3 << std::endl;
    std::cout << "for n-- : " << S4 << std::endl;

    return 0;
}
