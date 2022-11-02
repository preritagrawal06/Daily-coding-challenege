#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    # Write your code here
    A=arr.copy()
    mini=0
    for i in range(4):
        mini+=min(A)
        A.remove(min(A))
    A=arr.copy()
    maxi=0
    for i in range(4):
        maxi+=max(A)
        A.remove(max(A))
    
    print(mini,maxi)

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
