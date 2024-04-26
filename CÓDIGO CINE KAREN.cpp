#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

//Elaborado por:
//P�rez Robledo Ana Karen

using namespace std;

struct horario //Se define la primer estructura
{
	int hora, minutos;//Se definen variables de la estructura
};

class Dulceria//Se define una clase padre
{
	string tam;//Primer atributo de la clase padre Dulceria
	string sab;//Segundo atributo de la clase padre Dulceria
	string tip;//Tercer atributo de la clase padre Dulceria
	
	public:
		 Dulceria();//Constructor de la clase Dulceria
		 Dulceria(string,string,string);
		 
		 void setTam(string);//definicion del metodo tama�o usando la funcion set
		 string getTam (void);//definicion del metodo tama�o usando la funcion get para obtenerla
		 
		 void setSab(string);//definicion del metodo sabor usando la funcion set
		 string getSab(void);//definicion del metodo sabor usando la funcion get para obtenerla
		 
		 void setTip(string);//definicion del metodo tipo usando la funcion set
		 string getTip(void);//definicion del metodo tipo usando la funcion get para obtenerla
};

Dulceria::Dulceria(){}//Definir la referencia dirigida hacia la clase dulceria
Dulceria::Dulceria(string tamanio, string sabor, string tipo)//Definir el constructor Dulceria, agregando sus atributos
{
	
	tam=tamanio;//Igualando las variable tam
	sab=sabor;//Igualando las varibale sab
	tip=tipo;//Igualando la variable tip 

}

void Dulceria::setTam(string tamanio)//Definir la funcion setTam de la clase Dulceria de tipo vacio
{
	tam=tamanio;
}

string Dulceria::getTam(void)//Definir la funcion getTam de la clase Dulceria de tipo string
{
	return tam;
}

void Dulceria::setSab(string sabor)//Definir la funcion setSab de la clase Dulceria de tipo vacio
{
	sab=sabor;
}

string Dulceria::getSab(void)//Definir la funcion getSab de la clase Dulceria de tipo string
{
	return sab;
}

void Dulceria::setTip(string tipo)//Definir la funcion setTip de la clase Dulceria de tipo vacio
{
	tip=tipo;
}

string Dulceria::getTip(void)//Definir la funcion getTip de la clase Dulceria de tipo string
{
	return tip;
}

class Refresco: public Dulceria//Definiendo la clase hija llamada Refresco, que hereda de Dulceria (clase Padre)
							   //para poder acceder a todo lo publico de la clase Dulceria
{	
	public:
	    Refresco();//Definiendo publicamente el constructor Refresco de la clase Refresco
	    Refresco(string, string, string);//Definir los tipos de variables asignados al constructor Refresco ()
};

Refresco::Refresco(){}//Definir la referencia dirigida hacia la clase refresco
Refresco::Refresco(string tamanio, string sabor, string tipo):Dulceria(tamanio,sabor,tipo){}//Agregando los atributos del constructor Refresco perteneciente a la clase Refresco
class Palomitas: public Dulceria//Definiendo la clase hija llamada Palomitas, que hereda de Dulceria (clase Padre)
							    //para poder acceder a todo lo publico de la clase Dulceria
{
	public:
	    Palomitas ();//Definiendo publicamente el constructor Palomitas de la clase Palomitas
	    Palomitas (string, string, string);//Definir los tipos de variables asignados al constructor Palomitas ()
};

Palomitas::Palomitas(){};//Definir la referencia dirigida hacia la clase refresco
Palomitas::Palomitas(string tamanio, string sabor, string tipo):Dulceria(tamanio,sabor,tipo){}//Agregando los atributos del constructor Refresco perteneciente a la clase Palomitas

class Pelicula//Definir una segunda clase Padre llamada Pelicula
{
	int dur;//Primer atributo de la clase padre Pelicula
	string tit;//Segundo atributo de la clase padre Pelicula
	string clas;//Tercer atributo de la clase padre Pelicula
	
