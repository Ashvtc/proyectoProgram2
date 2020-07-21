#include<stdio.h>
#include<stdlib.h>

struct fecha{
	int yy;
	int mm;
	int dd; 
};

struct lugar{
	char ciudad[40];
	char direccion[40];
};

struct infraccion{
	int numeroInfraccion;
	struct fecha fechaInfraccion;
	char tipoInfraccion[40];
	int monto;
	int pagado;
	struct infraccion *infraccionProx;
};

struct vehiculos{
	char placa[10];
	char marca[10];
	char modelo[10];
	struct fecha annio;
	char color[10];
	struct vehiculos *vehiculoProx;
	struct infracciones * datosInfraccion;
};

struct persona{
	long int cedula;
	char nombre[20];
	struct fecha fechaNacimiento;
	struct lugar direccionNacimiento;
	struct persona *personaProx;
};

struct persona *p = NULL;
struct vehiculo *v = NULL;
struct infraccion *i =NULL;

void encabezado();

void agregarPersona(struct persona **p);

void menuPersonas();

void menuVehiculos();

void menuMantenimiento();

void menuConsultas();

void menuOperacionesConsultas();


int main(){         //*************************FUNCION PRINCIPAL***************************


	int opcion = 1;	
	while(opcion){ //   **************************MENU PRINCIPAL*************************
		encabezado();
		printf("\t\t\t\t {POR FAVOR ESCRIBA LA OPCION QUE DESEA}\n\n");
		printf("\t\t\t\t\t(1)--MANTENIMIENTO\n");
		printf("\t\t\t\t\t(2)--OPERACIONES Y CONSULTAS\n\n");
		printf("\t\t\t\t\t(0)--SALIR\n\n\t\t\t\t\t\t\t");
		scanf("%i",&opcion);
		system("cls");
		
		switch (opcion){
			case 1: menuMantenimiento();//LLAMADA A LA FUNCION menuMantenimiento
				break;
			case 2: menuOperacionesConsultas();//LLAMADA A LA FUNCION menuOperaciones
				break;
		}
	}
	return 0;
}


void encabezado(){
		printf("\t\t\t\t\tMENU DE CONTROL DE MULTAS\n");
		printf("\t\t\t\tALCALDIA DEL MUNICIPIO DE CHACAO, CARACAS\n\n");
}

void agregarPersona(struct persona **p){
	int num;
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
	struct persona *aux = new struct persona;
	system("cls");
	printf("\n\t\t\tIngrese el nombre: "); 
	gets(aux->nombre);
	printf("\n\t\t\tIngrese la cedula: ");
	scanf("%li",&aux->cedula);
	printf("\n\t\t\tIngrese el dia (dd) de nacimiento: ");
	scanf("%i",&aux->fechaNacimiento.dd);
	while((aux->fechaNacimiento.dd>31||(!aux->fechaNacimiento.dd))||(aux->fechaNacimiento.dd<0)){
		system("cls");
		printf("\n\n\t\t\t\tIngrese un valor valido (1-31)\n\n");
		system("pause");
		system("cls");
		printf("\n\n\t\t\tIngrese el nombre: %s",aux->nombre);
		printf("\n\n\t\t\tIngrese la cedula: %li",aux->cedula);	
		printf("\n\n\t\t\tIngrese el dia (dd) de nacimiento: ");
		scanf("%i",&(*aux).fechaNacimiento.dd);
	}
	printf("\n\t\t\tIngrese el mes (mm) de nacimiento: ");
	scanf("%i",&aux->fechaNacimiento.mm);
	while((aux->fechaNacimiento.mm>12)||(aux->fechaNacimiento.mm==0)||(aux->fechaNacimiento.mm<0)){
		system("cls");
		printf("\n\n\t\t\t\tIngrese un valor valido (1-12)\n\n");
		system("pause");
		system("cls");
		printf("\n\n\t\t\tIngrese el nombre: %s",aux->nombre);
		printf("\n\n\t\t\tIngrese la cedula: %li",aux->cedula);	
		printf("\n\n\t\t\tIngrese el dia (dd) de nacimiento: %i",aux->fechaNacimiento.dd);
		printf("\n\n\t\t\tIngrese el mes (mm) de nacimiento: ");
		scanf("%i",&aux->fechaNacimiento.mm);
	}
	printf("\n\t\t\tIngrese el a%co (yyyy) de nacimiento: ",164);
	scanf("%i",&aux->fechaNacimiento.yy);
	printf("\n\n\t\t\t     Desea guardar estos datos?");
	printf("\n\t\t      Escriba (1) si desea cargar los datos: ");
	scanf("%i",&num);
	if (num == 1){
		aux->personaProx= *p;
		*p = aux;
	}
	system("cls");
}

void menuPersonas(){
	
int opcion;
	while(opcion){
		encabezado();
		printf("\t\t\t\t\t MANTENIMIENTO->PERSONAS\n\n");
		printf("\t\t\t\t {POR FAVOR ESCRIBA LA OPCION QUE DESEA}\n\n");
		printf("\t\t\t\t\t(1)--AGREGAR\n");
		printf("\t\t\t\t\t(2)--MODIFICAR\n");
		printf("\t\t\t\t\t(3)--CONSULTAR\n");
		printf("\t\t\t\t\t(4)--BORRAR\n");
		printf("\t\t\t\t\t(0)--ATRAS\n\n\t\t\t\t\t\t\t");
		scanf("%i",&opcion);
		system("cls");
		
		switch (opcion){
			case 1: agregarPersona(&p);//LLAMADA A LA FUNCION agregarPersona
				break;
			case 2: //LLAMADA A LA FUNCION modificarPersona
				break;
			case 3: //LLAMADA A LA FUNCION consultarPersona
				break;
			case 4: //LLAMADA A LA FUNCION borrarPersona

				break;
		}
	}
}

