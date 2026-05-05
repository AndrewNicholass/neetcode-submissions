class MinStack {
public:
    MinStack() {
        
    }

    stack<int> st;
    stack<int> minSt;
    
    void push(int val) {
        st.push(val);
        if(minSt.empty() || minSt.top() >= val){
            minSt.push(val);
        }
    }
    
    void pop() {
        if(minSt.top() == st.top()){
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        int top = st.top();
        return top;
    }
    
    int getMin() {
        return minSt.top();
    }
};
