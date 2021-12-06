#include <iostream>
#include<bits/stdc++.h>
using namespace std;

    bool isVowel(char c){
        return (c=='a') ||(c=='e') ||(c=='i') ||(c=='o') ||(c=='u') ;
    }
    int countVowelSubstrings(string word) {
        int n= word.size();
        int count =0;
        if(word.size()<5){
            break;
        }
       for(int f=0;f<(word.size()-4);f++){
            set<char> set;
            for(int s=f;s<word.size();s++){
                if(isVowel(word[s])){
                    set.insert(word[s]);
                    if(set.size()==5)
                count++;
                }
                else{
                    break;
                }
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

