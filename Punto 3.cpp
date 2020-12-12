#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
Universidad Tecnologica Nacional
Facultad Regional Tucuman

Ingenieria en Sistemas de Informacion

Algoritmos y Estructuras de Datos

Bejar Antonio Sebastian - DNI(43706465) - Comision 1K1 
sebabejar95@gmail.com*/

typedef char cadena[80];


struct paciente
{
	cadena nombre;
	int telefono;
	int edad;
};

struct nodo
{
	paciente dato;
	nodo *sgte;
};

void agregar(nodo *&pila, paciente info);
void may(nodo *&pila);
void iniciar(nodo *&pila);

main()
{
	nodo *pila;
	iniciar(pila);
	paciente info;
	int n;
	
	printf("\nIndique cuantos pacientes desea ingresar: ");
	scanf("%d", &n);
	
	for(int i=1 ; i<=n ; i++)
	{
		printf("\nIngrese los datos del paciente %d: ", i);
		printf("\nIngrese el nombre del paciente: ");
		_flushall();
		gets(info.nombre);
		printf("\nIngrese el numero de telefono del paciente: ");
		scanf("%d", &info.telefono);
		printf("\nIngrese la edad del paciente: ");
		scanf("%d", &info.edad);
		
		agregar(pila,info);
	}
	

	may(pila);
	
	
}
void iniciar(nodo *&pila)
{
	pila=NULL;
}

void agregar(nodo *&pila, paciente info)
{
	nodo *nuevo;
	nuevo=new nodo;


	if(nuevo!=NULL)
		{
			nuevo->dato=info;
			nuevo->sgte=pila;
			pila=nuevo;
			printf("\nDatos registrados correctamente\n");
		}
		
		else
		{
			printf("\nERROR - PILA LLENA");
		}
}

void may(nodo *&pila)
{
	nodo *nuevo;
	int may=0;
	int aux=0;
	int aux1=0;
	cadena aux2;
	
	nuevo=pila;
	while(nuevo!=NULL)
	{
		if(nuevo->dato.edad>may)
		{
			may=nuevo->dato.edad;
			aux=nuevo->dato.edad;
			aux1=nuevo->dato.telefono;
			strcpy(aux2, nuevo->dato.nombre);
		}
		nuevo=nuevo->sgte;
			
	}
	printf("\nEl paciente con mayor edad es:");
	printf("\nNombre: %s", aux2);
	printf("\nTelefono: %d", aux1);
	printf("\nEdad: %d", aux);
	
}



