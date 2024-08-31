#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main(){
	int opcf=0;
	int opc;
	int nad;
	string nom;
	string dpi;
	do
	{
		cout<<"En este programa aparecen 3 opciones favor ingrese el numero de la opcion(numeros enteros)""\n";
	    cout<<"1. Factorial de un nmero""\n";
	    cout<<"2. Determinar subsidio de familia ""\n";
	    cout<<"3. Salir del Programa ""\n";
	    cin>>opc;
	    system("cls");
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
			}
			while (op<3);
		}else if(opc==3){
			opcf=6;
			cout<<"Gracias por utilizar el programa, no olvide tomar su dulce al salir XD";
		}else if (opc>=4){
			cout<<"ingrese un numero de opcion valido >:c""\n";
			cout<<"ingrese cualquier numero para continuar""\n";
			cin>>nad;
			system("cls");
		}
	}
	while (opcf<3);
	return 0;
}