	public:
	    Pelicula();//Definicion del constructor Pelicula ()
		Pelicula(int, string , string);	
		Pelicula(const Pelicula& obj1);
		
		void setDur(int);//definicion del metodo duracion usando la funcion set
		int getDur (void);//definicion del metodo duracion usando la funcion get para obtenerla
		
		void setTit(string);//definicion del metodo titulo usando la funcion set
		string getTit (void);//definicion del metodo titulo usando la funcion get para obtenerla
		
		void setClas(string);//definicion del metodo clasificacion usando la funcion set
		string getClas (void);//definicion del metodo clasificacion usando la funcion get para obtenerla
		
		~Pelicula();//Asignacion del destructor  Pelicula hacia los objetos de esta clase
};

Pelicula::~Pelicula()//Definir la referencia del destructor dirigida hacia la clase Pelicula
{
	
}
Pelicula::Pelicula(){};
Pelicula::Pelicula(int duracion, string titulo, string clasificacion)//Agregando los atributos y sus tipos del constructor Pelicula perteneciente a la clase Pelicula
{
	dur=duracion;//Igualando las variables dur
	tit=titulo;//Igualando las variables tit
	clas=clasificacion;//Igualando las variables clas
}

Pelicula::Pelicula(const Pelicula&obj1)//Agregando atribiutos del constructor Pelicula ()
{
	dur=obj1.dur;//Igualando la variable dur, a la misma variable, pero haciendola parte del objeto
	tit=obj1.tit;//Igualando la variable tit, a la misma variable, pero haciendola parte del objeto
	clas=obj1.clas;//Igualando la variable clas, a la misma variable, pero haciendola parte del objeto
}

void Pelicula::setDur(int duracion)//Definir la funcion setDur de la clase Dulceria de tipo vacio
{
	dur=duracion;
}

int Pelicula::getDur(void)//Definir la funcion getDur de la clase Dulceria de tipo int
{
	return dur;
}

void Pelicula::setTit(string titulo)//Definir la funcion setTit de la clase Dulceria de tipo vacio
{
	tit=titulo;
}

string Pelicula::getTit(void)//Definir la funcion getTit de la clase Dulceria de tipo int
{
	return tit;
}

void Pelicula::setClas(string clasificacion)//Definir la funcion setClas de la clase Dulceria de tipo vacio
{
	clas=clasificacion;
}

string Pelicula::getClas(void)//Definir la funcion getClas de la clase Dulceria de tipo int
{
	return clas;
}

class Pelicula;
class Proyeccion//Definicion de la clase Proyeccion heredada de la clase Pelicula
{
	horario hor;//Definiendo atributo hor, de tipo de la estructura horario
	string dia;//Definiendo atributo dia de tipo string
 	Pelicula pel;//Definiendo atributo pel, de tipo Pelicula (Segunda Clase Padre)
	
	public:
	    Proyeccion();//Definiendo publicamente constructor Proyeccion de la clase Proyeccion
		Proyeccion(Pelicula,horario,string);//Agregando los tipos de atributos que tendra el antes mencionados constructor Proyeccion
		Pelicula getPelicula (void);	
		horario getHorario (void);
		string getDia(void);
		~Proyeccion();//Definiendo el destructor Proyeccion de los objetos pertenecientes a esta clase
};
Proyeccion::~Proyeccion()
{
	
}
Proyeccion::Proyeccion(){}
Proyeccion::Proyeccion(Pelicula peli, horario horapeli, string diapeli)
{
    //Pelicula peli(duracion,titulo,clasificacion);
	pel=peli;
	hor=horapeli;
	dia=diapeli;
}

Pelicula Proyeccion::getPelicula()
{
	return pel;
}

horario Proyeccion::getHorario(void)
{
	return hor;
}

string Proyeccion::getDia(void)
{
	return dia;
}


