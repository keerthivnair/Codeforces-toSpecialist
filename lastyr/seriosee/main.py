s=input().split()
q=deque()
ans=''

for x in s:
    temp=x
    temp.capitalize()
    if isupper(x[0]) and temp==x:
        q.append((x[0],x))
    else:
        if(len(q) < 2):
            print(q.pop()[1], end = ' ')
            print(x)
        else:
            for y in q:
                print(y[0])
            print('(')
            while len(q)!=0:
                print(q.pop()[1],end=' ')
            print(')')
                
            
            
        
        