#include <iostream>

using namespace std;

#define A 10

int main() {
  
  int vet[A];
  int maior = 0, menor = 1000;
  
  // vet[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

  // Leitura
  for (int i = 0; i < A; i++){
    cin>>vet[i];
  }

  //Processamento
  for (int i = 0; i < A; i++){
    if(vet[i] > maior){
      maior = vet[i];
    }
    if(vet[i] < menor){
      menor = vet[i];
    }
  }
  
  cout<<"Maior numero: "<<maior<<endl;
  cout<<"Menor numero: "<<menor<<endl;
  
  return 0;
}