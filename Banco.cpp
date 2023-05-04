#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	//system ("color B1");
	regresa:
	int opc,r,s;
	char a[20];
	char b[20];
	cout<<"\n\t BBVA (Banco Belico de Varios Alusines)"<<endl;
	cout<<"\n \t ��Hola Lorena Azuara!!"<<endl;
    system("pause");
    system("cls");
    cout<<"\n \t Introduzca clave..."<<endl;
	int i = 0;
	
	while (a[i] != 13)
	{
		a[i] =getch();
		if (a[i] > 32 && i < 20)
		{
			putchar('*');
			i++;
		}
		else if (a[i] == 8 && i > 0)
		{
			putchar(8);
			putchar(' ');
			putchar(8);
			i--;
		}
	}
	a[i] = '\0';
	if(!strcmp(a, "alusin"))
	{
		if(!strcmp(a, "alusin"))
		{
			cout<<"\n Acceso permitido,";
			system("pause");
    		system("cls");
    	}
    	else
		   getch();
		   cout<<"\n Bienevenido Lorena Azuara"<<endl;
		   regresa2:
		   while(1)
		   {	
		   	cout<<"____________________________"<<endl;
		   	cout<<"(BBVA)Banco Belico de Varios Alusines"<<endl;
		   	cout<<"____________________________"<<endl;
		   	cout<<"1-. Retiro"<<endl;
		   	cout<<"2-. Transferencia"<<endl;
		   	cout<<"3-. Saldo"<<endl;
		   	cout<<"4-. Retiro sin tarjeta"<<endl;
		   	cout<<"5-. Agregar Usuario"<<endl;
		   	cout<<"6-. Eliminar usuario"<<endl;
		   	cout<<"ingrese una opci�n:"<<endl;
		   	cin>>opc;
		   	switch(opc)
			   {
		   		    case 1: 
		   			cout<<"\n Opcion 1"<<endl;
		   			while(1)
		   			{
		   				cout<<"-------------------------------\n";
						cout<<"Cuanto desea retirar??\n";
                		cout<<"-----------------------------\n";
                		cout<<"\t(1)100\n";
                		cout<<"\t(2)200\n";
                		cout<<"\t(3)500\n";
                		cout<<"\t(4)Otro\n";
                		cout<<"\t(5)Salir\n";
                		cout<<"Ingrese una opcion:";	
		   				cin>>r;
		   				switch(r)
						{
							case 1:
								cout<<"-------------------------------\n";
								cout<<"\tSe retiraron $100 (cien pesos MX)\n";
								cout<<"-------------------------------\n";
							break;
							case 2:
								cout<<"-------------------------------\n";
								cout<<"\tSe retiraron $200 (docientos pesos MX)\n";
								cout<<"-------------------------------\n";
							break;
							case 3:
								cout<<"-------------------------------\n";
								cout<<"\tSe retiraron $500 (cien pesos MX)\n";
								cout<<"-------------------------------\n";
							break;
							case 4:
								int i;
								cout<<"-------------------------------\n";
								cout<<"\tColocar la cantidad que desea retirar...";
								cin>>i;
								cout<<"-------------------------------\n";
								cout<<"\tSe retiraron("<<i<<" pesos MX)\n";
							break;
							case 5:
								system("pause");
    							system("cls");
								goto regresa2;
							break;				  
						}   			
						system("pause");
    					system("cls");	
					}
    			system("cls");
		   		break;
		   		case 2: 
		   		while(1){
		   			cout<<"_______________________"<<endl;
		   			cout<<"\n Transferencia"<<endl;
		   			cout<<"_______________________"<<endl;
		   		    cout<<"Cual es el monto que desea transferir:"<<endl;
		   		    cout<<"\t(1)100\n";
                	cout<<"\t(2)200\n";
                	cout<<"\t(3)500\n";
                	cout<<"\t(4)Otro\n";
                	cout<<"\t(5)Salir\n";
                	cout<<"Ingrese una opcion:";
		   		    cin>>s;
		   		    
		   		    switch(s){
		   		    	case 1:
		   		    		cout<<"___________________________"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|BBVA  Unidad Culhuacan   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Transferencia de $100    |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Cien Pesos Mexicanos MNMX|"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Lorena Azuara...         |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Av. Carlota Armero       |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Eje 6.                   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|No olvide conservar su   |"<<endl;
		   		    		cout<<"|ticket para cualquier    |"<<endl;
		   		    		cout<<"|aclaracion fiscal        |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		break;
		   		    	case 2:
		   		    		cout<<"___________________________"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|BBVA  Unidad Culhuacan   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Transferencia de $200    |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Cien Pesos Mexicanos MNMX|"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Lorena Azuara...         |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Av. Carlota Armero       |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Eje 6.                   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|No olvide conservar su   |"<<endl;
		   		    		cout<<"|ticket para cualquier    |"<<endl;
		   		    		cout<<"|aclaracion fiscal        |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		break;
		   		    	case 3:
		   		    		cout<<"___________________________"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|BBVA  Unidad Culhuacan   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Transferencia de $300    |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Cien Pesos Mexicanos MNMX|"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Lorena Azuara...         |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Av. Carlota Armero       |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Eje 6.                   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|No olvide conservar su   |"<<endl;
		   		    		cout<<"|ticket para cualquier    |"<<endl;
		   		    		cout<<"|aclaracion fiscal        |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		break;
		   		    	case 4:
		   		    		cout<<"Qué monto desea transferir:";
		   		    		cin>>i;
		   		    		cout<<"___________________________"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|BBVA  Unidad Culhuacan   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Transferencia de $"<<i<<" |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Lorena Azuara...         |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Av. Carlota Armero       |"<<endl;
		   		    		cout<<"|                         |"<<endl;
		   		    		cout<<"|Eje 6.                   |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		cout<<"|No olvide conservar su   |"<<endl;
		   		    		cout<<"|ticket para cualquier    |"<<endl;
		   		    		cout<<"|aclaracion fiscal        |"<<endl;
		   		    		cout<<"|_________________________|"<<endl;
		   		    		break;
		   		    	case 5:
		   		    		goto regresa2;
		   		    		break;
					   }
				   }
		   			system("pause");
    				system("cls");
		   		break;
		   		case 3: 
		   		system("cls");  
		   		cout<<"\n Opcion 3"<<endl;
		   		cout<<"\tEl saldo de Lorena Azuara es de..."<<saldo<<"...(Pesos MXN)\n";
		   		system("pause");
		   		system("cls");
		   		goto regresa2;
		   		break;
		   		case 4: 
		   		cout<<"\n Opcion 4"<<endl;
		   				otro2:
		   				cout<<"Ingrese la clave de registro de 10 dijitos \n";
		   				cin>>clave;
		   				if(clave==1239874569){	
						}
						else 
						{
							cout<<"��Clave Incorrecta!!\n";
							goto otro2;
						}
						otro3:
						cout<<"\n";
		   				cout<<"Ingrese el codigo de seguridad de 4 dijitos \n";
		   				cin>>cod;
		   				if(cod==8520){
						}
						else 
						{
							cout<<"��Clave Incorrecta!!\n";
							goto otro3;
						}
						cout<<"________Su retiro sin tarjeta,ha sido un exito___________\n";
						cout<<"____________________Vuelva Pronto________________________\n";
						system("pause");
						system("cls");
		   		break;
		   		break;
			   }
		   }
	}
	else
	{
		cout<<"Acceso DENEGADO,";
		system("pause");
    	system("cls");
		goto regresa;
	}
}
