# Proyecto 1
este proyecto trata de un menu principal con 3 opciones, la primera opcion es para calcular el factorial de un numero n (n!) Dado un numero entero positivo, determinar el factorial.
Se debe usar estructuras repetitivas simples o de selección múltiple, no funciones ni recursividad.

La opcion dos,es un programa de la del gobierono que e pretende
subsidiar a familias de escasos recursos, para ello se solicita de sus conocimientos para
determinar a través de un sistema la cantidad que debe recibir una familia, cumpliendo con las
siguientes condiciones
1. Aquella familia que tenga 3 hijos o hijas recibe Q. 300.00 al mes, 4 a 5 hijas o hijos Q.
350.00, mayor a 5 recibirán Q. 400.00
2. Por cada hijo o hija que se encuentre entre las edades de 7 a 18 años recibirá el 6 % del
total que recibe la familia, es decir que, si la familia recibe Q. 350.00 y de los hijos 2 de
ellos se encuentren en esa edad, ambos recibirán Q. 21.00 más (Q. 42.00 en total), la familia
recibirá Q. 392.00.
## PSInt, C++ y Python
Para este lenguaje definimos multiples variables y de diferente tipo de datos para diferentes propositos desde variables de tipo 
entero, real, cadena y caracter que nos ayudaran con el desarrollo de nuestro proyecto en este lenguaje

PSeInt 
```definir dpi,cath,i Como Entero;
	definir subsidio,bono,bonot Como Real;
	definir hs como cadena;
	definir nom,ape Como Caracter;
```
C++
```
int opcf=0;
	int opc;
	int nad;
	string nom;
	string dpi;
```

Iniciamos con un la condicion repetir donde tenemos nuestro menu principal

PSeInt
```
Repetir
		Escribir "Elija una opcion";
		Escribir "1. factorial de un numero (n!)";
		Escribir "2. Prevision social ";
		Escribir "3. Salir del programa";
		leer opc;
		Limpiar Pantalla
```
C++
```
	cout<<"En este programa aparecen 3 opciones favor ingrese el numero de la opcion(numeros enteros)""\n";
	    cout<<"1. Factorial de un nmero""\n";
	    cout<<"2. Determinar subsidio de familia ""\n";
	    cout<<"3. Salir del Programa ""\n";
	    cin>>opc;
	    system("cls");
```
Python
```
 print ("ingrese el numero de la opcion a elegir")
    print ('1. Factorial de un numero (n!)')
    print ('2. Prevision social')
    print ('3. Para salir del programa')
    opcs=int(input("ingrese su opcion""\n"))
    os.system("cls")
```
el cual nos muestra las 3 opciones que tiene el programa, la leemos y almacenamos en una variable, adicional a eso le
le agregamos un 'limpiar pantalla' que nos ayuda para que se vea mas limpia la ejecusion en pantalla.

Para ejecutar cualquiera de nuestras opciones o el numero de la opcion que la persona ingrese lo validamos en una condicion "si entonces"
pero esta esta anidada, quiere decir que si el numero almacenado en la variable "opc" no es igual a la primera validacion que aparece se 
dirige a la siguiente validacion y si no es igual se dirige a la siguiente hasta llegar a la ultima yde ser verdadero ejecutara el codigo que
este dentro de la condicional

