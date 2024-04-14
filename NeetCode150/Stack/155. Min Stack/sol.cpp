class MinStack {
private:
    stack<int> regularStack;
    stack<int> minStack;
public:
    void push(int x) {
	    regularStack.push(x);
	    if (minStack.empty() || x <= getMin())  
            minStack.push(x);	    
    }
    void pop() {
	    if (regularStack.top() == getMin())  
            minStack.pop();
	    regularStack.pop();
    }
    int top() {
	    return regularStack.top();
    }
    int getMin() {
	    return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */