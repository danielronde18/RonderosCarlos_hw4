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
#define OPEN 0
#define CLOSED 1
#define PERIODIC 2
#define INITIAL 0
#define CONSTANT 1

#define T_WHOLE 50.0
#define T_SPOT 100.0

double dx, dt,m,t[][],tpl[][];

double tpl[N][N];
double t[N][N];
double coef=(k*dt)/(Cp*(dx**2));

double inicializa(){
	for(int i=1; i<N-1; i++)                 /* clear the array  */
	{   
		for(int j=0,j<N-1,j++){
			
				t[i][j] = 100.0;
			
}
}
}
/*	
    t[0][0] = 10.0;       
    t[0][N-1] = 10.0;        
   t[N-1][N-1]=10.0;
t[N-1][0]=10.0;
int m=1;*/
/*
void ecuacionfuturo(){

	for (int i =1,i<N,i++){
		for(int j=1,j<N-1,j++){
			t[i][j+1]=t[i][j]+(k*dt)/(Cp*(dx**2))*(t[i+1][j]+t[i-1][j]-(2*t[i][j]));
			//fut[j+1]=pre[i]+(k*dt)/(Cp*(dx**2))*(pre[i+1]+pre[i-1]-(2*pre[i]))
		}
	}for (int i =1,i<N, i++){
		for (int j=1,j<N,j++){
		t[i][j]=t[i][j+1];
	}	

}}

*/



/*
void problemainicial(double *grid)
{
    int width = 20/dx, height_half = 5/dx;

    int i, j, index;
    int i_half = N*0.5, j_half = 0.20*N;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            index = position(i, j);
            grid[index] = T_WHOLE;
            if((j < j_half + width) && (j > j_half))
            {
                if((i < i_half + height_half) && (i > i_half - height_half))
                {
                    grid[index] = T_SPOT;
                }
            }
        }
    }
}

*/
char* seleccion_caso(int limite , int caso)
{
    static char almacena[100];
    char sellim[100];
    if (limite == CLOSED)
    {
        sprintf(sellim, "cerrado");
    }
    else if (limite == OPEN)
    {
        sprintf(sellim, "abierto");
    }
    else if (limite == PERIODIC)
    {
        sprintf(sellim, "periodico");
    }
    if (caso == CONSTANT)
    {
        sprintf(almacena, "constant_%s", sellim);
    }
    else
    {
        sprintf(almacena, "initial_%s", sellim);
    }
    return almacena;
}


int main(void){

 

}

