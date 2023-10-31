#include<iostream>
#define n 8
using namespace std;
 class Stack{
    int *arr;
    int top;
    Stack(){
        arr= new int[n];
        top=-1;
    }
 void push(int x){
    if(top==n-1){
        cout<<"Stach got overflow"<<endl;
    }
    else{
        top++;
        arr[top]=x;
    }
 }
 void pop(){
    if(top==-1){
        cout<<"Top got underflow"<<endl;
    }
    else{
        top--;
    }
 }
 void Top(){
    if(top!=-1){
        cout<<arr[top];
    }
 }
 };
int main(){
    Stack st;
    st.push(2);
    st.push(1);
    st.Top();
}