#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
  int trab, contador = 0;

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        trab = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = trab;
        contador++;
        cout << "New trab:" << trab << endl;
      }
    }
  }

  cout << "Contador:" << contador << endl;
}

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  bubbleSort(arr, n);

  return 0;
}
