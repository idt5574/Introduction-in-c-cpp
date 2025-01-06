#include <iostream>
#include <memory>

struct object
{

private:

    short data;
    object* next;

public:

    object(short d)
    {
        data = d;
        next = nullptr;
    }

    object* get_next() 
    { 
        return next; 
    }

    short get_data()
    {
        return data;
    }

    void set_next(object* ptr)
    {
        if(next)
            free(next);
        
        next = ptr;
    }

    void set_data(short d)
    {
        data = d;
    }

};

using st_unique_ptr = std::unique_ptr<object>;

void push(st_unique_ptr& top, short data)
{
    if(!top)
    {
        top = std::make_unique<object>(data);
        return;
    }
    
    st_unique_ptr new_ptr = std::make_unique<object>(data);
    new_ptr.get()->set_next(top.get());
    top.release();
    top.reset(new_ptr.release());
}

int main()
{
    st_unique_ptr top;

    for(int i = 1; i <= 7; ++i)
        push(top, i);

    object* temp_ptr = top.get();

    while (temp_ptr != nullptr)
    {
        std::cout << temp_ptr->get_data() << ' ';
        temp_ptr = temp_ptr->get_next();
    }

    // __ASSERT_TESTS__
    return 0;
}