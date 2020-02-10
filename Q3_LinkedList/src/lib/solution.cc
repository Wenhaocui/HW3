#include "solution.h"
#include <iostream>
#include <vector>


SinglyLinkedList::SinglyLinkedList(){
    this->head = nullptr;
}

SinglyLinkedList::SinglyLinkedList(const std::vector<int> &inputs, int i){
    this->head = nullptr;
    if(i == -1 || i >inputs.size()){
        for(auto x : inputs){
            push_back(x);
        }
    }else{
        for(auto x : inputs){
            push_back(x);
        }
        GetBackPointer()->next = GetIthPointer(i);
    }
    this->count++;
}

SinglyLinkedList::~SinglyLinkedList() {
    delete head;
    std::cout <<"destructor"<<std::endl;
} 

bool SinglyLinkedList::empty(){
  return (this->head == nullptr);
}

int SinglyLinkedList::size() {
    return this->count;
}

void SinglyLinkedList::push_back(int i){
    ListNode *temp = new ListNode(i);
    if (head == 0) {
        head = temp;
        return;
    }

    ListNode *current = head;
    while (current->next != 0) {
        current = current->next;
    }
    current->next = temp;
    this->count++;
}

void SinglyLinkedList::push_front(int i){
    ListNode *temp = new ListNode(1);
    temp->val = i; 
    temp->next = head;
    this->head = temp;
    this->count++;
}

void SinglyLinkedList::insert_after(ListNode* p, int i){
    ListNode *temp = new ListNode(1);
    temp->val = i;
    temp->next = p->next;
    p->next = temp;
    this->count++;
}

void SinglyLinkedList::erase(ListNode* p){
    ListNode *temp = this->head;
    if(temp == p){
        ListNode *temp1=new ListNode(1);
        temp1=head;
        head=head->next;
        delete temp1;
        return;
    }
    while(temp->next != p){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    this->count--;
}

void SinglyLinkedList::pop_front(){
    ListNode *temp=new ListNode(1);
    temp=head;
    head=head->next;
    delete temp;
    this->count--;
}

void SinglyLinkedList::pop_back(){
    ListNode *p;
    p = this->head;
    while(p->next->next != nullptr){
        p=p->next;
    }
    p->next = nullptr;
    this->count--;
}

int SinglyLinkedList::front() {
    return head->val;
}

int SinglyLinkedList::back() {
    ListNode *p;
    p = this->head;
    while(p->next!=nullptr){
        p=p->next;
    }
    return p->val;
}


void SinglyLinkedList::print(){
    if(!empty()){
        ListNode *temp=new ListNode(1);
        for(temp = head; temp != nullptr; temp=temp->next)
            std::cout << temp->val << " ";
        std::cout << std::endl;
    }
    else
    {
        std::cout << "List is Empty!" << std::endl;
    }
}

ListNode* SinglyLinkedList::GetBackPointer(){
    ListNode *p;
    p = this->head;
    while(p->next!=nullptr){
        p=p->next;
    }
    return p;
}

ListNode* SinglyLinkedList::GetIthPointer(int i){
    int j=1;
    ListNode *p = this->head->next;
    if(i==0){
        return this->head;
    }else if(i<1){
        return nullptr;
    }
    while(j<i) {
        p=p->next;
        j++;
    }
    return p;
}

ListNode* SinglyLinkedList::head_(){
    ListNode *p;
    p = this->head;
    return p;
}