PSeInt
```
si opc==1 Entonces
			Repetir
			definir num,cont,res,numr Como Entero;
			Escribir "ingrese un numero entero positivo para determinar el fatorial (n!)";
			leer num;
			numr=num;
			res=num;
			Para cont<-2 Hasta num Con Paso paso Hacer
				num=num-1;
				res=res*num;
				cont=cont+1;
			Fin Para
			Escribir "El factorial de: ",numr,"!","=",res;
			Escribir "Si desea cambiar de opcion ingrese un numero mayor a 3";
			leer op;
			Limpiar Pantalla
			Hasta Que op>3;
```
C++
```
if (opc==1){
	    	int op=1;
	    	do{
	    		int num,con,res;
	    		cout<<"Ingrese un numero para determinar su factorial""\n";
	    		cin>>num;
	    		res=1;
	    		for(int i=1; i<=num; i++){
	    			res=res*i;
				}
				cout<<"El factorial del numero " << num <<"! es:"<<res<<"\n";
				cout<<"\n";
				cout<<"Si desea efectuar otra operacion ingrese un numero menor a 3 de lo contrario ingrese un numero mayor""\n";
				cin>>op;
				system("cls");
			}
			while (op<3);
```
Python
```
if opcs==1:
        op=1
        while op<2:
            num=int(input("ingrese un numero entero positivo para determinar el factorial(n!)""\n"))
            res=num
            numr=num-1
            cont=0
            for cont in range(numr):
                res=res*numr
                numr=numr-1
                cont=cont+1
            print("El factorial de: ",num,"!=",res)
            op=int(input("si desea salir del programa ingrese un numero mayor 1""\n"))
            os.system("cls")
```
Cuando el valor ingresado en la variable opc sea igual a "1" el programa ejecutara el codigo para calcular el factorial del numero n!
que seria del numero que ingrese el usuario, el codigo esta dentro de una condicion repetir la que nos indoca que no puede salir de esa opcion 
hasta que la condicion sea falsa, mientras la condicion sea verdadera se repetira el codigo que esta dentro el cual le pide al usuario el 
ingreso de un numero para calcular el factorial del mismo el numero que ingresa se almacena en una variable y ese mismo numero se le asigna
a otras dos variables las cuales las utlizaremos para el calculo del factorial, sabemos que el factorial de un número entero positivo se
define como el producto de todos los números naturales anteriores o iguales a él, teniendo claro esto ya sabemos por que se le asigno el mismo 
numero ingresado a las otras dos variables, ya que una se ulilizara para hacer la primera multiplicasion y almacenara la respuesta y la otra se 
ira disminullendo hasta terminar en valor 1 ya que si se pasa nos dara como resultado 0 por que todo lo multiplicado por 0 es 0, entonces despues
de ingresar el numero y asignarselo a las otras dos variables se inicializa un bucle o ciclo "para" (Tambien se podia utilizar un repetir pero es
mi proyecto y mi programa asi que decidi usar el para XD) el cual reocorre el codigo paso a paso hasta que realice el numero de bueltas que el numero
ingresado para calcular el factorial, el cual utiliza un contador inicializado con el valor 2 ya que al realizar la primera multiplicasion
ejemplo 5!= primera multiplicasion dentro del codigo: 5*4 este seria un paso menos a lo que me refiero es que para sacar el factorial del 5 
se debe realizar esta: 5*4*3*2*1=120 que se veria como 5*4=20*3=60*2=120*1=120 estariamos realizando 4 multiplicasiones y es por eso que se inicializa
con valor 2 para que no se pase y empuece a multiplicar por 0, se muestra el resultado en pantalla y se le pregunta al usuario si necesita realizar 
cambiar de opcion que ingrese un numero mayor a 3 si el usuario ingresa un numero menor a 2 el programa repite la opcion 1 y si ingresa un numero 
mayor a 3 el programa vuelve al menu principal.

Cuando el usuario ingresa el numero de la opcion 2 el progrma buelve a reificar el numero de la opcion ingresada hasta encontrar el si que tiene asignada 
esa opcion ingresa a ese bloque de codigo y lo ejecuta

