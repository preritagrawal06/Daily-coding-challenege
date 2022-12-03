def rotate(arr):
    x=arr[len(arr)-1]
    arr.pop(len(arr)-1)
    arr.insert(0,x)
    return arr

def circularArrayRotation(a, k, queries):
    for i in range(k):
        a=rotate(a)
    
    for i in range(len(queries)):
        print(a[queries[i]])



first_multiple_input = input().rstrip().split()

n = int(first_multiple_input[0])

k = int(first_multiple_input[1])

q = int(first_multiple_input[2])

a = list(map(int, input().rstrip().split()))

queries = []

for _ in range(q):
    queries_item = int(input().strip())
    queries.append(queries_item)

circularArrayRotation(a, k, queries)