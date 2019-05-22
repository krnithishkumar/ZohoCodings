import random
n0 = 0
n5 =5
k=0
ans = 0
while(ans==0):
    n1 = random.randint(1,9)
    while(n1==n5):
        k+=1
        if(k>100):
            k=0
            continue
        n1 = random.randint(1,9)
    n2 = random.randint(1,9)
    while(n1==n2 or n2 not in [2,4,6,8]):
        k+=1
        if(k>100):
            k=0
            continue
        n2 =  random.randint(1,9)
    n3 = random.randint(1,9)
    while((n1+n2+n3)%3!=0 or n3==n1 or n2==n3 or n5 ==n3):
         k+=1
         if(k>100):
            k=0
            continue
         n3 = random.randint(1,9)
    n4 = random.randint(1,9)
    while((n3*10+n4)%4!=0 or n4 in [n1,n2,n3,n5]):
        k+=1
        if(k>100):
            k=0
            continue
        n4 = random.randint(1,9)
    n6 = random.randint(1,9)
    while((n1+ n2 + n3 + n4 + n5 + n6)%6!=0 or n6 in [n1,n2,n3,n4,n5]):
        k+=1
        if(k>100):
            k=0
            continue
        n6 = random.randint(1,9) 
    n7 = random.randint(1,9)
    while((n6*1+n5*3+n4*2+n3*6+n2*4+n1*5)%7!=0 or n7 in [n1,n2,n3,n4,n5,n6]):
         k+=1
         if(k>100):
            k=0
            continue
         n7 = random.randint(1,9)

print(n1,n2,n3,n4,n5,n6,n7,n0)
