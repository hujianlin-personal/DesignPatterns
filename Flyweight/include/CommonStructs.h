/*
 * @Descripttion:享元状态定义
 * @Version: 1.0
 * @Author: hujianlin
 * @Date: 2024-02-15 16:14:21
 * @LastEditors: hujianlin
 * @LastEditTime: 2024-02-15 19:14:17
 */

#ifndef _COMMOM_STRUCT_H_
#define _COMMOM_STRUCT_H_

#include <string>
#include <iostream>

using namespace std;

struct SharedState
{
    string brand;
    string model;
    string color;

    SharedState(const string &brand, const string &model, const string &color) : brand(brand), model(model), color(color)
    {
    }

    SharedState(const SharedState &other)
    {
        brand = other.brand;
        model = other.model;
        color = other.color;
    }

    friend std::ostream &operator<<(std::ostream &os, const SharedState &ss)
    {
        return os << "[" << ss.brand << "," << ss.model << "," << ss.color << "]";
    }
};

struct UniqueState
{
    string owner;
    string plates;

    UniqueState(const string &owner, const string &plates) : owner(owner), plates(plates)
    {
    }

    UniqueState(const UniqueState &other)
    {
        owner = other.owner;
        plates = other.plates;
    }

    friend std::ostream &operator<<(std::ostream &os, const UniqueState &ss)
    {
        return os << "[" << ss.owner << "," << ss.plates << "]";
    }
};

#endif