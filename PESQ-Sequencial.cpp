#include <iostream>

using namespace std;

int main() {
  const int TAMANHO_VETOR = 100;
  int vetor[TAMANHO_VETOR];
  int x, i, posicao = -1;

  // Lê os valores inteiros para o vetor
  for (i = 0; i < TAMANHO_VETOR; i++) {
    cin >> vetor[i];
    if (vetor[i] == -1) {
      break;
    }
  }

  // Lê o valor de X
  cin >> x;

  // Faz a pesquisa sequencial
  for (i = 0; i < TAMANHO_VETOR; i++) {
    if (vetor[i] == x) {
      posicao = i;
      break;
    }
  }

  // Imprime o resultado
  if (posicao == -1) {
    cout << x << " nao encontrado" << endl;
  } else {
    cout << x << " encontrado na posicao " << posicao << endl;
  }

  return 0;
}