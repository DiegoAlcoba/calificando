#include "profesor.h"

Profesor::Profesor() {

}

Profesor::~Profesor() {

}

void Profesor::setAlumno(Alumno *alumno) {

    lista.push_back(alumno);
}

void Profesor::ponerNotas(Alumno *alumno, float nota1) {

    alumno -> setNotas(nota1);
}

void Profesor::ponerNotas(Alumno *alumno, float nota1, float nota2) {

    alumno -> setNotas(nota1, nota2);
}

void Profesor::ponerNotas(Alumno *alumno, float nota1, float nota2, float nota3) {

    alumno -> setNotas(nota1, nota2, nota3);
}

int Profesor::getPosicionAlumno(Alumno *alumno) {

    string buscaDNI = alumno -> getDNI();

    for (int i = 0; i < (int)lista.size(); i++) {
        if (lista[i] -> getDNI() == buscaDNI) {

            return i;
        }
    }

    return -1;
}

int Profesor::getPosicionAlumno(std::string buscaDNI) {

    for (int i = 0; i < (int)lista.size(); i++) {
        if (lista[i] -> getDNI() == buscaDNI) {

            return i;
        }
    }

    return -1;
}

float Profesor::getMedia(Alumno *alumno) {

    if (getPosicionAlumno(alumno) != -1) {

        return alumno -> calcularMedia();
    } else {

        return 0;
        cout<<"Este alumno no esta matriculado en la asignatura"<<endl;
    }
}

void Profesor::mejorMedia() {

    int mejorMedia = 0;
    int posicion = -1;

    for (int i = 0; i < (int)lista.size(); i++) {
        if (lista[i] -> getNumeroNotas() == 3) {
            if (lista[i] -> calcularMedia() >= mejorMedia) {

                mejorMedia = lista[i] -> calcularMedia();

                posicion = i;
            }
        }
    }

    if (posicion != -1) {

        lista[posicion] -> printAlumno();
    } else {

        cout<<"No hay alumnos"<<endl;
    }
}

void Profesor::printALumno(int pos) {

    lista[pos] -> printAlumno();
}

void Profesor::printLista() {

    cout<<"***************** ALUMNOS *****************"<<endl;

    for (int i = 0; i < (int)lista.size(); i++){

        lista[i] -> printAlumno();
        cout <<  endl;
    }
}

void Profesor::print() {

    cout << "Nombre: " << getName() << endl;
    cout << "Apellidos: " << getSurname() << endl;
    cout << "DNI: " << getDNI() << endl;
    cout << "Edad: " << getAge() << endl;
}



































