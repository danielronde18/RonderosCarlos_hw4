Resultados_hw4.pdf : Resultados_hw4.tex 
	pdflatex Resultados_hw4.tex

Resultados_hw4.tex:Plots_hw4.py 45.txt 
	python3 Plots_hw4.py

45.txt : ODE.cpp
	g++ ODE.cpp 
	/a.out

//a.out : DifusionTemperatura.c
//	gcc -lm DifusionTemperatura.c


clean :
rm *.dat *.png *.log *.aux a.out
