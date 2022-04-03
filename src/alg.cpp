// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
 for (int i = 2; i < value; i++) {
       if (value % i == 0) {
         return false;
            break;
        }
    }
   return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    int count = 0;
    int value = 1;
    while (count != n) {
        value++;
        if (checkPrime(value) == true) {
            count++;
        }
    }
   return value; 
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    int v = value+1;
    while (true) {
    if (checkPrime(v))
      return v;
    v++;
  }
  return v;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    uint64_t summ = 0;
    while (hbound !=2) {
        hbound--;
        if (checkPrime(hbound) == true) {
            summ = summ + hbound;
        }
    }
    return summ;
}
