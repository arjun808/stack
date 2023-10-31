void insertAtBottom(stack<int>&st,int ele){
    if(st.empty()){
        st.push(ele);
       return;
    }
    int topelement=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topelement);
}
    void Reverse(stack<int> &St){
         if(St.empty()){
             return;
         }
         int ele=St.top();
         St.pop();
         Reverse(St);
         insertAtBottom(St,ele);
    }