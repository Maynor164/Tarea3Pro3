#include <iostream>

using namespace std;

//Trabajo realizado en Grupo Kevin Lanza y Maynor Morales
//Creamos nuestra clase Animal
    class Animal
    {
    public:
//Creamos nuestras variables de nombre y edad del animal
    string nombre;
    int edad;
//Creamos la funcion animal vacia con constructores
    Animal()
    {
    }
//Funcion para obtener la edad de nuestro animal
    int getEdad()
    {
//Devuelve la edad de nuestro animal
        return edad;
    }
//Funcion para darle asignarle la edad a nuestro animal
    void setEdad(int edad)
    {
//La funcion this para que el valor que el usuario ingrese se almacene en nuestra variable creada.
        this-> edad = edad;
    }
//Funcion para obtener el nombre de nuestro animal
    string getNombre()
//Devuelve el nombre de nuestro animal
    {
        return nombre;
    }
//Funcion para darle asignarle el nombre a nuestro animal
    void setNombre(string nombre)
//La funcion this para que el valor que el usuario ingrese se almacene en nuestra variable creada.
    {
        this-> nombre = nombre;
    }


    };
//Creamos nuestra clase perro y que herede de la clase padre Animal
    class Perro : public Animal
    {
//Creamos las variable de nuestra clase perro
        Perro(int edad, string nombre)
//Los valores de nuestra variables son almacenados y asignados gracias a nuestras funciones
        {
            setEdad(edad);
            setNombre(nombre);
        }
//Creamos una funcion para el sonido de nuestro animal.
        string ladrar()
//Devuelve el sonido de nuestro perro
        {
            return "guau";
        }



    };
//Creamos nuestra clase gato y que herede de la clase padre Animal
    class Gato : public Animal
    {
        public:
//Creamos las variable de nuestra clase perro
        Gato(int edad, string nombre)
//Los valores de nuestra variables son almacenados y asignados gracias a nuestras funciones
        {
            setEdad(edad);
            setNombre(nombre);
        }
//Creamos una funcion para el sonido de nuestro animal.
        string maullar()
//Devuelve el sonido de nuestro perro
        {
            return "miau";
        }
    };

int main()
{
cout<<"Programa Terminado"<<endl;
    return 0;
}
