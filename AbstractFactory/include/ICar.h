/************************************
 * 汽车接口类
 ***********************************/

#include <string>

#ifndef _ICAR_H_
#define _ICAR_H_

class ICar
{
public:
    //构造函数
    ICar(std::string brand);
    //析构函数
    virtual ~ICar();
    //读取品牌
    std::string Brand();
    //运行（纯虚函数）
    virtual void Run() = 0;
    //停止（纯虚函数）
    virtual void Stop() = 0;

private:
    std::string m_brand; //品牌or产商
};

#endif
