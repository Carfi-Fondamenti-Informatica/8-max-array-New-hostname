#include "lib.h"

float massimo(const float num[], int rango)
{
  num[rango];
  
  float max = num[0];
  
  for(int i = 0; i < rango; i++)
  {
    if(max < num[i])
    {
      max = num[i];
    }
  }
  
  return max;
}
