#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#

def sockMerchant(n, ar):
    # Write your code here
    d={}
    for i in ar:
        if i in d.keys():
            d[i]+=1
        else:
            d[i]=1
    count=0
    print(d)
    for i in d.keys():
        if d[i]%2==0:
            count+=d[i]//2
        elif d[i]>2:
            count+= (d[i]-1)//2
            
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()