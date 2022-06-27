#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
public:
    Persona(); //Constructor de la clase
    ~Persona(); //Destructor de la clase
    Persona(string nombre, string apellido, string aDNI, int edad); //Constructor sobrecargado

    string name;
    string surname;
    string DNI;
    int age;

    /*Getters y setters*/
    string getName();
    void setName(string cadena);
    string getSurname();
    void setSurname(string cadena);
    string getDNI();
    void setDNI(string cadena);
    int getAge();
    void setAge(int value);

};

#endif // PERSONA_H
