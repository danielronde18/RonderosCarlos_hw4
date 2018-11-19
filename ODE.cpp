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




