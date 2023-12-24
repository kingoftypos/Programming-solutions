class Node {
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        next=NULL;
    }

};
class MyLinkedList {
public:
int size=0;
Node* head=nullptr;
    MyLinkedList() {
    }
    int get(int index) {
             if(index>=size)
             return -1;
             Node* temp=head;
             while(index--)
             {
                 temp=temp->next;
             }
             return temp->val;
        
    }
         
        
    
    
   
    
    void addAtHead(int val) {
        Node* nn=new Node(val);
        nn->next=head;
        head=nn;
        size++;

        
    }
    
    void addAtTail(int val) {
        Node* temp=head;
        if(!temp)
        {
            Node* nn=new Node(val);
             head=nn;
        }
        else{
        while(temp->next)
        temp=temp->next;
        Node* nn=new Node(val);
        temp->next=nn;
        }
        size++;
        
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)return;
        Node* temp=head;
        Node* nn=new Node(val);
        if(index==0)
        {
           nn->next = head;
        head = nn;
        size++;
        return;
        }
       
        for(int i=0;i<index-1;i++)
        {
            
        temp=temp->next;
        }
        
        nn->next=temp->next;
        temp->next=nn;
        size++;


        
    }
    
    void deleteAtIndex(int index) {
        if(index>=size)return;
        Node* temp=head;
        Node* prev=nullptr;
        if (index == 0) {
        head = head->next;
        delete temp;
        size--;
        return;
    }
        for(int i=0;i<index;i++)
        {
             
            prev=temp;
         temp=temp->next;
        }
        if(prev)
        prev->next=temp->next;
        if (temp == head)
        head = temp->next; 
        delete temp;
        size--;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */