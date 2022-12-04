class Solution {
    public boolean halvesAreAlike(String s) {
        String s1 = s.substring(0,s.length()/2);
        String s2 = s.substring(s.length()/2,s.length());
        int c1 =0,c2=0;
        char [] a1 = s1.toCharArray();
        char [] a2 = s2.toCharArray();

        for(int i = 0;i<s.length()/2;i++){
            
            if(a1[i]=='a' || a1[i]=='e' || a1[i]=='i' ||a1[i]=='o' || a1[i]=='u' || a1[i]=='A' || a1[i]=='I' || a1[i]=='O' || a1[i]=='E' || a1[i]=='U')
                c1++;
            if(a2[i]=='a' || a2[i]=='e' || a2[i]=='i' ||a2[i]=='o' || a2[i]=='u' || a2[i]=='A' || a2[i]=='I' || a2[i]=='O' || a2[i]=='E' || a2[i]=='U')
                c2++;
        }
        if(c1==c2) return true;
        else return false;
    }
}