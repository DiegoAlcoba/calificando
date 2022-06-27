#ifndef PROFESOR_H
#define PROFESOR_H
#include "persona.h"
#include "alumno.h"
#include <vector>

class Profesor: public Persona
{
public:
    Profesor();
    ~Profesor();
    void setAlumno(Alumno *alumno);
    std::vector<Alumno *> lista;

    void ponerNotas(Alumno *alumno, float nota1);
    void ponerNotas(Alumno *alumno, float nota1, float nota2);
    void ponerNotas(Alumno *alumno, float nota1, float nota2, float nota3);

    int getPosicionAlumno(Alumno *alumno);
    int getPosicionAlumno(string buscaDNI);
    float getMedia(Alumno *alumno);
    void mejorMedia();
    void printALumno(int pos);
    void printLista();
    void print();

};

#endif // PROFESOR_H
