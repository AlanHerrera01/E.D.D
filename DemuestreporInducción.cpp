//Demuestre por inducción que la función Q(n)=1^2 +2^2 +3^2+…+n^2 puede expresarse como Q(n) = n (n+1) (2n+1) / 6

#include <iostream>

int calculateQ(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n*n + calculateQ(n-1);
    }
}

int calculateQFormula(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    int n;
    std::cout << "Ingrese un valor para n: ";
    std::cin >> n;

    int result = calculateQ(n);
    int expected = calculateQFormula(n);

    if (result == expected) {
        std::cout << "La expresión Q(" << n << ") = " << result << " coincide con la fórmula n(n+1)(2n+1)/6." << std::endl;
    } else {
        std::cout << "La expresión Q(" << n << ") = " << result << " no coincide con la fórmula n(n+1)(2n+1)/6." << std::endl;
    }

    return 0;
}
