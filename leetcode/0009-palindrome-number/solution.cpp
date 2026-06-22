class Solution {
public:
    bool isPalindrome(int x) {
        int og = x;
        long long saved=0;
        while(x>0){
            int num=x%10;
            saved=saved*10+num;
            x=x/10;
        }
        if(og==saved){
            return true;
        }
        else{
            return false;
        }
    }
};
