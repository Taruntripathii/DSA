class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string wword1="";
        string wword2="";
        for(int i=0;i<word1.size();i++){
        wword1 +=word1[i];
        }
        for(int i=0;i<word2.size();i++){
        wword2 +=word2[i];
        }

        if(wword1==wword2){
            return true;
        }
        else{
            return false;
        }
    }
};