PSeInt
```
SiNo
			si opc==2 Entonces
				Repetir
				Escribir "Favor ingrese los datos que se solicitan a continucion";
				Escribir "Ingrese su numero de DPI";
				Leer dpi;
				si dpi<8 Entonces
					Escribir "Ingrese un DPI valido";
				SiNo
					Escribir "Ingrese su nombre completo";
					leer nom;
					Escribir "Ingrese la cantidad de hijos que tiene (hijos de sexo masculino y femenino)";
					leer cath;
					Dimension hijos[cath];
					Dimension edad[cath];
					Dimension bonohijo[cath];
					si cath >0 y cath<=3 Entonces
						subsidio=300;
					sino
						si cath>=4 y cath<=5 Entonces
							subsidio=350;
						sino 
							si cath>=6 Entonces
								subsidio=400;
							FinSi
						FinSi
					FinSi
					noh<-1;
					Repetir
						Escribir "Ingrese el nombre de su hijo(a) No.",noh;
						leer hijos(noh);
						Escribir "Edad";
						leer edad(noh);
						si edad(noh)<18 y edad(noh)>7 Entonces
							bono=subsidio*0.06;
							bonohijo(noh)=bono;
							bonot=bonot+bono;
						FinSi
						cont=cont+1;
						noh=noh+1;
					Hasta Que cont=cath;
					subsidio=subsidio+bonot;
					escribir "Sr.",nom," que se identifica con el DPI ",dpi;
					escribir "padre de ",cath," hijos(as)";
					Escribir "resivira un subsidio total de Q.",subsidio;
					escribir "Repartido de la siguiente manera:";
					Escribir "Subsidio correspondiente a la cantidad de hijos Q.",subsidio-bonot;
					Escribir "bono extra por hijos";
					noh<-1;
					cont=0;
					Repetir
						Escribir "hijo No.",noh," ",hijos(noh)," Q.",bonohijo(noh);
						noh=noh+1;
						cont=cont+1;
					Hasta Que cont=cath;
					Escribir "Total a recivir Q.",subsidio;
				FinSi
				Escribir "Si desea salir de esta opcion ingrese un numero mayor a 3";
				leer op;
				Limpiar Pantalla
```
C++
```
}else if(opc==2){
			int op=1;
			do{
				int subsidio,hijos;
				cout<<"El siguiente programa calcula el subsidio de una familia""\n";
				cout<<"si la familia tiene:""\n""entre 1-3 hijos(as) recibe Q.300.00""\n""4-5 hijos(as) recibe Q.350.00""\n""mas de 5 hijos(as) recibe Q.400.00";
				cout<<"adicional a eso si estan entre las edades 7-18 años reciben el 6% extra por niño que este entre estas edades";
				cout<<"\n";
				cout<<"ingrese su numero de dpi""\n";
				cin>>dpi;
				cout<<"ingrese su nombre completo""\n";
				cin>>nom;
				cout<<"ingrese la cantidad de hijos(as) que tiene""\n";
				cin>>hijos;
				string nomh[hijos];
				string edadh[hijos];
				int bonoh[hijos];
				string hijo[hijos];
				if (hijos<=3 && hijos>=1){
					subsidio=300;
				} else if(hijos>=4 && hijos<=5){
					subsidio=350;
				}else if(hijos>=6){
					subsidio=400;
				}
				int xd=1;
				int cont=0;
				int edad[hijos];
				int bonot;
				for(int xd=0; xd<hijos; xd++){
				cout<<"ingrese el nombre de su hijo No.""\n";
				cin>>hijo[xd];
				cout<<"ingrese la edad""\n";
				cin>>edad[xd];
				if (edad[xd] < 19 && edad[xd] > 6){
					bonoh[xd]=subsidio*0.06;
					bonot=bonot+bonoh[xd];
				}else{
					bonoh[xd]=0;
				}
				}
				subsidio=subsidio+bonot;
				cout<<"Sr." <<nom<<"que se identifica con el DPI"<<dpi<<"\n";
				cout<<"Padre de "<<hijos<<" hijos(as)""\n";
				cout<<"Recivira un subsidio total de Q." <<subsidio<<"\n";
				cout<<"Subsidio correspondiente a la cantidad de hijos Q"<<subsidio-bonot<<"\n";
				cout<<"Bono extra por hijo:""\n";
				int xds=1;
				cont=0;
				do{
					cout<<"Hijo No." <<xds<<" con nombre "<<hijo[xds]<<" y "<<edad[xds]<<" años recibe"<<bonoh[xds]<<"\n";
					xds=xds+1;
					cont=cont+1;
				}
				while (cont<hijos);
				cout<<"Bono total de Q."<<bonot;
				cout<<"\n";
				cout<<"Si desea ingresar otro subsidio ingrese un numero menor a 3 de lo contrario ingrese un numero mayor";
				cin>>op;
				system("cls");
```
Python
```
if opcs==2:
        op=1
        while op<2:
            print("Bienvenido al programa de sucidios del Gobierno de guatemala""\n""Favor ingresar los datos que le solicitan.")
            dpi=int(input("Favor ingrese su numero de DPI""\n"))
            nombre=input("ingrese su nombre completo""\n")
            cath=int(input("ingrese la cantidad de hijos(as) que tiene""\n"))
            hijo = [""] * cath
            edad = [0] * cath
            bonohijo = [0] * cath
            if cath>0 and cath<=3:
                subsidio=300
            elif cath>=4 and cath<=5:
                subsidio=350
            elif cath>=6:
                subsidio=400
            con=0
            bonot=0
            for i in range(cath):
                hijo[i] = input("ingrese el nombre de su hijo(a)""\n")
                edad[i] = int(input("edad""\n"))
                if edad[i]<18 and edad[i]>7:
                    bono=subsidio*0.06
                    bonohijo[i]=bono
                    bonot=bonot+bono
            subsidio=subsidio+bonot
            print("SR. ",nombre," que se identifica con el DPI ",dpi,"\n""padre de ",cath," hijos(as)")
            print("resivira un subsidio total de Q.",subsidio,"\n""repartido de la siguiente manera:")
            print("subsidio correspondiente a la cantidad de hijos(as) Q.",subsidio-bonot,"\n""Bono extra por hijos dependiendo de la edad (7-18 años)")
            con=0
            for i in range(cath):
                con=con+1
                print(f"Hijo No.{con}: {hijo[i]} Q.{bonohijo[i]}")
            print("Total a recivir Q.",subsidio)
            op=int(input("Si desea salir para escoger otra opcion ingrese un numero mayor a 2""\n"))
            os.system("cls")
```
cuando entra en esta opcion comenzamos con el bucle o ciclo repetir como en la opcion 1, en esta opcion le pedimos al usuario que 
ingrese los datos que se le solicitan para hacer el calculo del subsidio, de utiliza una serie de si anidados ya que dependiendo 
de la cantidad de hijos haci sera el dinero del subcidio que recibira
Dependiendo de la cantidad de hijos el programa le indicara que ingrese ciertos datos de los mismos como lo es el nombre y la edad 
esto por que si los hijos estan entre sierta edad el programa le calculara un bono extra (7-18 años, el 6% por cada hijo entre esas edades)
en esta parte se hizo uso de las dimensiones ya que necesitabamos utilizar variables para guardar los datos de los hijos pero si no 
sabiamos la cantidad de hijos que tiene cada uno no podiamos declarar esa cantidad de variables entonces decidi utilizar dimendiones 
para las variables "hijos[cath], edad[cath] y bonohijo[cath]" y el tamaño de la dimension se la daba el usuario al igresar la cantidad 
de hijos que tiene

