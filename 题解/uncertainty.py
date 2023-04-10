from sympy import *

def directMeasure(symbol):
    n = eval(input("测量次数："))
    vars =  symbols(f"{symbol}_1:{n}")
    subDict = {vars[i]:eval(input(f"第{i+1}次测量结果：")) for i in range(n)}
    i = symbols('i')
    xbar = summation(sympify(f"{symbol}_i"),(i,1,n)).evalf(subs=subDict)/n
    uA = sqrt((summation(sympify(f"{symbol}_i**2"),(i,1,n))/n-xbar**2)(n-1)).evalf(subs=subDict)
    return xbar,uA

xbar,uA = directMeasure('x')
print(xbar,uA)
