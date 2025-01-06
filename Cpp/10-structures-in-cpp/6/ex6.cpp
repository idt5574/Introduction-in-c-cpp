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


int main()
{
    std::unique_ptr<object> top, ptr;

    top = std::make_unique<object>(2);
    ptr = std::make_unique<object>(1);

    top.get()->set_next(ptr.get());

    // __ASSERT_TESTS__
    return 0;
}