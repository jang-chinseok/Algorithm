num=int(input())
map=[[0 for col in range(num)]for low in range(num)]
for i in map :
    for j in i :
        print(j,end=" ")
    print()
            

first_cycle_num=0
secon_cycle_num=0
def resqer(a,b,N) :
    global first_cycle_num
    global secon_cycle_num
    global num
    for i in range(3) :
        
        for j in range(3):
            
            if first_cycle_num < num or secon_cycle_num <num :
                if N != 1 :
                    resqer(i,j,int(N/3))
                elif i==1 and j==1 or a==1 and b==1:
                    map[first_cycle_num+i][secon_cycle_num+j]=" "
                else :
                    map[first_cycle_num+i][secon_cycle_num+j] = "*"
                if N==1 and a+3<num and (i ==2 and j==2):
                    secon_cycle_num+=3
                if first_cycle_num==num  : #and i==2 and j==2: 
                    return
                
        if N==1 and a+3<num and (i ==2 and j==2) and secon_cycle_num==num :
            secon_cycle_num=0
            first_cycle_num+=3
         
resqer(0,0,num)

for i in map :
    for j in i :
        print(j,end=" ")
    print()
            
