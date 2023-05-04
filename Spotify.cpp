#include <iostream>
#include <iostream> 
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include <string>
struct nodo
{
	int dato;
	struct nodo *sig,*ant;	
};
using namespace std;
int main()
{
	int i,opc,j,n=9,x,r=0,z=0,zz,yy,elector,vactor[9],g,d,nn,nnn,auxiliar,opccase0,selector,cont,band,lo;

	nodo *p=NULL,*f=NULL,*aux,*nuevo,*aux2,*aux3;
	char s1[] = "C:\s1.wav";	
	char s2[] = "C:\s2.wav";
	char s3[] = "C:\s3.wav";
	char s4[] = "C:\s4.wav";
	char s5[] = "C:\s5.wav";
    srand(time(NULL));
	while(1)
	{		
		cout<<"Menu\n";
		cout<<"0.CREAR PLAY LIST\n";
		cout<<"1.Mostrar Play List\n";
		cout<<"2.Siguiente\n";
		cout<<"3.Anterior\n";
		cout<<"4.Agregar Cancion\n";
		cout<<"5.Eliminar cancion\n";
		cout<<"6.Reproduccion Aleatoria\n";
		cout<<"7.Letras\n";
		cout<<"Elija una opcion: ";
		cin>>opc;
		switch(opc)
		{
			case 11:
				if(p==NULL)
				{
					cout<<"Lista vacia";
				}
				else
				{
					aux=p;
					do
					{
						cout<<aux->dato<<"  ";
						aux=aux->sig;
					}while(aux!=p);
				}
			break;
			
			case 0:
			system("cls");							
			do{
			cout<<"* * * Lista de canciones disponible * * *"<<endl;
			cout<<"1. AMG\n";			
			cout<<"2. Ella Baila Sola\n";
			cout<<"3. El gordo trae el mando\n";				
			cout<<"4. Ella\n";
			cout<<"5. Con tus besos\n"<<endl;
			cout<<"Cuantas canciones le gustaria aÃ±adir:  ";
			cin>>opccase0;
			if(opccase0!=0)
			{
				
			for(i=1;i<=opccase0;i++)
			{	
				cout<<"Que cancion quieres aÃ±adir a la PLAY LIST : ";
				cin>>selector;
				if(z==NULL)
				{
					p=new(nodo);
					p->dato=selector;
					p->sig=p;
					p->ant=p;
					f=p;
				}
				else
				{
					aux=new(nodo);
					aux->dato=selector;
					f->sig=aux;
					aux->sig=p;
					p->ant=aux;
					aux->ant=f;						
					f=aux;
				}
				z++;
			}
				
			}
		
			
		cout<<"Quieres salir de la creacion de PLAY LIST\n";
		cout<<"1-Si  2-No"<<endl;
		cin>>auxiliar;
		}while(auxiliar!=1);
		

			
			system("CLS");
			break;
			
			case 1:
			
			aux=p;			
			cout<<"\nPLAY LIST\n";			
				if(p==NULL)
				{
					cout<<"Lista vacia\n";
				}
				else
				{
				aux=p;
				cont=1;
				do
				{
					cout<<cont;
					switch(aux->dato)
					{
						case 1:
							cout<<" AMG\n";
						break;
						
						case 2:
							cout<<" Ella Baila Sola\n";
						break;
						
						case 3:
							cout<<" El gordo trae el mando\n";
						break;
						
						case 4:
							cout<<" Ella\n";
						break;
						
						case 5:
							cout<<" Con tus besos\n";
						break;
					}
					cont++;	
					aux=aux->sig;
				}while(aux!=p);
				aux=p;
				aux=aux->ant;
				do{
					aux=aux->sig;		
					while(aux!=NULL)
				{
					if(aux->dato==1)
					{
						cout<<"Reproduciendo: AMG\n";
						cout<<PlaySound((LPCSTR)s1,NULL,SND_FILENAME);	
					}
					if(aux->dato==2)
					{
						cout<<"Reproduciendo: Ella Baila Sola\n";
						cout<<PlaySound((LPCSTR)s2,NULL,SND_FILENAME);	
					}
					if(aux->dato==3)
					{
						cout<<"Reproduciendo: El gordo trae el mando\n";
						cout<<PlaySound((LPCSTR)s3,NULL,SND_FILENAME);		
					}	
					if(aux->dato==4)
					{
						cout<<"Reproduciendo: Ella\n";
						cout<<PlaySound((LPCSTR)s4,NULL,SND_FILENAME);		
					}
					if(aux->dato==5)
					{
						cout<<"Reproduciendo: Con tus besos\n";
						cout<<PlaySound((LPCSTR)s5,NULL,SND_FILENAME);		
					}														
					break;
				}
				
				cout<<"Desea seguir reproduciendo la play list?\n 1=SI  2=NO\n";
				cin>>x;
				}while(x==1);
				}
				

			
			system("pause");
			system("CLS");
			break;
			
			case 2:			
				while(aux!=NULL)
				{
					aux=aux->sig;
					if(aux->dato==1)
					{
						cout<<"Reproduciendo: AMG\n";
						cout<<PlaySound((LPCSTR)s1,NULL,SND_FILENAME);	
					}
					if(aux->dato==2)
					{
						cout<<"Reproduciendo: Ella Baila Sola\n";
						cout<<PlaySound((LPCSTR)s2,NULL,SND_FILENAME);	
					}
					if(aux->dato==3)
					{
						cout<<"Reproduciendo: El gordo trae el mando\n";
						cout<<PlaySound((LPCSTR)s3,NULL,SND_FILENAME);		
					}	
					if(aux->dato==4)
					{
						cout<<"Reproduciendo: Ella\n";
						cout<<PlaySound((LPCSTR)s4,NULL,SND_FILENAME);		
					}
					if(aux->dato==5)
					{
						cout<<"Reproduciendo: Con tus besos\n";
						cout<<PlaySound((LPCSTR)s5,NULL,SND_FILENAME);		
					}	

					break;
				}
				system("pause");
				system("CLS");				
			break;
			
			case 3:
				while(aux!=NULL)
				{
					aux=aux->ant;
					if(aux->dato==1)
					{
						cout<<"Reproduciendo: AMG\n";
						cout<<PlaySound((LPCSTR)s1,NULL,SND_FILENAME);	
					}
					if(aux->dato==2)
					{
						cout<<"Reproduciendo: Ella Baila Sola\n";
						cout<<PlaySound((LPCSTR)s2,NULL,SND_FILENAME);	
					}
					if(aux->dato==3)
					{
						cout<<"Reproduciendo: El gordo trae el mando\n";
						cout<<PlaySound((LPCSTR)s3,NULL,SND_FILENAME);		
					}	
					if(aux->dato==4)
					{
						cout<<"Reproduciendo: Ella\n";
						cout<<PlaySound((LPCSTR)s4,NULL,SND_FILENAME);		
					}
					if(aux->dato==5)
					{
						cout<<"Reproduciendo: Con tus besos\n";
						cout<<PlaySound((LPCSTR)s5,NULL,SND_FILENAME);		
					}													
					break;
				}
				system("pause");
				system("CLS");
			break;
			
			case 4:
				
				cout<<"* * * Lista de canciones disponible * * *"<<endl;
				cout<<"1. Spiders\n";			
				cout<<"2. Paranoid\n";
				cout<<"3. The Beatles\n";				
				cout<<"4. Megadeth\n";
				cout<<"5. Glass Animals\n";
				cout<<"6. Elley Duh\n";
				cout<<"7. Imagine Dragons\n";
				cout<<"8. Tove Lo Habits\n";
				cout<<"9. Toxic BoyWithUke\n";
				cout<<"10. Inila Ainsi Bas La Vida\n"<<endl;
				cout<<"Que cancion quieres aÃ±adir : ";
				cin>>selector;
				if(z==NULL)
				{
					p=new(nodo);
					p->dato=selector;
					p->sig=p;
					p->ant=p;
					f=p;

				}
				else
				{
					aux=new(nodo);
					aux->dato=selector;
					f->sig=aux;
					aux->sig=p;
					p->ant=aux;
					aux->ant=f;						
					f=aux;

				}
				z++;
				n=n+1;
				system("pause");
				system("CLS");				
			break;
			
			case 5://ELIMINAR CANCION
			
			if(z==NULL)
				cout<<"* * * Lista vacÃ­a * * *\n";
			else
			{
				band=0;
				aux=p;
				cont=1;
				cout<<"* * * Lista de la PLAY LIST * * *"<<endl;
				do
				{
					cout<<cont;
					switch(aux->dato)
					{
						case 1:
							cout<<" AMG\n";
						break;
						
						case 2:
							cout<<" Ella Baila Sola\n";
						break;
						
						case 3:
							cout<<" El gordo trae el mando\n";
						break;
						
						case 4:
							cout<<" Ella\n";
						break;
						
						case 5:
							cout<<" Con tus besos\n";
						break;
					}
					cont++;	
					aux=aux->sig;
				}while(aux!=p);
				cout<<"Ingresa el numero de la cancion a eliminar: ";
				cin>>selector;
				aux=p;
				
					if(selector<=cont)
					{
						band=1;
						z--;
						if(cont==1)//Primer nodo
						{
							aux=p;
							delete(aux);
							p=NULL;
							f=NULL;
							break;
						}
						else//Mas de un nodo en la lista 
						{
							if(selector==1)//Primer nodo
							{
								aux=p;
								p=aux->sig;
								p->ant=f;
								f->sig=p;
								delete(aux);
								break;
							}
							else
							{
								if(selector==cont)//Fin de la lista
								{
									aux=f;
									aux2=aux->ant;
									f=aux2;
									f->sig=p;
									p->ant=f;
									delete(aux);
									break;
								}
								else//Centro de la lista
								{
									if((selector>1) && (selector<cont))
									{
									aux=p;
									for(i=2;i<=selector;i++)
									{
										aux2=aux;
										aux=aux->sig;
									}
									aux2->sig=aux->sig;
									aux3=aux->sig;
									aux3->ant=aux->ant;
									aux->sig=NULL;
									aux->ant=NULL;
									delete(aux);
									break;		
									}
									
								}
							}
						}
					}
			}
			if(band==0)
				cout<<"* * * Dato NO Encontrado * * *\n";
			
			break;
			
			case 6://CANCIONES ALEATORIAS
			
		nn=z;
		nn--;
		aux=p;
        elector=1+ rand()%nn; 			
				aux=p;
				cout<<"\nPLAY LIST\n";
				if(z==NULL){
					cout<<"Lista vacia";
				}
				else
				{
					cont=1;
				do
				{
					cout<<cont;
					switch(aux->dato)
					{
						case 1:
							cout<<" AMG\n";
						break;
						
						case 2:
							cout<<" Ella Baila Sola\n";
						break;
						
						case 3:
							cout<<" El gordo trae el mando\n";
						break;
						
						case 4:
							cout<<" Ella\n";
						break;
						
						case 5:
							cout<<" Con tus besos\n";
						break;
						
					}
					cont++;	
					aux=aux->sig;
				}while(aux!=p);
					p=aux;
					for(i=1;i<elector;i++)
					{
						aux=aux->sig;
					}
				}
				
					if(aux->dato==1)
					{
						cout<<"Reproduciendo: AMG\n";
						PlaySound((LPCSTR)s1,NULL,SND_FILENAME);	
					}
					if(aux->dato==2)
					{
						cout<<"Reproduciendo: Ella Baila Sola\n";
						PlaySound((LPCSTR)s2,NULL,SND_FILENAME);	
					}
					if(aux->dato==3)
					{
						cout<<"Reproduciendo: El gordo trae el mando\n";
						cout<<PlaySound((LPCSTR)s3,NULL,SND_FILENAME);		
					}	
					if(aux->dato==4)
					{
						cout<<"Reproduciendo: Ella\n";
						cout<<PlaySound((LPCSTR)s4,NULL,SND_FILENAME);		
					}
					if(aux->dato==5)
					{
						cout<<"Reproduciendo: Con tus besos\n";
						cout<<PlaySound((LPCSTR)s5,NULL,SND_FILENAME);		
					}	

			cout<<"Desea seguir reproduciendo aleatoriamente la play list?\n 1=SI  2=NO\n";
			cin>>x;
			if(x==1)
			{
			do
			{
				elector=1+ rand()%nn;
				p=aux;
				for(i=1;i<elector;i++)
				{
					aux=aux->sig;
				}
				while(aux!=NULL)
				{
					aux=aux->sig;
					if(aux->dato==1)
					{
						cout<<"Reproduciendo: AMG\n";
						cout<<PlaySound((LPCSTR)s1,NULL,SND_FILENAME);	
					}
					if(aux->dato==2)
					{
						cout<<"Reproduciendo: Ella Baila Sola\n";
						cout<<PlaySound((LPCSTR)s2,NULL,SND_FILENAME);	
					}
					if(aux->dato==3)
					{
						cout<<"Reproduciendo: El gordo trae el mando\n";
						cout<<PlaySound((LPCSTR)s3,NULL,SND_FILENAME);		
					}	
					if(aux->dato==4)
					{
						cout<<"Reproduciendo: Ella\n";
						cout<<PlaySound((LPCSTR)s4,NULL,SND_FILENAME);		
					}
					if(aux->dato==5)
					{
						cout<<"Reproduciendo: Con tus besos\n";
						cout<<PlaySound((LPCSTR)s5,NULL,SND_FILENAME);		
					}	
											
					break;
				}
			cout<<"Desea seguir reproduciendo la play list?\n 1=SI  2=NO\n";
			cin>>x;
			}while(x==1);
			}
			

			system("pause");
			system("CLS");	
			break;	
			
			//Inicia a abrir los archivos desde el bloc de notas 
		
			case 7:
				while(1){
					cout<<"\n :::::::::::::::::::::::::::"<<endl;
					cout<<"       letras Disponibles "<<endl;
					cout<<"   :::::::::::::::::::::::::::"<<endl;
					cout<<"11. AMG\n";			
					cout<<"22. Ella Baila Sola\n";
					cout<<"33. El Gordo Trae El Mando\n";				
					cout<<"44. Ella\n";
					cout<<"55. Con tus besos\n";
					cout<<"Elije la letra de tu interes: ";
					cin>>lo;
				
					switch(lo)
					{
				 		case 11:
            				
            				cout<<"__________"<<endl;
            				cout<<"   AMG"<<endl;
            				cout<<"__________"<<endl;
            				cout<<"De todo ya pase, claro que le batalle \n Lo saben dos o tres, no soy el mismo que era ayer\n Mercedes AMG, Clase G-63\n Lo que un dÃ­a soÃ±e, todo ya me lo compre\n Muy bueno para las cuentas, todo apunto en la libreta\n AhÃ­ traigo la lista negra pa'l que se pase de verga\n Pura morrita bien buena, montada en mi camioneta\n Los radios suenan y suenan, pero yo siempre ando alerta, eah\n Â¡Ea!\n Y bien jalados, compa Gabito\n Y arriba la bandera, viejo\n Pura doble P\n Â¡Yayay!\n Asi nomas, compa Nata\n Asi nomas\n Compa Gabito, Â¡chau!\n Pura doble P, viejo\n Ayay\n Un GT-R pa' rolar\n Los baby a mi me gustan mas\n Puerto de Mazatlan, divisando la ciudad\n En jet particular, me pongo en cualquier lugar\n Destapando las champagne, hay billetes pa' gastar\n Moviendo bien el ice, everywhere me han de mirar\n Con unos tenis Nike, soy maleante y es lo que hay\n Muy bueno para las cuentas, todo apunto en mi libreta\n Ahi traigo la lista negra, pa'l que se pase de verga\n Pura morrita bien buena, montada en mi camioneta\n Los radios suenan y suenan, pero yo siempre ando alerta";
            				
						break;
						 
						case 22:
							
							cout<<"_____________________"<<endl;
            				cout<<"   Ella Baila sola"<<endl;
            				cout<<"_____________________"<<endl;
            				cout<<"Compa Â¿QuÃ© le parece esa morra?\nLa que anda bailando sola me gusta pa' mÃ­\nElla, ella sabe que estÃ¡ buena\nQue todos andan mirÃ¡ndola como baila\nMe acerco y le tiro todo un verbo\nTomamos tragos sin peros, solo tentaciÃ³n\nLe dije\nVoy a conquistar tu familia, que en unos dÃ­as vas a ser mÃ­a\nMe dijo\nQue estoy muy loco pero le gusta\nQue ningÃºn vato como yo actÃºa\nY ahÃ­ te va, mija\nY pura doble P, viejo\nAsÃ­ nomas, compa Pedro\nPuro EslabÃ³n Armado\nPa' las plebitas\nÂ¡Cha-chau!\nNo soy un vato que tiene varo\nPero hablando del corazÃ³n, te cumplo todo\nMe agarrÃ³ pegadito de su mano\nMi compa ni se la creyÃ³, que al pasar fui yo\nSu cuerpo\nJuro por Dios que era tan perfecto\nSu cinturita como modelo\nSus ojos\nDesde el principio me enamoraron\nA ella le gusta y a mÃ­ me gusta";
							
                        break;
                        
                        case 33:
                        	
                            cout<<"___________________________"<<endl;
            				cout<<"   El gordo trae el mando"<<endl;
            				cout<<"___________________________"<<endl;
            				cout<<"Y por todo el bulevar\nCon mi compa Flaco arremangando\nUnos huaraches, mi gorra de lado\nPor la Zapata, el Gordo trae el mando\nTirando linea con Manny y el CaÃ±a\nA la orden pa'l desorden conectado\nY mi RT en Acapulco\nY si hay pedo, les sepultÃ³\nAquÃ­ no andamos haciendo bulto\nAl chingazo yo resulto\nY una glockzona que va conmigo\nSiempre lista para un susto\nY que sigan llegando las pacas\nSu compa Chinito\nPura pasa el alto\nY mi compa Mario que nunca me deja\nUnas banquetearas a veces tomando\nY mi compa Power y tambiÃ©n el Mau\nMe hacen segunda, nunca me han dejado\nY mi compa Sapo, si hay pedo, Ã©l brinca\nA la orden en una a tirar vergazos\nY acÃ¡ la envidia al chile que no existe\nY pa quÃ© les cuento si no tiene chiste\nYo soy el Gordo, para que se ubiquen\nY en una moto yo les caigo en 15\nY esta se va hasta Acapulco\nPura mafia de la calle";
                      
                    }
			    }		
			break;	
		}
	}
}

