/*
  Problem statement

You are given a string ‘STR’ containing space-separated words. A word is a sequence of non-space characters. Your task is to reverse the order of words in ‘STR’.

Note: Try to do it in-place without allocating extra space.
Example:

‘STR’ = “when in doubt use brute force”
The reverse order of words in ‘STR’ is: “force brute use doubt in when”.

Note:

1. ‘STR’ does not contain any leading or trailing spaces.
2. The words are always separated by a single whitespace character.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:

1 <= T <= 100
1 <= Length of ‘STR’ <= 10^3
The string ‘STR’ contains only ‘a-z’ and whitespace characters.

Time limit: 1 second

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

Test Case 2:
‘STR’ = “java is to javascript what a car is to carpet”
The reverse order of words in ‘STR’ is: “carpet to is car a what javascript to is java”.

Sample input 2:

2
no code has zero defects
whitespace is never white

Sample output 2:

defects zero has code no
white never is whitespace

*/


string reverseOrderWords(string s) {
    // Write your code here
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
