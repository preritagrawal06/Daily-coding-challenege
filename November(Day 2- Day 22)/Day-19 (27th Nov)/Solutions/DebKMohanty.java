class Solution {
    public int romanToInt(String s) {
        HashMap<Character , Integer> mp = new HashMap<>();
        mp.put('I',1);
        mp.put('V',5);
        mp.put('X',10);
        mp.put('L',50);
        mp.put('C',100);
        mp.put('D',500);
        mp.put('M',1000);
        int res = 0;
        for(int i = 0;i<s.length();i++){
            if(i>0 && mp.get(s.charAt(i))>mp.get(s.charAt(i-1))){
                res += mp.get(s.charAt(i)) - 2*mp.get(s.charAt(i-1));
            }
            else{
                res+=mp.get(s.charAt(i));
            }
        }
        return res;

        
    }
}