/**********************************
 * 外观类
 *********************************/

#ifndef _MAINFRAME_H_
#define _MAINFRAME_H_

#include "OS.h"
#include "CPU.h"
#include "MMemory.h"
#include "HardDisk.h"

class MainFrame
{
public:
    MainFrame();
    ~MainFrame();
    void Start();

private:
    OS *m_os;
    CPU *m_cpu;
    MMemory *m_memory;
    HardDisk *m_hardDisk;
};

#endif