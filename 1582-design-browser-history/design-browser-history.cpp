class Node {
public:
    string data;   // form a doubly linkedlist.
    Node* next;
    Node* back;

    Node(string url) {
        data = url;
        next = nullptr;
        back = nullptr;
    }
};

class BrowserHistory {
    Node* currentPage;  // form a node named as cuurentPage
public:
    BrowserHistory(string homepage) {
     currentPage= new Node(homepage);    // then currentPage node ko homepage se point krva do
        
    }
    
    void visit(string url) {
    Node* newNode= new Node(url);  // form a newnode 
    currentPage->next = newNode;    // currentPage ke next me newnode ka adress daal do
    newNode->back= currentPage;     // newnode ke back me currentPage ka address daal ke link krdo
    currentPage= newNode;           // now currentPage is pointing to newmode
    }
    
    string back(int steps) {
        while(steps){
            if(currentPage->back){
                currentPage = currentPage->back;
            }
            else
              break;
            steps--;   
        }
        return currentPage->data;
        
    }
    
    string forward(int steps) {
     while(steps){
        if(currentPage->next)
            currentPage= currentPage->next;
        else
            break;
        steps--;
     }   
     return currentPage->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */