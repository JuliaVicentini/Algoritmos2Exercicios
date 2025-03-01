#include <iostream>

using namespace std;

int main() {
  int n, i, x, matricula;
  bool encontrado = false;

  // L� o n�mero de alunos
  cin >> n;

  // L� os n�meros de matr�cula dos alunos
  int matriculas[n];
  for (i = 0; i < n; i++) {
    cin >> matriculas[i];
  }

  // L� o n�mero de matr�cula do aluno a ser localizado
  cin >> x;

  // Faz a busca sequencial
  for (i = 0; i < n; i++) {
    if (matriculas[i] == x) {
      encontrado = true;
      break;
    }
  }

  // Imprime o resultado
  if (encontrado) {
    cout << "Corredor " << i << endl;
  } else {
    cout << "Nao localizado" << endl;
  }

  return 0;
}
