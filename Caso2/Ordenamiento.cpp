#include<iostream>
#include<conio.h>
#include "list.h"

using namespace std;


int main(){

    list ListToSort;
    ListToSort.insert(5);
    ListToSort.insert(19);
    ListToSort.insert(23);
    ListToSort.insert(7);
    ListToSort.insert(54);
    ListToSort.insert(12);
    ListToSort.insert(3);
    ListToSort.insert(6);
    ListToSort.insert(12);
    ListToSort.insert(9);


    nodo* path = ListToSort.start;
    while (path!=nullptr){
        cout << path -> data << endl;
        path = path ->next;
    }

    cout << ListToSort.isEmpty() << " " << ListToSort.getSize() << endl;
    
    
    }



