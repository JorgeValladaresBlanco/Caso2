#ifndef _NODO_
#define _NODO_ 1

struct player {
    int numero;
    string name;

}

struct nodo {
    player data;
    nodo* next = nullptr;
};

#endif