#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  const int TAMANHO_VETOR = 20;
  int vetor[TAMANHO_VETOR];
  int x, i, posicao;

  // Lê os valores das IDs autorizadas para o vetor
  for (i = 0; i < TAMANHO_VETOR; i++) {
    cin >> vetor[i];
    if (vetor[i] == -1) {
      break;
    }
  }

  // Ordena o vetor de IDs autorizadas
  sort(vetor, vetor + i);

  // Lê a ID a ser verificada
  cin >> x;

  // Faz a busca binária
  posicao = binary_search(vetor, vetor + i, x);

  // Imprime o resultado
  if (posicao) {
    cout << "Possui acesso" << endl;
  } else {
    cout << "Nao possui acesso" << endl;
  }

  return 0;
}
