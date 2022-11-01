int main(){
    int i,t,n ;
    cin>>t;
    while(t--){
      cin>>i;
      if(i>=38){
         int a=i%5;
         if(a==3){
            i=i+2;}
        if(a==4){
            i=i+1;}
     }
     cout<<i<<endl;
   }
   return 0;
} 
