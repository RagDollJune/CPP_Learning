#include <memory>
#include "classA.h"
#include "classB.h"

int main()
{
    auto ptr1 = std::make_unique<classB<float>>();
    ptr1->configure(1,2);
    std::unique_ptr<classA> ptr2 = std::move(ptr1);
    ptr2->run();
    return 0;
}

//https://www.cnblogs.com/weiym/archive/2013/02/14/2912563.html