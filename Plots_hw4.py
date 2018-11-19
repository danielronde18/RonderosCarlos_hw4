import numpy as np
import matplotlib.pylab as plt
from mpl_toolkits.mplot3d.axes3d import Axes3D



dato45=np.genfromtxt("45.txt")

x=dato45[:,0]
vx=dato45[:,1]
y=dato45[:,2]
vy=dato45[:,3]


a1=10
val45=0
for j in range(1000,len(x)):
	if(abs(y[j])<a1):
		a1=y[j]
		val45=x[j]


plt.figure()
plt.plot(x,y)
plt.title("Trayectoria a 45°")
plt.ylabel("y (m)")
plt.xlabel("x (m)")
plt.legend()
plt.ylim(0,5)
plt.savefig("45.pdf")

angx=["x10","x20","x30","x40","x50","x60","x70"]
angy=["y10","y20","y30","y40","y50","y60","y70"]
ang=[10,20,30,40,50,60,70]



angulos=np.genfromtxt("diferentesangulos.txt")
t=int(np.shape(angulos)[0]/len(angx))

plt.figure()
for i in range(len(angx)):
	angulosx[i]=angulos[i*t:(i+1)*t,0]
	angulosy[i]=angulos[i*t:(i+1)*t,1]
	plt.plot(angx[i],angy[i],label=10*(i+1))
plt.plot(x,y,label="45")
plt.ylim(0,6)
plt.title("diferentes angulos")
plt.ylabel("y (m)")
plt.xlabel("x (m)")
plt.legend()
plt.savefig("variadas.pdf")



	

