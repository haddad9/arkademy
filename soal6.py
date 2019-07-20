def mrBrulee(operator,N,a,b,c):
    total=0
    i = 0
    num_str=''
    
    while i <= N:

        total += 1
        total_str = str(total)
        num_str+=total_str
        i+=1
    
    if operator =="SUM":
        num_a = int(num_str[a-1])
        num_b = int(num_str[b-1])
        num_c = int(num_str[c-1])
        result = num_a + num_b + num_c
        
    elif operator== "MUL":
        num_a = int(num[a-1])
        num_b = int(num[b-1])
        num_c = int(num[c-1])
        result = num_a * num_b * num_c
        
    elif operator== "SUB":
        num_a = int(num[a-1])
        num_b = int(num[b-1])
        num_c = int(num[c-1])
        result = num_a * num_b * num_c
        
    elif operator== "DIV":
        num_a = float(num[a-1])
        num_b = float(num[b-1])
        num_c = float(num[c-1])
        result = num_a / num_b / num_c
    print(result)   
    return result
        
            
mrBrulee('SUM',20,11,13,15)
    