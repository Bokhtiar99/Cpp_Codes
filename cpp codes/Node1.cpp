   void insertNode(Node* &head,int value){
    Node* newNode=new Node();
    newNode->data = value;
    newNode->next = nullptr;
    if(head==nullptr){
       head=newNode;
    }
        else{
            Node* temp = head;
            while(temp->next !=nullptr){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }

