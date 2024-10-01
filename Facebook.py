t=int(input())
for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    c=list(map(int,input().split()))
    maxl=max(l)
    maxc=0
    if(l.count(maxl)>1):
        for j in range(len(l)):
            if l[j]==maxl:
                if(c[j]>maxc):
                    maxc=c[j]
        print(c.index(maxc)+1)
    else:
        print(l.index(maxl)+1)
