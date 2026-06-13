class Solution {
public:
bool plaindrome(string s){
    string t=s;
    int i=0,j=s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return t==s;
}
    bool isPalindrome(string s) {
        for(char &c:s){
            c=tolower(c);
        }
        string ans="";
        for(auto c:s){
            if(isalnum(c)) ans+=c;
        }
        if(plaindrome(ans)) return true;
        else return false;
    }
};
