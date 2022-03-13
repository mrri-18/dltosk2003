import matplotlib.pyplot as plt

x_data=['MON','TUE','WED','THR','FRI','SAT','SUN']
plt.title("graph",fontsize=10)
plt.xlabel('day',fontsize =12)
plt.ylabel('population',fontsize=12)

a=[242,256,237,223,263,81,46]
n=len(a)
sum=0
avg=0
for i in range(0,n):
    sum=sum+a[i]
avg=sum/n

plt.scatter(x_data,a)
plt.plot(x_data,a)
plt.show()
print(sum)
print(avg)
    
    