PSeInt 
```
Escribir "Ingrese la cantidad de hijos que tiene (hijos de sexo masculino y femenino)";
					leer cath;
					Dimension hijos[cath];
					Dimension edad[cath];
					Dimension bonohijo[cath];
```
C++
```
cout<<"ingrese la cantidad de hijos(as) que tiene""\n";
				cin>>hijos;
				string nomh[hijos];
				string edadh[hijos];
				int bonoh[hijos];
				string hijo[hijos];
```
Python
```
cath=int(input("ingrese la cantidad de hijos(as) que tiene""\n"))
            hijo = [""] * cath
            edad = [0] * cath
            bonohijo = [0] * cath
```
para hacer el calculo de la bonoficasion por hijo cuando ingresa la canttidad de hijos que tien ingresa a un bucle o ciclo repetir 
y este varifica hijo por hijo las edades si estan entre 7-18 años entonces le calcula una bonoficasion extra

PSeInt
```
Repetir
						Escribir "Ingrese el nombre de su hijo(a) No.",noh;
						leer hijos(noh);
						Escribir "Edad";
						leer edad(noh);
						si edad(noh)<18 y edad(noh)>7 Entonces
							bono=subsidio*0.06;
							bonohijo(noh)=bono;
							bonot=bonot+bono;
						FinSi
						cont=cont+1;
						noh=noh+1;
					Hasta Que cont=cath;
```
C++
```
for(int xd=0; xd<hijos; xd++){
				cout<<"ingrese el nombre de su hijo No.""\n";
				cin>>hijo[xd];
				cout<<"ingrese la edad""\n";
				cin>>edad[xd];
				if (edad[xd] < 19 && edad[xd] > 6){
					bonoh[xd]=subsidio*0.06;
					bonot=bonot+bonoh[xd];
				}else{
					bonoh[xd]=0;
				}
```
Pyton
```
for i in range(cath):
                hijo[i] = input("ingrese el nombre de su hijo(a)""\n")
                edad[i] = int(input("edad""\n"))
                if edad[i]<18 and edad[i]>7:
                    bono=subsidio*0.06
                    bonohijo[i]=bono
                    bonot=bonot+bono
```
y las almcena en las variables de los hijos para despues mostrar en pantalla el resultado, donde mustra los datos del padre con un total
del subsidio que recibira adicional le muestra el desgloce de los bonos por hijo le mustra el subsidio sin el bono el total del 
bono que recibio por los hijos

