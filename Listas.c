#include "Listas.h"

//Funcion que reserva el espacio de memoria para la estructura Cruce
Cruces *CrearCruce(char *cruce){
    Cruces *newp;
    if((newp=(Cruces*)malloc(sizeof(Cruces)))==NULL)
        return NULL;
    strcpy(newp->Cruce,cruce);
}


//Reserva el espacio de memoria para la estructura de Cruces incompatibles
C_incompatible *CrearC_incompatible(char *par1, char *par2){
    C_incompatible *newp;
    if((newp=(C_incompatible*)malloc(sizeof(C_incompatible)))==NULL)
        return NULL;
    strcpy(newp->Par1,par1);
    strcpy(newp->Par2,par2);
    return newp;
}

//Reserva el espacio de memoria para la estructura de los turnos
Turnos *CrearTurno(char *cruce, char *turno){
    Turnos *newp;
    if((newp=(Turnos*)malloc(sizeof(Turnos)))==NULL)
        return NULL;
    strcpy(newp->cruce,cruce);
    strcpy(newp->turno,turno);
    return newp;
}

//Funcion que anade al final de la lista de tipo Cruces un nuevo Nodo
Cruces *FinalCruces(Cruces* lista, Cruces *newp){
    if(lista==NULL)
        return newp;
    Cruces *p=lista;
    for (;p->next!=NULL;p=p->next)
    p->next=newp;
    return lista;
}

//Funccion que anade al final de una lista de giros incompatibles un nuevo Nodo
C_incompatible *Final_incompatible(C_incompatible *lista, C_incompatible *newp){
    if(lista==NULL)
        return newp;
    for(C_incompatible *p=lista; p->next!=NULL; p=p->next)
    p->next=newp;
    return lista;
}

//Funcion que anade al final de una lista de turnos un nuevo Nodo
Turnos *FinalTurnos(Turnos *lista, Turnos *newp){
    if(lista==NULL)
        return newp;
    for(Turnos *p=lista; p->next!=NULL; p=p->next)
    p->next=newp;
    return lista;
}
