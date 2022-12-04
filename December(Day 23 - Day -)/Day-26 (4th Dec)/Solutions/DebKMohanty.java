class Solution {
    public String intToRoman(int num) {
       int [] arr = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
       String [] rl = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
       StringBuilder r = new StringBuilder() ;
        for(int i =0;i<arr.length;i++){
while(num>=arr[i]){
    num = num - arr[i];
    r.append(rl[i]);
}}
        return r.toString();   
    }
}