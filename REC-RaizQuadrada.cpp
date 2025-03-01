#include <iostream>
#include <iomanip>
using namespace std;

double raiz_quadrada(double x, double x0, double epsilon) {
    // Calcula o quadrado da estimativa atual
    double x0_squared = x0 * x0;

    // Verifica se a diferença entre x0^2 e x é menor ou igual a epsilon
    if ((x0_squared - x) * (x0_squared - x) <= epsilon * epsilon)
        return x0; // Retorna x0 como a raiz quadrada aproximada

    // Caso contrário, atualiza x0 e chama recursivamente a função
    x0 = (x0 + x / x0) / 2.0;
    return raiz_quadrada(x, x0, epsilon);
}

int main() {
    double x, x0, epsilon;

    cin >> x >> x0 >> epsilon;
    
    cout << fixed << setprecision(4) << raiz_quadrada(x, x0, epsilon) << endl;

    return 0;
}