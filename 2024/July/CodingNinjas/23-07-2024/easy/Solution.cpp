/*
  Problem statement
You are given a string ‘STR’ containing space-separated words. A word is a sequence of non-space characters. Your task is to reverse the order of words in ‘STR’.
Note: Try to do it in-place without allocating extra space.
Example:
‘STR’ = “when in doubt use brute force”
The reverse order of words in ‘STR’ is: “force brute use doubt in when”.
Sample input 1:
2
when all else fails reboot
java is to javascript what a car is to carpet
Sample output 1:
reboot fails else all when
carpet to is car a what javascript to is java
Explanation of sample input 1:
Test Case 1:
‘STR’ = “when all else fails reboot”
The reverse order of words in ‘STR’ is: “reboot fails else all when”.
*/
string reverseOrderWords(string s) {
    int i=s.size()-1,st=0;
    string t="",r="";
    while(i>=0){
        t="";
        while(s[i]!=' '&&i>=0){
            t=s[i]+t;
            i--;
        }
        i--;
        if(r==""){
            r=t;
        }
        else r=r+" "+t;
    }
    return r;
}
