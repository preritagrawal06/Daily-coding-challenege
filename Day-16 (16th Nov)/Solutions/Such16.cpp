#include <bits/stdc++.h>

using namespace std;
int cost=0;
int temp[3][3];
intarr[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
};

void display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool ismagic()
{
    if((temp[0][0]+temp[0][1]+temp[0][2] == temp[1][0]+temp[1][1]+temp[1][2]) && (temp[0][0]+temp[0][1]+temp[0][2] == temp[2][0]+temp[2][1]+temp[2][2]))
    {
        if((temp[0][0]+temp[1][0]+temp[2][0] == temp[0][1]+temp[1][1]+temp[2][1]) && (temp[0][0]+temp[1][0]+temp[2][0] == temp[0][2]+temp[1][2]+temp[2][2]))
        {
            if((temp[0][0]+temp[1][1]+temp[2][2] == temp[0][1]+temp[1][2]+temp[2][0]) && (temp[0][0]+temp[1][1]+temp[2][2] == temp[0][2]+temp[1][1]+temp[2][0]))
            {
                if((temp[0][0]+temp[1][1]+temp[2][2] == temp[0][0]+temp[1][0]+temp[2][0]) && (temp[0][0]+temp[1][1]+temp[2][2] == temp[0][0]+temp[0][1]+temp[0][2]))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int calculate()
{
    int csum =0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            csum += abs(temp[i][j]-arr[i][j]);
        }
    }
    return csum;
}

int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                temp[j][k] = arr[i][j][k];
            }
        }
        if(ismagic())
        {
            cost = calculate();
            if(cost<mincost)
            {
                mincost = cost;
            }
        }
    }
    cout<<mincost;
    return 0;
}
