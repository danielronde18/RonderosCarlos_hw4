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





	

