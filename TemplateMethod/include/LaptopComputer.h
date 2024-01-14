/**************************************
 * 笔记本
 *************************************/

#ifndef _LAPTOP_COMPUTER_H_
#define _LAPTOP_COMPUTER_H_

#include "CComputer.h"

class LaptopComputer : public Computer
{
public:
    LaptopComputer();
    ~LaptopComputer();
    void Boot();
    void LoadOS();
    void DisplayLandingPage();
};

#endif