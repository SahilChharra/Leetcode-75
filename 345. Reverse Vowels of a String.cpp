#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int i=-1; int a=s.length();bool flag=false;bool flag1=false;
        while(i<a){
            if(flag && flag1){
                swap(s[i],s[a]);
                flag=false;
                flag1=false;
            }
            if(!flag1){
                a--;
                if(s[a]=='a' ||s[a]=='e' ||s[a]=='i' ||s[a]=='o' ||s[a]=='u' ||s[a]=='A' ||s[a]=='E'
                 ||s[a]=='I' ||s[a]=='O' ||s[a]=='U' )      
                flag1=true;
            }
            if(!flag){
                i++;
                if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' ||s[i]=='E'
                 ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ) 
                flag=true;
            }
        }
        return s;
    }
};