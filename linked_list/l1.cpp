class Node{
    
    public:
        int data;
        Node* next;
        

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }

};


class LinkedList{
    Node* head;
    

public:
    LinkedList() {
        head = nullptr;
    }

    void append(int data){
        
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void pop(){
        if(head == nullptr){
            return;
        }
        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

};