#include<iostream>
using namespace std;
int main(){
	int n,grade;
    cout<<"Enter the number"<<endl;
    cin >> n;
    for(int a = 0; a < n; a++){
        cin >> grade;
        if (grade >= 38) {
            int rem = grade % 5;
            if (rem >= 3)
            {
            	 grade += 5 - rem;
			}
        }
        cout<< "grade is "<< grade << endl;
    }
    return 0;
}