class Dulceria;
class Orden//Definicion de la clase base llamada Orden que hereda a la clase Dulceria
{	private:
		string nombre;//Artibuto agregado de tipo string de la clase Orden	
		Proyeccion proye1;//Artibuto agregado de tipo Proyeccion de la clase Orden
	public:
   		Dulceria dulce[1000]={};//Arreglo llamado Dulce de la clase Dulceria
   		Orden (string);//Definicion del constructor 
		void agregarDulceria(string, string, string);//Definicion de que tipo de variables seran usadas en la funcion agregarDulceria de tipo void de la clase Orden
		Proyeccion agregarProyeccion(int, string, string, horario, string);//Definicion de que tipo de variables seran usadas en la funcion agregarProyeccion 
		                                  							       //de tipo Proyeccion por la herencia de la clase Orden
		void imprimirOrden(void);//Definicion de la funcion imprimirOrden de tipo void de la clase Orden  
};

Orden::Orden(string nom)//Agregando la varaible nom, mientras se define el constructor Orden
{
	nombre=nom;//Igualando la variable nombre
}

void Orden::agregarDulceria(string tam, string sab, string tip)//Definiendo variables de la funcion agregarDulceria de tipo void de la clase Orden
{
    
	for (int i=0; i<1000; i++)//Creacion de bucle para repetir el proceso de solicitar dulceria las veces que el usuario lo requiera
	{
		if (dulce[i].getTip()=="")
		{
		    if(tip=="palomitas")//Condicion en caso de que el tipo de Dulceria, fuera Palomitas
	        {
	            Palomitas pal(tam, sab, tip);//Asignacion de las variables tama�o, sabor y tipo asociadas a la funcion agregarDulceria 
	            dulce[i]=pal;//Igualando el arreglo para que solicite palomitas las veces que el usuario lo requiera
        	}
        	else
        	{
        	    Refresco ref(tam, sab, tip);//Asignacion de las variables tama�o, sabor y tipo asociadas a la funcion agregarDulceria 
        	    dulce[i]=ref;//Igualando el arreglo para que solicite refrescos las veces que el usuario lo requiera
        	}
			break;//Fin del bucle, indicandor que se debe repetir de forma que regresa al inicio en caso que el usuario asi lo prefiera
		}
	}
	
}

Proyeccion Orden::agregarProyeccion(int duracion, string titulo, string clasificacion, horario horapeli, string diapeli)//Asignacion de variables de la funcion agregarProyeccion de tipo Proyeccion de la clase Orden
{
    Pelicula peli(duracion, titulo, clasificacion);//Integrando variables, del objeto peli, que pertenece a la clase Pelicula
    Proyeccion proy(peli,horapeli,diapeli);//Asignacion de variables del objeto proy, perteneciente a la clase Proyeccion
	proye1=proy;//Igualando objeto
	return proye1;//Retorno de objeto
}

void Orden::imprimirOrden(void)//Ejecucion de la funcion imprimirOrden de la clase Orden de tipo vacio
{
	cout<<"Su orden es: \n\n";
	cout<<"Nombre del visitante: "<<nombre;//Muestra el nombre del usuario, previamente escrito por el en el compilador
	cout<<"\n";
	cout<<"Pelicula: "<<proye1.getPelicula().getTit();//Muestra la pelicula elegida por el usario
	cout<<"\n";
	cout<<"Duracion: "<<proye1.getPelicula().getDur();//Muestra la duracion del filme escogido por el usuario
	cout<<"\n";
	cout<<"Clasificacion: "<<proye1.getPelicula().getClas();//Ense�a la clasificacion asignada a la pelicula escogida por el usuario
	cout<<"\n";
	cout<<"Hora: "<<proye1.getHorario().hora<<" : "<<proye1.getHorario().minutos;//Muestra la hora, de inicio de la pelicula seleccionada por el usuario
	cout<<"\n";
	cout<<"Dia: "<<proye1.getDia();//Muestra en que dia de la semana, se presentara el filme previamente seleccionado
	cout<<"\n";
	cout<<"Usted agrego: \n";//Indicacion posteriormente de la dulceria escogida por el usuario
	for (int i=0; i<1000; i++)//Bucle neceario, debido a los arreglos posteriores, y a las posibles, selecciones mutliples de alimentos del usuario
	{
		if (dulce[i].getTip()=="")
		{
			break;
		} 
		cout<<""<<dulce[i].getTip();//Indica si el dulce que esocgio se trata de palomitas y refresco, en caso de que haya escogido ambos, se pondra, en el orden que se ffueron eligiendo
		cout<<" "<<dulce[i].getTam();//Indica a un lado el tama�o de los alimentos, escogidos por el usuario
		cout<<" Sabor: "<<dulce[i].getSab();//Indica a lado de tama�o, el sabor de los alimentos, seleccionados por el mismo usuario
		cout<<"\n";
	}
	
	cout<<"Gracias por su compra";
	
}

