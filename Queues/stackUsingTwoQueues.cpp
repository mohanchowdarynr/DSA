class myStack(){
    Queue q1;
    Queue q2;

    void push(int data){
        while(!q1.isEmpty()){
            q2.push(q1.pop());
        }
        q1.push(data);
        while(!q2.isEmpty()){
            q1.push(q2.pop());
        }
    }

    int pop(){
        return q1.pop();
    }
}
