#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
 #include <fstream>
using namespace std;
int main (){
	int peso;
	int edad;
	char genero;
	float alt;
	int m;
	int p=0, n=0, pj=0, cj=0, pa=0, ca=0, cm=0, pm=0;
	cout<<"Ingrese el numero de persona para muestreo" <<endl;
	cin>>m;
	for (int i=0; i < m; i++)
	cout <<"ingrese el peso" <<endl;
	cin>>peso;
	cout <<"ingrese la edad" <<endl;
	cin>>edad;
	cout<<"ingrse la altura" <<endl;
	cin>>alt;
	if (edad>0 && edad<=12)
{p=p+edad;
n=n+1;}
else if(edad>=13 && edad<=29)
{pj=pj+edad;
cj=cj+1;}
else if(edad>=30 && edad<=59)
{pa=pa+edad;
ca=ca+1;}
else if(edad>=60)
{
	pm=pm+edad;
cm=cm+1;
cout<<"Promedio peso niños :", p;
cout <<"Promedio peso jovenes :", pj;
cout <<"Promedio peso adultos :", pa;
cout<<"Promedio peso adultos mayores :", pm;
}

ofstream muestra;
	system("PAUSE");
	try {
		muestra.open("muestra.txt",ios::out);
		muestra<<edad<<"\t"<<p<<"\t"<<pj<<"\t"<<pm"\t"<<pa"\t"<<endl;
		muestra.close();
		cout<<"Datos grabados en el archivo";
	}
	catch(exception X){
		cout<<"Error al grabar en el archivo";
		system("PAUSE");
	} //fin try/catch
	system("CLS");
	ifstream leerarchivo;
	leerarchivo.open("muestra.txt",ios::in);
	leerarchivo>>ledad>>lp>>lpj>>lpa>>lpm;
	leerarchivo.close();


return 0;
}

	
