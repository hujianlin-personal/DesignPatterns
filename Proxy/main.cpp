
#include "include/Proxy.h"
int main()
{
    Proxy proxy;
    proxy.Request(); // Calls the Request method of Proxy, which in turn calls RealSubject's Request
    return 0;
}