main ()//Ejecucion de la funcion main ()
{
	int opc, opcTip, opcTam, opcSab,numBoletos, totBoletos;//Asigancion de todas las variables de tipo entero dentro de la funcion main ()
	string tamanio,sabor,tipo;//Integrando variables de tipo string
	string visitante;
	Pelicula pel1(180, "Avengers", "B15");//Agregando la duracion, el nombre, y clasificacion de los atributos de la primera pelicula
	Pelicula pel2(150, "Joker", "B");//Agregando la duracion, el nombre, y la clasififacion de los atributos de la segunda pelicula
	Pelicula pel3(160, "Batman", "C");//Agregando la duracion, el nombre, y la clasificacion de los atributos de la tercera pelicula
	
	Pelicula pelis[3]={pel1, pel2, pel3};//Arreglo del objeto pelis, incluyendo las 3 peliculas, previamente detalladas, con sus atributos
	
	
	horario hor1;
	horario hor2;
	horario hor3;
	
	//Asignacion de las horas de las peliculas
	hor1.hora=12;
	hor1.minutos=30;
	
	hor2.hora=15;
	hor2.minutos=45;
	
	hor3.hora=20;
	hor3.minutos=15;
	
	horario hor[3]={hor1, hor2, hor3};//Arreglo del objeto hor[], integrando los 3 horarios

	//Agregando en que dia, se llevara a cabo la pelicula
	Proyeccion pro1(pelis[0], hor [0], "Lunes");
	Proyeccion pro2(pelis[1], hor [1], "Lunes");
	Proyeccion pro3(pelis[2], hor [2], "Lunes");
	
	//Presentacion de Inicio de Proyecto final, con una bienvenida, indicando los integrantes del equipo
	cout<<"\t\t           Elaborado por:\n";
    cout<<"\t\t      Perez Robledo Ana Karen\n\n";
    
	cout<<"\t\t            BIENVENIDOS\n";
	cout<<"\t\t                 A\n";
	cout<<"\t\t             CINEMEX\n\n";

	//Solicitando el nombre del usuario
	cout<<"�Cual es su nombre?\n";
	cout<<"Nombre: ";
	//Guardando el nombre del usuario
	cin>>visitante;
	Orden ord(visitante);
	
	//Solicitando cantidad de boletos desea adquirir el usuario
	cout<<"\n�Cuantos boletos desea comprar?\n";
	cout<<"No.  ";
	//Guardando cantidad de boletos
	cin>>numBoletos;
	
	//Requiriendo que el usuario digite la pelicula que deseara ver
	cout<<"\nElija la pelicula: \n";
	for (int i=0; i<3; i++)//Bucle creado por al arreglo pelis[]
	{
		if (pelis[i].getClas()=="")
		{
			break;
		}
		//Mostrando las peliculas previamente editadas en el programa
		cout<<" "<<i+1<<". "<<pelis[i].getTit();
		cout<<" "<<pelis[i].getDur()<<"min";
		cout<<" Clasificacion: "<<pelis[i].getClas();
		cout<<"\n";
	}
	cout<<"Opcion:  ";
	//Guardando opcion de usuario
	cin>>opc;
	
	ord.agregarProyeccion(pelis[opc-1].getDur(),pelis[opc-1].getTit(),pelis[opc-1].getClas(),hor[opc-1],"Lunes");//Ejecucion de la funcion agregarProyeccion por el objeto ord
	{
		//Dandole la opcion al usuario de ingresar algun otro alimento ya sea palomitas o refresco, o quedarse con su orden actual
		cout<<"\nDesea algo de la dulceria: \n1. Palomitas\n2. Refresco\n3. NA\n";
		cout<<"\n*El precio depende del tamanio*\n";
		cout<<"Opcion:  ";
		//Guardar eleccion del usuario
		cin>>opcTip;
		do//Se refiere a volver a repetir el menu de alimentos, en caso de que la condicion o funcion while () encontrada posteriormente se cumpla
		{
			//Pide al usuario, elegir el tama�o, de lo antes seleccionado por el mismo
			cout<<"\nElija el tamanio: \n1. Chico $40\n2. Mediano $45\n3. Grande $50\n";
			cout<<"Opcion:  ";
			//Guardar opcion de usuario
			cin>>opcTam;
			
			//Condicion:Si el usuario digita 1, el programa guardara el tama�o chico, para presentarselo en su compra final
			if(opcTam==1)tamanio="Chico";
			
			//Condicion: Si el usuario llegase a digitar 2, el programa guardar� el tama�o mediano, para presentarselo en su compra final
			else if(opcTam==2)tamanio="Mediano";
			
			//Condicion: En el caso de que eligiera la opcion numero 3, el programa guardar� el tama�o grande, para mostrarselo posteriormente
			else tamanio="Grande";
	
			if(opcTip==1)//Condicion, si elige la primera opcion, se le presentaran los tipo de sabores disponibles para la opcion 1, que es la opcion de palomitas
			{
				tipo="Palomitas";
				//Solicitar que el usuario elija nuevamente el sabor de sus alimentos seleccionados
				cout<<"\nElija el sabor: \n1. Mantequilla\n2. Caramelo\n3. Chile";
				cout<<"\nOpcion:  ";
				
				//Guardando sabor de alimento seleccionado por el usuario
				cin>>opcSab;
				
				if(opcSab==1)sabor="Mantequilla";
				else if(opcSab==2)sabor="Caramelo";
				else sabor="Chile";
				
			}
			
			else if(opcTip==2)//Condicion, si elige la segunda opcion, se le presentaran los tipo de sabores disponibles para la opcion 2, que es la opcion de refresco
			{
				tipo="Refresco";
				//Solicitar que el usuario elija nuevamente el sabor de su refresco 
				cout<<"\nElija el sabor: \n1. CocaCola\n2. Sprite\n3. Manzana";
				cout<<"\nOpcion:  ";
				
				//Guardando sabor de refresco seleccionado por el usuario
				cin>>opcSab;
			
				if(opcSab==1)sabor="CocaCola";
				else if(opcSab==2)sabor="Sprite";
				else sabor="Manzana";
			}
			
			ord.agregarDulceria(tamanio,sabor,tipo);//Ejecucion de la funcion agregarDulceria por el objeto ord
			
			//Volviendo a preguntar al usuario si desea algo mas de la Dulceria, en caso de que no lo requiera, puede oprimir el 3
			cout<<"\nDesea algo mas de la dulceria: \n1. Palomitas\n2. Refresco\n3. NA";
			cout<<"\nOpcion:  ";
			cin>>opcTip;
		}
		//Indicando que el proceso se repite, mientras el usuario siga queriendo alimentos, osea que siga oprimiendo el numero 3
		while(opcTip<3);
	}
	
	int cont=0;//Creando de una variable llamada cont, igualandola a cero
	string opcAsiento;//Creando variable opcAsiento, de tipo string, en donde se guardara el asiento escogido poteriormente por el usuario
	cout<<"\n";
	cout<<"Ahora elija sus asientos";
	cout<<"\n";
	
	//Imprimiendo asientos, para que el usuario, pueda ver los asientos disponibles
	string asientos[45]={"A1", "B1", "C1", "D1", "E1", "A2", "B2", "C2", "D2", "E2", "A3", "B3", "C3", "D3", "E3", "A4", "B4", "C4", "D4", "E4", "A5", "B5", "C5", "D5", "E5"};
		 
	do//Indicando un proceso a repetir mientras una condicion dicha posteriormente se cumpla
	{
		int o;//Creando una varaible nueva "o", de tipo entero
	    for(int i=0; i<45; i++)//Bucle creado, por el arreglo asientos[]
	    {
			o=i+1;//Como cada asiento, esta guardado en una casilla, y las casillas, empiezan desde el cero, se le suma uno, para que este coordinado, comenzando a contar desde el 1
			cout<<"   "<<asientos[i];
			if (o%5==0)//Condicion que indica que la posicion hara algo indicado posteriormente cada vez que llegue a un multiplo de 5
			{
				cout<<"\n\n";//Esto es lo que se hara, cuando la casilla, este en un multiplo de 5, dara un salto de linea, para que los espacios, se vean de forma ordenada y no seguida
			}
		}	
		
		//Se requiere al usuario a elegir un asiento, cabe decir que el asiento se tiene que escribir como
		//esta indicado, con la letra en mayuscula seguido del numero de asiento que prefiera el usuario
		cout<<"Elige un asiento";
		cout<<"\n";
		
		//Guardando asiento, seleccionado por el usuario
		cin>>opcAsiento;
		int cont2=0;//Creacion de una variable, igualada a cero de tipo entero
		
		do //Indicando que se realizara un proceso dentro del proceso que se esta repitiendo, solo si una condicion que se dira posteriormente se cumple
		{
			for(cont2=0; cont2<45; cont2++)//Bucle creado por el arreglo asientos[]
	    	{
				if(asientos[cont2]==opcAsiento)//Indica que despues de que el usuario, ingrese un asiento, este, se rremplazara con los indicado en el siguiente punto
				{
					asientos[cont2]="X";//Se reemplazara con una "X", el asiento seleccionado por el usuario
					cont2=45;
					break;
				}
				else
				{
					if(cont2==44)
					{
						cout<<"El asiento esta ocupado o el asiento no existe, elige una nueva opcion";
						cout<<"\nNueva opcion:  ";
						cin>>opcAsiento;
						cont2=0;
					}	
			    }	 
			}
		}
		//Condicion, que indica que la opcion tiene que ser menor a 45, debido a que solo hay 44 casillas, ya que inicia desde cero y no desde uno
		while(cont2<45);
		

		cont++;//Contador
	}
	//Condicion que indica que el proceso de seleccionar asientos, se repetira solo mientras la variable cont sea menor al numero de
	//seleccionado por el usuario, debido a que la variable, previamente se igualo a cero
	while(cont<numBoletos);
	
	cout<<"\n";
	cout<<"\n";
	
	//Despues de haber acabado, con la orden de alimentos y la seleccion de asientos, se ejecutara, el metodo imprimirOrden()
	//que le indicar� al usuario, los datos guardados, como es:
	//Su nombre
	//La pelicula
	//La duracion
	//La clasifiacion de la pelicula
	//El horario de la pelicula
	//Dia en el que se presenta la funcion
	//La orden de alimentos, en el orden que el usuario los fue seleccionando(Tipo, tama�o y sabor)
	system("cls");
	ord.imprimirOrden();
	
	//destruccion de objetos
	pel1.~Pelicula();
	pel2.~Pelicula();
	pel3.~Pelicula();
	
	pro1.~Proyeccion();
	pro2.~Proyeccion();
	pro3.~Proyeccion();
}


