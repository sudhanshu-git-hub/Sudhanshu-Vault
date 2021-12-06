#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool check4Vowel(string subword){
        string vowel="aeiou";
        set<int> vowelInsub;
        for(char ch:subword){
            if(vowel.find(ch)==string::npos){
                return false;
            }
            vowelInsub.insert(ch);
        }
        return vowelInsub.size()==5;
    }
    int countVowelSubstrings(string word) {
        int n= word.size();
        int count =0;
        for(int start=0;start<n;start++){
            for(int len =5;len<=n-start;len++){
                string sub = word.substr(start,len);
                if(check4Vowel(sub))
                count++;
            }
        }
       return count;
    }

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt

    freopen("output.txt", "w", stdout);
  #endif

   //Code
   string str;
   cin>>str;
   cout<<countVowelSubstrings(str);
   
}

