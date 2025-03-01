#include <iostream>
using namespace std;

int calcular_an(int a, int n) {
    // Caso o expoente seja 0
    if (n == 0)
        return 1;
    // Caso n seja maior que 0
    return a * calcular_an(a, n - 1);
}

int main() {
    int a, n;
    cin >> a >> n;

    cout << calcular_an(a, n) << endl;

    return 0;
}