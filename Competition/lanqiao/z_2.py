from math import *
for i in range(11000000, (23333333 >> 1) + 1):
    j = 23333333 - i
    p0 = i / 23333333
    p1 = 1 - p0
    S = -(i*p0*log2(p0)+j*p1*log2(p1))
    print(S,i)
    if S > 11625907.5798:
        break

# 11625907.579814468 11027421