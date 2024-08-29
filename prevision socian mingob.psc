Algoritmo previcion_social_mingob
	//este programa tien tres opciones la primera es para calcular el factorial de un numero entero
	//la segunda realiza el calculo de un subsidio que se les entrega a los padres de familia dependiendo de la cantidad de hijos y sus edades
	//y la ultima opcion es para salir del programa 
	definir dpi,cath,i Como Entero;
	definir subsidio,bono,bonot Como Real;
	definir hs como cadena;
	definir nom,ape Como Caracter;
	Repetir
		Escribir "Elija una opcion";
		Escribir "1. factorial de un numero (n!)";
		Escribir "2. Prevision social ";
		Escribir "3. Salir del programa";
		leer opc;
		Limpiar Pantalla
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
			Hasta Que op>3;
			si opc>=3 entonces
				Escribir "Favor ingrese un numero de opcion correcto";
			FinSi
			Escribir "";
			FinSi
		FinSi
	Hasta Que opc=3; 
FinAlgoritmo