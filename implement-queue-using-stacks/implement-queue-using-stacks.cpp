class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> st;
    int front;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(st.empty())
            front = x;
        st.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        vector<int> st_elem;
        int top_item;
        while(!st.empty()){
            top_item = st.top();
            st.pop();
            if(!st.empty())
                st_elem.push_back(top_item);
        }
        for(int i=st_elem.size()-1;i>=0;i--){
            push(st_elem[i]);
        }
        return top_item;
    }
    
    /** Get the front element. */
    int peek() {
        return front;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */