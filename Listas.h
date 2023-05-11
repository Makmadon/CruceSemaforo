#include "Compatibles.h"


Cruces *CrearCruce(char *cruce);

C_incompatible *CrearC_incompatible(char *par1, char *par2);

Turnos *CrearTurno(char *cruce, char *turno);

Cruces *FinalCruces(Cruces* lista, Cruces *newp);

C_incompatible *Final_incompatible(C_incompatible *lista, C_incompatible *newp);

Turnos *FinalTurnos(Turnos *lista, Turnos *newp);