#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>

using namespace std;


#define pi 3,14
int N=10000;
double g=10;
double m=0.2;
double c=0.2;

double posX[];
double posY[];
double velX[];
double velY[];
double tiemp[];



double posX[N];
double posY[N];
double velX[N];
double velY[N];
double tiemp[N];
double dx =0.03;
double dt=0.009;


double x_0=0.0;
double y_0=0.0;
double t_0=0.0;
double vel_0 =300.0 ;
int angulo_0 =45;

double Xprimera_derivada(double vX);
double Xsegunda_derivada(double vX,double vY);
double Yprimera_derivada(double vY);
double Ysegunda_derivada(double vX,double vY);
double valorvelx(int angulo,double velocidad);
double valorvely(int angulo,double velocidad);
void rellena(double velX,double velY,double posY,double posX);
void rellena2(double velX,double velY,double posY,double posX);
void angulosvarios();

double valorvelx(int angulo,double velocidad){

	return velocidad*cos(angulo*(pi/180));

}


double valorvely(int angulo,double velocidad){
	return velocidad*sin(angulo*(pi/180));
}

double Xprimera_derivada(double vX){

	return vX;
}
double Yprimera_derivada(double vY){
	return vY;
}

double Ysegunda_derivada(double vX,double vY){

	return -g-(c/m)*vY*pow((vX*vX)+(vY*vY),0.5);
}

double Xsegunda_derivada(double vX,double vY){
	return -(c/m)*vX*pow((vX*vX)+(vY*vY),0.5);
}

void rellena(double velX,double velY,double posY,double posX){
posX[1]=posX[0]+dt*Xprimera_derivada(velX[0],velY[0]);
posY[1]=posY[0]+dt*Yprimera_derivada(velX[0],velY[0]);

velX[1]=velX[0]+dt*Xsegunda_derivada(velX[0],velY[0]);
velY[1]=velY[0]+dt*Ysegunda_derivada(velX[0],velY[0]);}

void rellena2(double velX,double velY,double posY,double posX){
for (int i=1,i<N,i++){

posX[i+1]=posX[i-1]+2*dt*Xprimera_derivada(velX[i-1],velY[i-1]);
posY[i+1]=posY[i-1]+2*dt*Yprimera_derivada(velX[i-1],velY[i-1]);

velX[1]=velX[i-1]+2*dt*Xsegunda_derivada(velX[i-1],velY[i-1);
velY[1]=velY[i-1]+2*dt*Ysegunda_derivada(velX[i-1],velY[i-1]);
}}
							
void angulosvarios(){
int angulomin=10;
int angulomax=80;

for (int i=angulomin,i<=angulomax,i+10){
tiemp[0]=t_0;
posX[0]=x_0;
posY[0]=y_0;
int ang=i;
velX[0]=valorvelx( ang,vel_0);
velY[0]=valorvelx( ang, vel_0);


rellena(velX, velY, posY, posX);
rellena2(velX, velY, posY, posX);

for(int i=1,i<N,i++){
file2<<posX[i]<<""<<velX[i]<<""<<posY[i]<<""<<velY[i]<<endl;
}
}
}
							

