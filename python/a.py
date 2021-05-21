
balance, money, select =0,0,0

money=int(input("µ·"))
select=int(input("1,2"))
balance=money

if select==1:
    if money >=100:
        print("po")
        money=balance-100
    else:
        print("don")
elif select==2:
    if money >=200:
        print("po")
        money=balance-200
    else:
        print("don")
elif select==3:
    if money >=300:
        print("to")
        money=balance-300
    else:
        print("don")
else:
    print("re")