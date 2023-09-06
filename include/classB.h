#ifndef CLASSB_H
#define CLASSB_H
#include "classA.h"
#include <iostream>
template <typename DataType>
class classB : public classA {

public:
    
    void configure(DataType id, DataType price);
    void run();

private:
    DataType m_id;
    DataType m_price;
};

template <>
void classB<float>::configure(float id, float price) {
    m_id = id;
    m_price = price;
    std::cout<<"use float type"<<std::endl;
}

template <>
void classB<double>::configure(double id, double price) {
    m_id = id;
    m_price = price;
    std::cout<<"use double type"<<std::endl;
}

template <typename DataType>
void classB<DataType>::run() {
    std::cout<<"id: "<<m_id<<", price: "<<m_price<<std::endl;
}
#endif