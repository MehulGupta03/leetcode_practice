class Solution {
    public int reverse(int x) {
        long n = x;
        if(x<0)
        x=(-x);
        long rev=0;
          while(x>0){
            long d = x%10;
            rev = rev*10 + d;
            x=x/10;
          }
          if(rev>Integer.MAX_VALUE)
          return 0;
          if(n<0)
          return (int)-rev;
          else
          return (int)rev; 
    }
}