#include "./include/Blogger.h"
#include "./include/FollowerObserver.h"
#include "./include/AbstractObserver.h"

#include <iostream>
#include <string>

int main()
{
    Blogger blogger;

    std::string name1 = "Alice";
    AbstractObserver *alice = new FollowerObserver(name1);
    blogger.Attach(alice);

    std::string name2 = "Bob";
    AbstractObserver *bob = new FollowerObserver(name2);
    blogger.Attach(bob);

    // 博主发布新帖子
    blogger.Post();

    // 移除一个观察者
    blogger.Detach(alice);

    // 再次发布新帖子
    blogger.Post();

    delete alice; // 清理内存
    delete bob;   // 清理内存

    return 0;
}