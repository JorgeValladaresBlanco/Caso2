#ifndef _LIST_
#define _LIST_
#include <iostream>
#include <stdlib.h>

#include "nodo.h"
using namespace std;
#define POSITION_BEGINNING 0
#define POSITION_END 99999999



struct List {
    int size = 0;
    nodo* start = nullptr;
    nodo* end = nullptr;

    bool isEmpty(){
        return size == 0;

    }

    int getSize() {
        return size;
    }

    void sortBySelectionSort(float[]*, pValuesToSort){

    int pValuesToSort = 10;
    int pListNumbers, pMinimumDigit, pPosition, pPosition2;

    for (pPosition = 0; pPosition < pValuesToSort; pPosition++){
        pMinimumDigit = pPosition;
        for (pPosition2 = pPosition + 1; pPosition2 < pValuesToSort; pPosition2++){
            if(pListNumbers[pPosition2] < pListNumbers[pMinimumDigit]){
                pMinimumDigit = pPosition2;
            }
        }
    int pAuxiliarDigit = pListNumbers[pPosition];
    pListNumbers[pPosition] = pListNumbers[pMinimumDigit];
    pListNumbers[pMinimumDigit] = pAuxiliarDigit;
        }
    
    for(pPosition = 0; pPosition < pValuesToSort; pPosition++){
        cout <<pListNumbers[pPosition]<< " ";
    }



}};

#endif
