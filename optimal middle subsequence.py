def getMinimumSum(arr):
    # Write your code here
    if len(arr)<3:
        return -1
    n = len(arr)
    min_sum = float('inf')
    min1 = float('inf')
    max1 = float('inf')
    pre = [0]*n
    post = [0]*n
    for i in range(n):
        if arr[i]<min1:
            min1 = arr[i]
        pre[i] = min1
    for i in range(n-1,-1,-1):
        if arr[i]>max1:
            max1 = arr[i]
        post[i] = max1
    for i in range(1,n-1):
        if pre[i-1]<arr[i]<post[i+1]:
            min_sum = min(min_sum,pre[i-1]+arr[i]+post[i+1])
    if min_sum == float('inf'):
        return -1
    return min_sum
arr = [1,2,3,4,5]