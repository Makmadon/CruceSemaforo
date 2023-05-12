#include "Listas.h"

//Se verifica que el par de cruces C1 y C2 sea un par que pueden cruzar al mismo tiempo
int Posible(Cruces *C1, Cruces *C2,C_incompatible *L){
//Si la lista de Cruces incompatibles es vacia entonces todos los pares de cruces son permitidos
    if(L==NULL)
        return 1;
//Si el segundo par de cruce es nulo entonces no quedan mas cruces que comparar
    if(C2==NULL)
        return 1;
//Se compara el primer par de cruces con ambos pares de lla lista de incompatibles
    if(!strcmp(C1->Cruce,L->Par1) || !strcmp(C1->Cruce,L->Par2))
//Si el primer par se encuentra, se verifica eque el segundo tambien lo este en alguno de los dos pares
//en caso de estar ambos significa que el cruce es invalido, se retorna falso.
        if(!strcmp(C2->Cruce,L->Par1) || !strcmp(C2->Cruce,L->Par2))
            return 0;
//Para mayor eficiencia se hace recursion de cola pero con el siguiente giro incompatible
//de esta forma se verifica toda la lista de giros incompatibles
    return (Posible(C1,C2,L->next));
}



int asigna(Cruces *L1, C_incompatible *L2, Turnos *L3){
    Cruces *p=L1;
    Cruces *q;
    char turno= "A"-1;
    if(!L3)
        /*debe de haber una funcion que asigne el primer elemento de
        la lista a L3, para asi ir comparando ese con el primero en L1
        OJO si se hace esta modificacion es necesario modificar en POSIBLE
        Para que reciba el primero de la lista L3*/
    while (!p){
        q=p->next;
        turno++;
        while(!q){
            if(Posible(p,q,L2))
                L3=FinalTurnos(L3,CrearTurno(q->Cruce,turno));
        }
    }
}

