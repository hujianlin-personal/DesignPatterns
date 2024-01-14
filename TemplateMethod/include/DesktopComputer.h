/**************************************
 * 台式机
 *************************************/

#ifndef _DESKTOP_COMPUTER_H_
#define _DESKTOP_COMPUTER_H_

#include "CComputer.h"

class DesktopComputer : public Computer
{
public:
    DesktopComputer();
    ~DesktopComputer();
    void Boot();
    void LoadOS();
    void DisplayLandingPage();
};

#endif