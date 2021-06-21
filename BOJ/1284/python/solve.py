
while 1 :
    input_num = str(input())
    if input_num == "0":
        break
    sum = len(input_num)+1; 
    for j in input_num :
        curruntNum=j
        if curruntNum=='1' :
            sum+=2;                
        elif curruntNum=='0' :
            sum+=4
        else :
            sum+=3
    print(sum)


