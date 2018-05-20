#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<time.h>

struct nodo
{
   char nombre[40];
	nodo *sig;
};
void recorre(nodo *p);
nodo *crear_sortear(nodo *p);

void main(void)
{
	nodo *p=NULL;
	gotoxy(5,3);cout<<"EL PROBLEMA DE JOSE";
	gotoxy(5,4);cout<<"-------------------";

   gotoxy(8,6);cout<<"Soldados : ";
   p=crear_sortear(p);
	cout<<"\n\n\n\tEl soldado que escapara con el caballo es: "<<p->nombre;
   getch();

}

void recorre(nodo *p)
{
	nodo *q;
   q=p;
   cout<<(q->nombre)<<"    ";
   q=q->sig;
	while(q!=p)
   {
		cout<<(q->nombre)<<"    ";
      q=q->sig;
   }
}

nodo *crear_sortear(nodo *p)
{
	nodo *q,*r;
   char op;
   int i=0;
   do
   {
   	i++;
      q=new(nodo);
      gotoxy(8+8*i,8);cin>>q->nombre;
      if(p==NULL)
      	p=q;
		else
			r->sig=q;
      r=q;
      q->sig=p;
      gotoxy(18,15);cout<<" Mas datos...? (S/N): ";cin>>op;
      gotoxy(40,15);cout<<"                     ";
   }
   while(op=='s'||op=='S');

   clrscr();
   gotoxy(5,3);cout<<"EL PROBLEMA DE JOSE";
	gotoxy(5,4);cout<<"-------------------";
   gotoxy(8,6);cout<<"\n\tSoldados :  ";
   recorre(p);
   getch();

   int n,pos;
   i++;
   int j;
   nodo *x,*y,*z;
   while(p!=p->sig){
   	srand(time(NULL));
   	n=1+rand()%(i - 1);
   	pos=1+rand()%(i - 1);
      cout<<"\n\n\tPosicion: "<<pos;
      cout<<"\t\tSaltos: "<<n;
      //cout<<p->nombre;
      j=2;
      y=p;
      while(j<=pos+n){
         x=y;
      	y=y->sig;
         z=y->sig;
         j++;
      }
      //cout<<x->nombre<<y->nombre<<z->nombre;
      //eliminar nodo
      if(y==p)
      	p=z;
      x->sig=z;
      delete(y);
      i--;
      getch();
   	cout<<"\n\n\n\tSoldados :  ";
     	recorre(p);
   }

   return(p);
}

