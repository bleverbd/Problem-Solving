import matplotlib.pyplot as plt
import numpy as np
import random

x = np.linspace(-6, 6, 50)
y = 1 - x**2
plt.plot(x, y)
plt.grid()
x1=np.empty(25)
x2=np.empty(25)
for i in range(25):
    x1[i]=-6
    x2[i]=6    
y1=np.empty(50)    
for i in range(50):
    y1[i]=0.985
      
y2=np.empty(25)
y3=np.empty(25)
for i in range(25):
    y2[i]=y[i]
    y3[i]=y[i+25]
    
plt.plot(x1,y2)
plt.plot(x,y1)
plt.plot(x2,y3)

data_x=np.empty(10,dtype='int')
data_y=np.empty(10,dtype='int')
for i in range(10):
    data_x[i]=random.randint(-6,6)
    data_y[i]=random.randint(-35,1)

    
plt.scatter(data_x,data_y)
c=0
for i in range(10):
    if data_y[i]<=(1 - data_x[i]**2):
        c=c+1

print("Total inside Point is:",c)
