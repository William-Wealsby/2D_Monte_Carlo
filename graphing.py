import matplotlib.pyplot as plt
from csv import reader
filename = "pi_values.csv"
x=[]
y=[]
with open(filename,'r') as file:
    csvdata = reader(file)
    for row in csvdata:
        x.append(float(row[0]))
        y.append(float(row[1]))
plt.scatter(x,y)
plt.show()
