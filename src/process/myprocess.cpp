#include <iostream>
#include "myprocess.h"

using std::cout,std::endl;

void Process::planProcess()
{
    cout<<"Process::planProcess()"<<endl;
    m_pncmap.map_info();
}
