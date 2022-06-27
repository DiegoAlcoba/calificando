#include "persona.h"
#include <string>
#include <iostream>

using namespace std;

Persona::Persona() {

}

Persona::~Persona() {

}

Persona::Persona(string nombre, string apellido, string aDNI, int edad) {
    this->name = nombre;
    this->surname = apellido;
    this->DNI = aDNI;
    this->age = edad;
}

string Persona::getName() {
    return name;
}

void Persona::setName(string cadena) {
    name = cadena;
}

string Persona::getSurname() {
    return surname;
}

void Persona::setSurname(string cadena) {
    surname = cadena;
}

string Persona::getDNI() {
    return DNI;
}

void Persona::setDNI(string cadena) {
    DNI = cadena;
}

int Persona::getAge() {
    return age;
}

void Persona::setAge(int value) {
    age = value;
}
