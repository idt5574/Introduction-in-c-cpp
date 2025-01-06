#include <iostream>
#include <memory>

struct object {
    int data;
    std::shared_ptr<object> next;

    object(int d)
    {
        data = d;
    }
};

using shared_obj_ptr = std::shared_ptr<object>;

void push_back(shared_obj_ptr& head, shared_obj_ptr& tail, int data)
{
    shared_obj_ptr node {std::make_shared<object>(data)};

    if(head == nullptr) head = node;
    if(tail != nullptr) tail.get()->next = node;
    tail = node;
}

void pop_front(shared_obj_ptr& head, shared_obj_ptr& tail) {
    if(head == nullptr) return;
    if(head == tail) {
        tail.reset();
        head = tail = nullptr;
        return;
    }

    shared_obj_ptr node = head;
    head = node.get()->next;
    node.reset();
}

void show(const shared_obj_ptr& head)
{
    shared_obj_ptr temp_obj {head};

    while (temp_obj != nullptr)
    {
        std::cout << temp_obj->data << ' ';
        temp_obj = temp_obj->next;
    }
    
}

int main(void)
{
    shared_obj_ptr head, tail;

    push_back(head, tail, 1);
    push_back(head, tail, 2);
    push_back(head, tail, 3);
    push_back(head, tail, 4);

    show(head);

    // __ASSERT_TESTS__
    return 0;
}