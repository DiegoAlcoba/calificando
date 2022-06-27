#ifndef ALUMNO_H
#define ALUMNO_H
#include "persona.h"
#include <vector>

class Alumno: public Persona
{
public:
    Alumno();
    ~Alumno();

    std::vector<float> notas;
    void setNota(float nota);
    void setNotas(float nota1);
    void setNotas(float nota1, float nota2);
    void setNotas(float nota1, float nota2, float nota3);
    int getNotas(int nota);

    float calcularMedia();
    int getNumeroNotas();
    void printAlumno();
};

#endif // ALUMNO_H
