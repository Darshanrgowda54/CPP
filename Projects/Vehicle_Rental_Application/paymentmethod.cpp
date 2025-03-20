#include "paymentmethod.h"
#include <iostream>

PaymentMethod::PaymentMethod()
{
    std::cout<<"PaymentMethod Constructor Called"<<std::endl;
}

PaymentMethod::~PaymentMethod()
{
    std::cout<<"PaymentMethod Destructor Called"<<std::endl;
}

PaymentMethod::PaymentMethod(float amount, std::string paymentType, std::string paymentStatus)
{
    this->m_amount = amount;
    this->m_paymentType = paymentType;
    this->m_paymentStatus = paymentStatus;
}

float PaymentMethod::getAmount()
{
    return m_amount;
}

std::string PaymentMethod::getPaymentType()
{
    return m_paymentType;
}

std::string PaymentMethod::getPaymentStatus()
{
    return m_paymentStatus;
}

void PaymentMethod::setAmount(float amount)
{
    this->m_amount = amount;
}

void PaymentMethod::setPaymentType(std::string paymentType)
{
    this->m_paymentType = paymentType;
}

void PaymentMethod::setPaymentStatus(std::string paymentStatus)
{
    this->m_paymentStatus = paymentStatus;
}
