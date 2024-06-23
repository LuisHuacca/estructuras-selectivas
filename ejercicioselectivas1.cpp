#include <iostream>

using namespace std;

int main() {
	cout<<"bienvenido "<<endl;
	cout<<"----------Se ha iniciado el programa con exito---------"<<endl;
	
    float calificacion1, calificacion2, calificacion3;
    
    cout<<"Ingrese la primera calificacion: ";
    cin>>calificacion1;
    
    cout<<"Ingrese la segunda calificacion: ";
    cin>>calificacion2;
    
    cout<<"Ingrese la tercera calificacion: ";
    cin >> calificacion3;
    
    float promedio = (calificacion1 + calificacion2 + calificacion3) / 3;
    
    if (promedio >= 70) {
        cout<<"El alumno aprueba el curso con un promedio de "<<promedio <<"."<<endl;
    } else {
        cout<<"El alumno reprueba el curso con un promedio de "<<promedio<<"."<<endl;
    }
    cout<<"El programa a finalizado.";
    return 0;
}

