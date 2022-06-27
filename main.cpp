#include <QCoreApplication>
#include <iostream>
#include <string>
#include "persona.h"
#include "profesor.h"
#include "alumno.h"

using namespace std;

int main() {

    /*Creacion del profesor*/
    Profesor *profesor = new Profesor();

    profesor -> setName("Marcos");
    profesor -> setSurname("Alonso");
    profesor -> setDNI("23563596H");
    profesor -> setAge(38);

    cout << "************** PROFESOR **************" << endl;

    profesor -> print();
    cout << endl;

    /*Creacion de alumnos*/
    Alumno *alumno1 = new Alumno();
    alumno1 -> setName("Diego");
    alumno1 -> setSurname("Alcoba");
    alumno1 -> setDNI("71475583R");
    alumno1 -> setAge(23);

    profesor -> setAlumno(alumno1);

    Alumno *alumno2 = new Alumno();
    alumno2 -> setName("Alejandro");
    alumno2 -> setSurname("Fernandez");
    alumno2 -> setDNI("76355912T");
    alumno2 -> setAge(19);

    profesor -> setAlumno(alumno2);

    Alumno *alumno3 = new Alumno();
    alumno3 -> setName("Daniel");
    alumno3 -> setSurname("Abascal");
    alumno3 -> setDNI("58295361K");
    alumno3 -> setAge(20);

    profesor -> setAlumno(alumno3);

    profesor -> ponerNotas(alumno1, 8.25, 4.86, 6.00);
    profesor -> ponerNotas(alumno2, 10.00, 8.75, 5.60);
    profesor -> ponerNotas(alumno3, 2.50, 5.75);

    profesor -> printLista();

    cout << "******** MEJOR NOTA MEDIA ********" <<endl;

    profesor -> mejorMedia();

    do {

        cout << endl << "Introduzca el dni de la persona que quiere buscar: " << endl;

        string introDNI;
        cin >> introDNI;

        if (profesor -> getDNI() != introDNI && profesor -> getPosicionAlumno(introDNI) == -1) {
            break;
        }

        if (profesor -> getDNI() == introDNI) {

            cout << endl << "El DNI introducito pertenece al profesor" << endl;
            profesor -> print();
            profesor -> printLista();
        } else {
            if (profesor -> getPosicionAlumno(introDNI) != -1) {

                cout << "____________--" << profesor -> getPosicionAlumno(introDNI) << endl;
                (profesor -> printALumno(profesor -> getPosicionAlumno(introDNI));
            }
        }
    } while (true);

    cout << "El DNI introducito no pertenece a ningun profesor o alumno." << endl;
}

















































