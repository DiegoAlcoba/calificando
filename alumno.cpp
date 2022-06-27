#include "alumno.h"

Alumno::Alumno() {

}

Alumno::~Alumno() {

}

void Alumno::setNota(float nota) {
    notas.push_back(nota);
}

void Alumno::setNotas(float nota1) {

    setNota(nota1);
}

void Alumno::setNotas(float nota1, float nota2) {

    setNota(nota1);
    setNota(nota2);
}

void Alumno::setNotas(float nota1, float nota2, float nota3) {

    setNota(nota1);
    setNota(nota2);
    setNota(nota3);
}

int Alumno::getNotas(int nota) {
    return notas[nota];
}

float Alumno::calcularMedia() {

    float nNotas = 0.0;

    for (int i = 0; i < (int)notas.size(); i++) {

        nNotas += notas[i];
    }

    return (nNotas / (float)notas.size());
}

int Alumno::getNumeroNotas() {

    return (int)notas.size();
}

void Alumno::printAlumno() {
    cout << "Nombre: " << getName() << endl;
    cout << "Apellidos: " << getSurname() << endl;
    cout << "DNI: " << getDNI() << endl;
    cout << "Edad: " << getAge() << endl;
    cout << "Nota media: " << calcularMedia() << endl;
}
