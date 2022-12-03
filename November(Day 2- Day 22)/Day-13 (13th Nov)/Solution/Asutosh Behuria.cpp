#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */
int fac(int x,int arr[],int arr_size){
    int carry=0;
    for(int i=0;i<arr_size;i++){
        int prod =arr[i]*x+carry;
        arr[i]=prod%10;
        carry=prod/10;
    }
    while(carry){
        arr[arr_size]=carry%10;
        carry=carry/10;
        arr_size++;
    }
    return arr_size;
    
    
}
void extraLongFactorials(int n) {
    int arr[500];
    arr[0]=1;
    int arr_size=1;
    for(int i=2;i<=n;i++){
        arr_size=fac(i,arr,arr_size);
    }
    for(int i=arr_size-1;i>=0;i--){
        cout<<arr[i];
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
