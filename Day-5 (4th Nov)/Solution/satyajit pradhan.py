#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pageCount' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER p
#

def pageCount(n, p):
    # Write your code here
    l=[i for i in range(n+1)]
    x=n
    if(n%2==0):
        l.append(0)
        x=n+1
    c1,c2=0,0
    for i in range(0,x+1,2):
        if l[i]==p or l[i+1]==p:
            break
        c1=c1+1
        
    for i in range(x,-1,-2):
        if l[i]==p or l[i-1]==p:
            break
        c2=c2+1
    print(c1,c2)    
    return min(c1,c2)
        
            
        
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    p = int(input().strip())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
