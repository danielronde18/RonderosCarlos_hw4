#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


using namespace std;



#define k 1.62
#define Cp 820
#define p 2710
#define Nt 3000

#define N 100
#define nu 1.0
#define abierto 0
#define fijo 1
#define periodico 2
#define l 10


double dx, dt,m,y[l][l];

double pre[N],fut[N];
double coef=(k*dt)/(Cp*(dx**2));


void inicializa(){
	for(int i=0; i<N-1; i++)              
	{   for(int j=0; j<N-1; j++){
		y[i][j]= 100.0;}		
	}
}

void fronterafija(){	
y[0][l]=10.0;
y[l][0]=10.0;
y[0][0]=10.0;
y[l][l]=10.0;
}

void rellena(){
for(i=1;i<l;i+dx){
	pas[i]=0;
	}}
void ecuacionfuturo(){

	for (int i =1,i<N,i++){
		
			fut[j+1]=pre[i]+(k*dt)/(Cp*(dx**2))*(pre[i+1]+pre[i-1]-(2*pre[i]))
		
		for (int i =1,i<N, i++){
		
			pre[i][j]=fut[i][j+1];
	}	

}}






void seleccion_caso( int caso)
{
    if (caso == fijo)
    {   std::ofstream file2;
	file2.open("fijo.txt")
	inicializa();
	fronterafija();
	rellena();
	ecuacionfuturo();
	for(int i=0;i<N,i++){
	file2<<y[i][j]<<""<<pre[i]<<""<<fut[i]<<endl;
	}
	file2.close();
    }
    else if (caso == cerrado)
    {
		        
    }
    else if (caso == periodico)
    {
        
    }
   
}


int main(){

cout<<"ingrese un numero segun sea el caso que desea resolver"<<endl;
cin>>a;
int *caso;
caso=a
seleccion_caso(*caso);


 
return 0;
}


