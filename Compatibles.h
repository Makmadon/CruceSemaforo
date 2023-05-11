#include <stdlib.h>
#include <string.h>

typedef struct cruces{
    char Cruce[4];
    struct cruces *next;    
}Cruces;

typedef struct c_incompatible{
    char Par1[4];
    char Par2[4];
    struct c_incompatible *next;        
}C_incompatible;

typedef struct turnos{
    char cruce[4];
    char turno;
    struct turnos *next;
}Turnos;

int Posible(Cruces *C1,Cruces *C2, C_incompatible *L);

int asigna(Cruces *L1, C_incompatible *L2, Turnos *L3);


