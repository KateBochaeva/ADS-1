// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value == 0||value == 1)
    return false;
  else
  {
    bool flag = true;
    for (int i = 2; i < value/2; i++)
      if(value%i == 0)
      {
        flag = false;
        break;
      }
      return flag;
  }
}

uint64_t nPrime(uint64_t n) {
    bool flag = true;
    int i = 1;
    int x = 0;
    while (x != n)
    {
      i++;
      for (int j = 2; j < i; j++)
        if (i%j == 0)
        {
          flag = false;
          break;
        }
      if (flag == true)
        x++;
      flag = true;
    }
    return i;
}

uint64_t nextPrime(uint64_t value) {
bool flag = false;
  while(flag == false){
    flag = true;
    value++;
    for(int i = 2; i <= value/2; i++)
      if (value%i == 0)
      {
        flag = false;
        break;
      }
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  bool flag = true;
  for(uint64_t i = 2; i < hbound; i++)
  {
    for(uint64_t j = 2; j <= i/2; j++)
      if (i%j == 0)
        {
          flag = false;
          break;
        }
    if (flag == true)
      sum+ = i;
    else
      flag = true;
  }
  return sum;
}
