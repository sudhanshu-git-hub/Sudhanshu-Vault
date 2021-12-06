#include <iostream>
#include<queue>
using namespace std;
template<typename T>
class stack{
    queue<T> q1;
    queue<T> q2;
    public:
      void push(T i){
          if(!q1.empty()){
              q1.push(i);
          }
          else{
            q2.push(i);
          }
      }

      void pop(){
        if(!q1.empty()){
            int size = q1.size();
              while(q2.size()!=size-1){
                  q2.push(q1.front());
                  q1.pop();
              }
              q1.pop();
        }
        else{
            int size = q2.size();
              while(q1.size()!=size-1){
                  q1.push(q2.front());
                  q2.pop();
              }
              q2.pop();
        }
      }
      T top(){
        if(!q1.empty()){
          return q1.back();
        }
        else{
          return q2.back();
        }
      }
    bool empty(){
      if(q1.empty()&&q2.empty()){
        return true;
      }
      return false;
    }


};
template<typename T>
class stack2{
  queue<T> q1;
  queue<T> q2;
      public:
        void push(T t){
          if(q2.empty()){
            q2.push(t);
            while(!q1.empty()){
              q2.push(q1.front());
              q1.pop();
            }
          }
          else{
            q1.push(t);
            while(!q2.empty()){
              q1.push(q2.front());
              q2.pop();
            }
          }
        }
        void pop(){
              if(q1.empty()){
                q2.pop();
              }
              else{
                q1.pop();
              }
        }
        T top(){
            if(q1.empty()){
              return q2.front();
            }
            return q1.front();
        }
        bool empty(){
          if(q1.empty()&&q2.empty()){
            return true;
          }
          return false;
        }
};
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    stack<int> s;
    for(int i=1;i<=5;i++){
      s.push(i);
    }

    //cout<<s.top();
    while(!s.empty()){
      cout<<s.top()<<",";
      s.pop();
    }
    cout<<endl;
    stack2<int> s2;
    for(int i=1;i<=5;i++){
        s2.push(i);
    }
    while(!s2.empty()){
        cout<<s2.top()<<",";
        s2.pop();
    }
   
}

