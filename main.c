#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int legajo;
    char nombre[51];
    Fecha fIngr;
    float sueldo;
}Empleado;

typedef struct{
    int vec;
    size_t ce;
    size_t tamElem;
}Vector;

typedef struct
{
    void*primero;
    void*actual;
    void*ultimo;
    size_t tamElem;
}Iterator;

int main()
{
    //////////////////////FORMA DE RECORRER UNA FUNCION////////////////////////
   Vector vector;
   Empleado *empl;
   vectorCrear(&vector,sizeof(Empleado));
   cargarVector(&vector);
   Iterador it;
   iteradorCrear(&it,&vector);
   empl = iteradorPrimero(&it);
   while(!interadorFin(&it)){
    mostrarEmpl(empl);
    empl=iteradorSiguiente(&it);
   }
   ////////////////////////////////////////////////////////////////////////////

   vectorOrdenarSeleccion(&vector,cmpEmplNombre);
   //vectorRecorrer(&vector,imprimirEmpl,stdout);
   vectorInsertar(&vectar,&empl);

   //0empl.legajo=5;
   //bool existe = vectorBuscar(&vector,&empl,empEmplfIngrYLeg);
}
void iteratorCrear(Iterador *it, Vector *vector){

    it->primero=Vector->vec;
    it->actual=NULL;
    it->ultimo=vector->vec + (vector->ce-1)* iterator->tamElem;
    it->tamElem=vector->vector->tamElem;
}
void *iteradorPrimero(Iterador*it){

    if(it->primero > it->ultimo){
        return NULL;    }
    it->actual = it->primero;
    return it->actual;
}
void iteradorSegundo(Iterador*it){

    if(!it->actual)
    {
        return iteradorPrimero(it); //funciona pero no se debe de hacer de esta forma.
    }
    it->actual+=tamElem;
    if(it->actual> it->ultimo){
        return NULL;
    }
    return it->actual;
}

int empEmplNombre(const void* e1, const void * e2){
    const Empleado *emp1=e1;
    const Empleado *emp2=e2;

    return (strcpy(emp1->nombre,emp2->nombre));
}

int empEmplfIngrYLeg(const void* e1, const void * e2){
    const Empleado *emp1=e1;
    const Empleado *emp2=e2;

    int comp = cmpFechas(&emp1->fIngr,&emp2->fIngr);
    if(comp!=0){
        return comp;
    }
    return (emp1->legajo - emp2->legajo);
}

