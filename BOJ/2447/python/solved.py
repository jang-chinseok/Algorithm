num=int(input())
map=[[0 for col in range(num)]for low in range(num)]

def resqer(a,b,N) :
    for i in range(3) :
        
        for j in range(3):
            if N==1 and a+3<num and (i ==2 and j==2):
                a+=3
                print("first cycle")
            if N != 1 :
                print("second cycle")
                resqer(a,b,N/3)
            elif i==1 and j==1 or a==2 and b==2:
                map[a+i][b+j]=" "
                print(" ")
            else :
                map[a+i][b+j] = "*"
        if N==1 and a+3<num and (i ==2 and j==2) :
            b+=3
        
            
resqer(0,0,num)

for i in range(num) :
    for j in range(num) :
        print(map[i][j],end=" ")
    print()
            
