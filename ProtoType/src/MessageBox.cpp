#include "MessageBox.h"
#include <iostream>

using namespace std;

MessageBox::MessageBox(char dcrChar)
{
    this->m_dcrChar = dcrChar;
}

MessageBox::MessageBox(const MessageBox &src)
{
    this->m_dcrChar = src.m_dcrChar;
}

MessageBox::~MessageBox()
{
}

void MessageBox::Use(string msg)
{
    int len = msg.length();
    for (int i = 0; i < len + 4; i++)
    {
        cout << this->m_dcrChar;
    }

    cout << endl;
    cout << this->m_dcrChar << " " << msg << " " << m_dcrChar << endl;
    for (int i = 0; i < len + 4; i++)
    {
        cout << this->m_dcrChar;
    }

    cout << endl;
}

MessageDecorator *MessageBox::Clone()
{
    return new MessageBox(*this);
}