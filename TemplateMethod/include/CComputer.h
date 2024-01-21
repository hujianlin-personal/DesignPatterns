/*************************
 * 计算机类
 ************************/

#ifndef _COMPUTER_H_
#define _COMPUTER_H_

class Computer
{
public:
    Computer();
    ~Computer();
    void Startup();

protected:
    virtual void Boot() = 0;
    virtual void LoadOS() = 0;
    virtual void DisplayLandingPage() = 0;
};

#endif