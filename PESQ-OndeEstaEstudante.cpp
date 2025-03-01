#include <iostream>

using namespace std;

int main() {
  int n, i, x, matricula;
  bool encontrado = false;

  // Lê o número de alunos
  cin >> n;

  // Lê os números de matrícula dos alunos
  int matriculas[n];
  for (i = 0; i < n; i++) {
    cin >> matriculas[i];
  }

  // Lê o número de matrícula do aluno a ser localizado
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
