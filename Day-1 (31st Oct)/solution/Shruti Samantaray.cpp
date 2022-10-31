#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        int M , m , next;
        cin>>M;
        if(M<40){
            cout<<M<<endl;
        }
        else{
            m = M/5;
            next = (m+1)*5;
                if((next - M)<3){
                    cout<<next<<endl;
                }
                else{
                    cout<<M<<endl;
                }
        }        
    }
    return 0;
}