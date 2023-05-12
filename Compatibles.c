#include "Listas.h"


int Posible(Cruces *C1, Cruces *C2,C_incompatible *L){
    if(L==NULL)
        return 1;
    if(C2==NULL)
        return 1;
    if(!strcmp(C1->Cruce,L->Par1) || !strcmp(C1->Cruce,L->Par2))
        if(!strcmp(C2->Cruce,L->Par1) || !strcmp(C2->Cruce,L->Par2))
            return 0;
    return (Posible(C1,C2,L->next));
}



int asigna(Cruces *L1, C_incompatible *L2, Turnos *L3){
    Cruces *p=L1;
    Cruces *q;
    char turno= "A"-1;
    if(!L3)
        /*debe de haber una funcion que asigne el primer elemento de
        la lista a L3, para asi ir comparando ese con el primero en L1*/
    while (!p){
        q=p->next;
        turno++;
        while(!q){
            if(Posible(p,q,L2))
                L3=FinalTurnos(L3,CrearTurno(q->Cruce,turno));
        }
    }
}

