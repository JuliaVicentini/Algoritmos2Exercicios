#include <iostream>
#include <string>
using namespace std;

// Dados do aluno
struct Aluno {
    string nome;
    string curso;
    int matricula;
};

int main() {
    const int MAX_ALUNOS = 10000;
    Aluno alunos[MAX_ALUNOS];
    int N; // numero de alunos
    string nome_aluno; // nome do aluno a ser consultado
    
    cin >> N;
    
    // Leitura dos dados de cada aluno
    for (int i = 0; i < N; ++i) {
        cin.ignore(); 
        getline(cin, alunos[i].nome);
        getline(cin, alunos[i].curso);
        cin >> alunos[i].matricula;
    }
    
    // Leitura do nome do aluno a ser consultado
    cin.ignore(); 
    getline(cin, nome_aluno);
    
    // Busca pelo aluno e exibição dos dados
    bool encontrado = false;
    for (int i = 0; i < N; ++i) {
        if (alunos[i].nome == nome_aluno) {
            cout << alunos[i].nome << endl;
            cout << alunos[i].curso << endl;
            cout << alunos[i].matricula << endl;
            encontrado = true;
            break;
        }
    }
    
    // Caso o aluno nao seja encontrado
    if (!encontrado) {
        cout << "Aluno nao localizado" << endl;
    }
    
    return 0;
}