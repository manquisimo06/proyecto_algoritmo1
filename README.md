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
## PSInt
Para este lenguaje definimos multiples variables y de diferente tipo de datos para diferentes propositos desde variables de tipo 
entero, real, cadena y caracter que nos ayudaran con el desarrollo de nuestro proyecto en este lenguaje 
```definir dpi,cath,i Como Entero;
	definir subsidio,bono,bonot Como Real;
	definir hs como cadena;
	definir nom,ape Como Caracter;
```

Iniciamos con un la condicion repetir donde tenemos nuestro menu principal
```
Repetir
		Escribir "Elija una opcion";
		Escribir "1. factorial de un numero (n!)";
		Escribir "2. Prevision social ";
		Escribir "3. Salir del programa";
		leer opc;
		Limpiar Pantalla
```
el cual nos muestra las 3 opciones que tiene el programa, la leemos y almacenamos en una variable, adicional a eso le
le agregamos un 'limpiar pantalla' que nos ayuda para que se vea mas limpia la ejecusion en pantalla.

Para ejecutar cualquiera de nuestras opciones o el numero de la opcion que la persona ingrese lo validamos en una condicion "si entonces"
pero esta esta anidada, quiere decir que si el numero almacenado en la variable "opc" no es igual a la primera validacion que aparece se 
dirige a la siguiente validacion y si no es igual se dirige a la siguiente hasta llegar a la ultima yde ser verdadero ejecutara el codigo que
este dentro de la condicional
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
cuando entra en esta opcion comenzamos con el bucle o ciclo repetir como en la opcion 1, en esta opcion le pedimos al usuario que 
ingrese los datos que se le solicitan para hacer el calculo del subsidio, de utiliza una serie de si anidados ya que dependiendo 
de la cantidad de hijos haci sera el dinero del subcidio que recibira
Dependiendo de la cantidad de hijos el programa le indicara que ingrese ciertos datos de los mismos como lo es el nombre y la edad 
esto por que si los hijos estan entre sierta edad el programa le calculara un bono extra (7-18 años, el 6% por cada hijo entre esas edades)
en esta parte se hizo uso de las dimensiones ya que necesitabamos utilizar variables para guardar los datos de los hijos pero si no 
sabiamos la cantidad de hijos que tiene cada uno no podiamos declarar esa cantidad de variables entonces decidi utilizar dimendiones 
para las variables "hijos[cath], edad[cath] y bonohijo[cath]" y el tamaño de la dimension se la daba el usuario al igresar la cantidad 
de hijos que tiene 
```
Escribir "Ingrese la cantidad de hijos que tiene (hijos de sexo masculino y femenino)";
					leer cath;
					Dimension hijos[cath];
					Dimension edad[cath];
					Dimension bonohijo[cath];
```
para hacer el calculo de la bonoficasion por hijo cuando ingresa la canttidad de hijos que tien ingresa a un bucle o ciclo repetir 
y este varifica hijo por hijo las edades si estan entre 7-18 años entonces le calcula una bonoficasion extra 
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
y las almcena en las variables de los hijos para despues mostrar en pantalla el resultado, donde mustra los datos del padre con un total
del subsidio que recibira adicional le muestra el desgloce de los bonos por hijo le mustra el subsidio sin el bono el total del 
bono que recibio por los hijos 
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
adicional el final se visualiza la pregunta "si desea salir de esta opcion ingrese un numero mayor a 3" si el usuario ingresa un numero menor a 3 
se inicia nuevamente la opcion 2 y si ingresa un numero mayor a 3 vuelve al menu principal.

Si ingresa el numero de la opcion 3 el programa termina su ejecusion pero si ingresa un numero mayor a 3 (>3) entonces el progrma muestra un mensaje 
que le indica al usuario el ingreso de una opcion valida
```
si opc>3 entonces
				Escribir "Favor ingrese un numero de opcion correcto";
			FinSi
			Escribir "";
```
en este bloque deje un escribir sin una variable para que cree una pequeña pausa, antes de volver al menu principal
y por utimo tenemos la validacion del repetir donde si "opc=3" termina de ejecutar el programa o dicho de otra forma si el usuario elige la 
opcion 3 se termina de ejecutar el programa
```
Hasta Que opc=3;
```

