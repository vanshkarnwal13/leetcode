arr=[3,5,6,0,7]
power=[3,1,0,2] 
k=len(power)
res=[float("-inf")]
comb=[]

def printCombination(arr, n, r):

    data = [0] * r

    combinationUtil(arr, n, r, 0, data, 0)
 

def combinationUtil(arr, n, r, index, data, i):
 

    if (index == r):
        temp=[]
        for j in range(r):
            # print(data[j], end = " ")
            temp.append(data[j])
        # print()
        comb.append(temp)
        return

    if (i >= n):
        return
 

    data[index] = arr[i]
    combinationUtil(arr, n, r, index + 1,
                    data, i + 1)
 
    combinationUtil(arr, n, r, index,
                    data, i + 1)
 


arr2 = [i for i in range(len(power))]
r = 2
n = len(arr2)
printCombination(arr2, n, r)


# max_power(arr,power)

def fun():
    print(comb)
    
    p=0
    start=0
    time=0
    while(time<k//2):
        p+=sum(arr[comb[start][0]:comb[start][1]+1])
        print(arr[comb[start][0]:comb[start][1]+1])
        temp=comb.pop(start)
        for i in range(len(comb)):
            if temp[0]!=comb[i][0] and temp[1]!=comb[i][1] and temp[0]!=comb[i][1] and temp[1]!=comb[i][0]:
                start=i
                break
        time+=1
    print(p)
    res[0]=max(res[0],p)

while(len(comb)!=0):
    fun()
print(res[0])
    



