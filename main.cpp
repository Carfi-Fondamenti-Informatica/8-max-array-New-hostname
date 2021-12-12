#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  
  int rango;
  float num[rango];

  cin >> rango;
  
  for(int i = 0; i < rango; i++)
  {
    cin >> num[i];
  }
  
  Massimo(num, rango);
  
  cout << massimo(num, rango) << endl;
  
  return 0;
}
