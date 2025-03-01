#include <iostream>

using namespace std;

void quickSort(int vetor[], int inicio, int fim) {
  if (inicio < fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
      if (vetor[j] < pivo) {
        i++;
        swap(vetor[i], vetor[j]);
      }
    }

    swap(vetor[i + 1], vetor[fim]);

    quickSort(vetor, inicio, i);
    quickSort(vetor, i + 2, fim);
  }
}

int main() {
  int vetor[100];
  int tamanho = 0;
  int numero;

  cin >> numero;

  while (numero != -1) {
    vetor[tamanho] = numero;
    tamanho++;
    cin >> numero;
  }

  quickSort(vetor, 0, tamanho - 1);

  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  cout << endl;

  return 0;
}