#include <MsgDecoratorManager.h>
#include <MessageDecorator.h>
#include <UnderLinePen.h>
#include <MessageBox.h>
#include <iostream>

using namespace std;

int main()
{
    UnderLinePen *uPen = new UnderLinePen('~');
    MessageBox *sBox = new MessageBox('-');
    MsgDecoratorManager::GetInstance()->RegisterDecorator(Underline, uPen);
    MsgDecoratorManager::GetInstance()->RegisterDecorator(SlashBox, sBox);

    string msg = "Hello World";
    MessageDecorator *d1 = MsgDecoratorManager::GetInstance()->CreateDecorator(Underline);
    d1->Use(msg);

    MessageDecorator *d2 = MsgDecoratorManager::GetInstance()->CreateDecorator(SlashBox);
    d2->Use(msg);

    if (NULL != d1)
    {
        delete d1;
        d1 = NULL;
    }

    if (NULL != d2)
    {
        delete d2;
        d2 = NULL;
    }

    MsgDecoratorManager::GetInstance()->ReleaseInstance();

    return 0;
}