PSeInt 
```
escribir "Sr.",nom," que se identifica con el DPI ",dpi;
					escribir "padre de ",cath," hijos(as)";
					Escribir "resivira un subsidio total de Q.",subsidio;
					escribir "Repartido de la siguiente manera:";
					Escribir "Subsidio correspondiente a la cantidad de hijos Q.",subsidio-bonot;
					Escribir "bono extra por hijos";
					noh<-1;
					cont=0;
					Repetir
						Escribir "hijo No.",noh," ",hijos(noh)," Q.",bonohijo(noh);
						noh=noh+1;
						cont=cont+1;
					Hasta Que cont=cath;
					Escribir "Total a recivir Q.",subsidio;
				FinSi
				Escribir "Si desea salir de esta opcion ingrese un numero mayor a 3";
				leer op;
				Limpiar Pantalla
```
C++
```
subsidio=subsidio+bonot;
				cout<<"Sr." <<nom<<"que se identifica con el DPI"<<dpi<<"\n";
				cout<<"Padre de "<<hijos<<" hijos(as)""\n";
				cout<<"Recivira un subsidio total de Q." <<subsidio<<"\n";
				cout<<"Subsidio correspondiente a la cantidad de hijos Q"<<subsidio-bonot<<"\n";
				cout<<"Bono extra por hijo:""\n";
				int xds=1;
				cont=0;
				do{
					cout<<"Hijo No." <<xds<<" con nombre "<<hijo[xds]<<" y "<<edad[xds]<<" años recibe"<<bonoh[xds]<<"\n";
					xds=xds+1;
					cont=cont+1;
				}
				while (cont<hijos);
				cout<<"Bono total de Q."<<bonot;
				cout<<"\n";
				cout<<"Si desea ingresar otro subsidio ingrese un numero menor a 3 de lo contrario ingrese un numero mayor";
				cin>>op;
				system("cls");
```
Python
```
print("SR. ",nombre," que se identifica con el DPI ",dpi,"\n""padre de ",cath," hijos(as)")
            print("resivira un subsidio total de Q.",subsidio,"\n""repartido de la siguiente manera:")
            print("subsidio correspondiente a la cantidad de hijos(as) Q.",subsidio-bonot,"\n""Bono extra por hijos dependiendo de la edad (7-18 años)")
            con=0
            for i in range(cath):
                con=con+1
                print(f"Hijo No.{con}: {hijo[i]} Q.{bonohijo[i]}")
            print("Total a recivir Q.",subsidio)
            op=int(input("Si desea salir para escoger otra opcion ingrese un numero mayor a 2""\n"))
            os.system("cls")
```
adicional el final se visualiza la pregunta "si desea salir de esta opcion ingrese un numero mayor a 3" si el usuario ingresa un numero menor a 3 
se inicia nuevamente la opcion 2 y si ingresa un numero mayor a 3 vuelve al menu principal.

Si ingresa el numero de la opcion 3 el programa termina su ejecusion pero si ingresa un numero mayor a 3 (>3) entonces el progrma muestra un mensaje 
que le indica al usuario el ingreso de una opcion valida

PSeInt
```
si opc>3 entonces
				Escribir "Favor ingrese un numero de opcion correcto";
			FinSi
			Escribir "";
```
C++
```
}else if(opc==3){
			opcf=6;
			cout<<"Gracias por utilizar el programa, no olvide tomar su dulce al salir XD";
		}else if (opc>=4){
			cout<<"ingrese un numero de opcion valido >:c""\n";
			cout<<"ingrese cualquier numero para continuar""\n";
			cin>>nad;
			system("cls");
```
Python
```
if opcs==3:
        print("Gracias por utilizar el programa")
        opc=4
    elif opcs>=4:
        print("ingrese una opcion balida >:c")
```
en este bloque deje un escribir sin una variable para que cree una pequeña pausa, antes de volver al menu principal
y por utimo tenemos la validacion del repetir donde si "opc=3" termina de ejecutar el programa o dicho de otra forma si el usuario elige la 
opcion 3 se termina de ejecutar el programa

PSeInt
```
Hasta Que opc=3;
```
C++
```
while (opcf<3);
```
