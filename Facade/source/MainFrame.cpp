#include "MainFrame.h"
#include <string>
#include <iostream>

using namespace std;

MainFrame::MainFrame()
{
    this->m_os = new OS();
    this->m_cpu = new CPU();
    this->m_memory = new MMemory();
    this->m_hardDisk = new HardDisk();
}

MainFrame::~MainFrame()
{
    delete this->m_os;
    delete this->m_cpu;
    delete this->m_memory;
    delete this->m_hardDisk;
}

void MainFrame::Start()
{
    this->m_cpu->Run();
    this->m_hardDisk->Read();
    this->m_memory->Check();
    this->m_os->Load();
}