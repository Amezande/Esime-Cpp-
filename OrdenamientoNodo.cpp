/*
Case 8: Ordenación burbuja
case 9: Shaker sort
case 10: Selección Directa
case 11:Selección Binaria
case 12:Inserción Directa

Para etregar el 17 de abril
*/


void burbuja(nodo *p)
{
    int total=0,i,j,temp;
    nodo *aux,*aux2;
    aux=p;
    while(aux!=NULL){
        total++;
        aux=aux->Sig;
    }
    cout<<" Total de datos en la lista: "<<total<<"\n";

    for(i=1; i<total; i++){
        aux=p;
        aux2=aux->sig;
        for(j=1;j<total;j++){
            if(aux->dato > aux->dato){
                temp=aux->dato; 
                aux->dato=aux2->dato;
                aux2->dato=temp;
            }
            aux=aux2;
            aux2=aux2->sig;
        }
    }
}
