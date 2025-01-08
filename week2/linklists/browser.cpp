//dll
class BrowserHistory {
public:
    class Node{
        public:
        string url;
        Node* next;
        Node* prev;
        
        Node(string url){
            this->url =url;
            next = NULL;
            prev = NULL;
        }
    };
    Node* curr;
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }
    
    void visit(string url) {
        Node* t = new Node(url);
        curr->next = t;
        t->prev = curr;
        curr = t;
    }
    
    string back(int steps) {
        while(curr->prev && steps>0){
            curr=curr->prev;
            steps--;
        }
        return curr->url;
    }
    
    string forward(int steps) {
        while(curr->next && steps>0){
            curr=curr->next;
            steps--;
        }
        return curr->url;
    }
};

//stack
class BrowserHistory {
public:
    stack<string> history;
    stack<string> future;
    
    BrowserHistory(string homepage) {
        history.push(homepage);
        future = stack<string>(); //resets stack
    }
    
    void visit(string url) {
        history.push(url);
        future = stack<string>();
    }
    
    string back(int steps) {
        while(steps>0 && history.size() > 1){
            future.push(history.top());
            history.pop();
            steps--;
        }
        return history.top();
    }
    
    string forward(int steps) {
        while(steps>0 && future.size()>0){
            history.push(future.top());
            future.pop();
            steps--;
        }
        return history.top();
    }
};