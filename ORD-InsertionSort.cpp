#include <iostream>
using namespace std;

void insertionSortDecrescente(int vetor[], int tamanho) {
  for (int i = 1; i < tamanho; i++) {
    int chave = vetor[i];
    int j = i - 1;

    while (j >= 0 && vetor[j] < chave) {
      vetor[j + 1] = vetor[j];
      j--;
    }

    vetor[j + 1] = chave;
  }
}

int main() {
  int vetor[100];
  int tamanho = 0;
  int numero;

  cin >> numero;

  while (numero != 0) {
    vetor[tamanho] = numero;
    tamanho++;
    cin >> numero;
  }

  insertionSortDecrescente(vetor, tamanho);

  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}