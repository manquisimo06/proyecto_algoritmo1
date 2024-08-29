import os
opc=0
op=0
while opc<3:
    print ("ingrese el numero de la opcion a elegir")
    print ('1. Factorial de un numero (n!)')
    print ('2. Prevision social')
    print ('3. Para salir del programa')
    opcs=int(input("ingrese su opcion""\n"))
    os.system("cls")
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
    if opcs==3:
        print("Gracias por utilizar el programa")
        opc=4
    elif opcs>=4:
        print("ingrese una opcion balida >:c")