void menuVehiculos(){
		int opcion=1;
		encabezado();
	while(opcion){

		printf("\t\t\t\t\tMANTENIMIENTO->VEHICULOS\n\n");
		printf("\t\t\t\t {POR FAVOR ESCRIBA LA OPCION QUE DESEA}\n\n");
		printf("\t\t\t\t\t(1)--AGREGAR\n");
		printf("\t\t\t\t\t(2)--MODIFICAR\n");
		printf("\t\t\t\t\t(3)--CONSULTAR\n");
		printf("\t\t\t\t\t(4)--BORRAR\n");
		printf("\t\t\t\t\t(0)--ATRAS\n\n\t\t\t\t\t\t\t");
		scanf("%i",&opcion);
		system("cls");
		
		switch (opcion){
			case 1: //LLAMADA A LA FUNCION agregarPersona
				break;
			case 2: //LLAMADA A LA FUNCION modificarPersona
				break;
			case 3: //LLAMADA A LA FUNCION consultarPersona
				break;
			case 4: //LLAMADA A LA FUNCION borrarPersona
				break;
		}
	}
}	

void menuMantenimiento(){
	int opcion;
	while(opcion){
		encabezado();
		printf("\t\t\t\t\t      MANTENIMIENTO\n\n");
		printf("\t\t\t\t {POR FAVOR ESCRIBA LA OPCION QUE DESEA}\n\n");
		printf("\t\t\t\t\t(1)--PERSONAS\n");
		printf("\t\t\t\t\t(2)--VEHICULOS\n\n");
		printf("\t\t\t\t\t(0)--ATRAS\n\n\t\t\t\t\t\t\t");
		scanf("%i",&opcion);
		system("cls");
		
		switch (opcion){
			case 1: //LLAMADA A LA FUNCION menuPersonas
				menuPersonas();
				break;
			case 2: //LLAMADA A LA FUNCION menuVehiculos
				menuVehiculos();
				break;
		}
	}
}

void menuOperaMultas(){
	
	int opcion;
	while(opcion){
		encabezado();
		printf("\t\t\t     OPERACIONES Y CONSULTAS->OPERACIONES CON MULTAS\n\n");
		printf("\t\t\t\t {POR FAVOR ESCRIBA LA OPCION QUE DESEA}\n\n");
		printf("\t\t\t\t\t(1)--AGREGAR\n");
		printf("\t\t\t\t\t(2)--PAGAR\n");
		printf("\t\t\t\t\t(3)--CONSULTAR POR NUMERO DE MULTA\n");
		printf("\t\t\t\t\t(4)--MOVER O ELIMINAR\n\n");
		printf("\t\t\t\t\t(0)--ATRAS\n\n\t\t\t\t\t\t\t");
		scanf("%i",&opcion);
		system("cls");
		
		switch (opcion){
			case 1: //LLAMADA A LA FUNCION agregarMulta
				break;
			case 2: //LLAMADA A LA FUNCION pagarMulta
				break;
			case 3: //LLAMADA A LA FUNCION consultarPorMulta
				break;
			case 4: //LLAMADA A LA FUNCION moverEliminarMulta
				break;
		}
	}

}

void menuConsultas(){
	int opcion;
	while(opcion){
		encabezado();
		printf("\t\t\t\t   OPERACIONES Y CONSULTAS->CONSULTAS\n\n");
		printf("\t\t\t\t {POR FAVOR ESCRIBA LA OPCION QUE DESEA}\n\n");
		printf("\t\t\t\t\t(1)--POR EL NOMBRE DE UNA PERSONA\n");
		printf("\t\t\t\t\t(2)--POR CEDULA DE IDENTIDAD\n");
		printf("\t\t\t\t\t(3)--POR PLACA DE VEHICULO\n");
		printf("\t\t\t\t\t(4)--POR NUMERO DE INFRACCION\n\n");
		printf("\t\t\t\t\t(0)--ATRAS\n\n\t\t\t\t\t\t\t");
		scanf("%i",&opcion);
		system("cls");
		
		switch (opcion){
			case 1: //LLAMADA A LA FUNCION consultaPorPersona
				break;
			case 2: //LLAMADA A LA FUNCION consultaPorCedula
				break;
			case 3: //LLAMADA A LA FUNCION consultaPorPlaca
				break;
			case 4: //LLAMADA A LA FUNCION consultaPorInfraccion
				break;
		}
	}
}

void menuOperacionesConsultas(){
	int opcion;
	while(opcion){
		encabezado();
		printf("\t\t\t\t\t  OPERACIONES Y CONSULTAS\n\n");
		printf("\t\t\t\t {POR FAVOR ESCRIBA LA OPCION QUE DESEA}\n\n");
		printf("\t\t\t\t\t(1)--OPERACIONES CON MULTAS\n");
		printf("\t\t\t\t\t(2)--CONSULTAS\n\n");
		printf("\t\t\t\t\t(0)--ATRAS\n\n\t\t\t\t\t\t\t");
		scanf("%i",&opcion);
		system("cls");
		
		switch (opcion){
			case 1: //LLAMADA A LA FUNCION menuOperaMultas
				menuOperaMultas();
				break;
			case 2: //LLAMADA A LA FUNCION menuConsultas
				menuConsultas();
				break;
		}
	}
}

