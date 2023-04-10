n = "5 6 8 6 9 1 6 1 2 4 9 1 9 8 2 3 6 4 7 7 5 9 5 0 3 8 7 5 8 1 5 8 6 1 8 3 0 3 7 9 2 7 0 5 8 8 5 7 0 9 9 1 9 4 4 6 8 6 3 3 8 5 1 6 3 4 6 7 0 7 8 2 7 6 8 9 5 6 5 6 1 4 0 1 0 0 9 4 8 0 9 1 2 8 5 0 2 5 3 3".split()
datatime = set()
dayofmonth = {"01":"31","02":"28","03":"31","04":"30","05":"31","06":"30","07":"31","08":"31","09":"30","10":"31","11":"30","12":"31"}
for i in range(len(n)-7):
    sub = n[i:i+8]
    ans = "".join(sub)
    if ans[:4] == "2023":
        month = ans[4:6]
        if ("01" <= month <= "12"):
            if ("01" <= ans[6:] <= dayofmonth[month]):
                print(ans)
                datatime.add(ans)
print(len(datatime)) # 0