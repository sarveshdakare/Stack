
#include <bits/stdc++.h>

using namespace std;

class TwoStack{
    
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    
    TwoStack(int size){
        this->size=size;
        top1=-1;
        arr=new int[size];
        top2=size;
    }
   void push1(int n){
       if(top2-top1>1){
           top1++;
           arr[top1]=n;
       }else{
           cout<<"Overflow"<<endl;
       }
   } 
   void push2(int n){
       if(top2-top1>1){
           top2--;
           arr[top2]=n;
       }else{
           cout<<"Overflow"<<endl;
       }
   }
  int pop1(){
       if(top1>=0){
           int ans=arr[top1];
           top1--;
           return ans;
       }else{
           cout<<"underflow"<<endl;
           return -1;
       }
   }
   int pop2(){
       if(top2<size){
           int ans=arr[top2];
           top2++;
           return ans;
       }else{
           cout<<"underflow"<<endl;
           return -1;
       }
   }
};

 
    

int main()
{
  

TwoStack st(5);
st.push1(1);
st.push1(2);
st.push2(3);
st.push2(4);

cout<<"top element: "<<st.pop2()<<endl;
// st.pop();
cout<<"top element: "<<st.pop1()<<endl;

    return 0;
}
