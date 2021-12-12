#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  
  int rango;

  cin >> rango;
  
  float num[rango];
  
  for(int i = 0; i < rango; i++)
  {
    cin >> num[i];
  }
  
  massimo(num, rango);
  
  cout << massimo(num, rango) << endl;
  
  return 0;
}
