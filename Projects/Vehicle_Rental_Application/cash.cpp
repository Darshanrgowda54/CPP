#include "cash.h"
#include <iostream>

Cash::Cash()
{
    std::cout<<"Cash Constructor Called"<<std::endl;
}

Cash::~Cash()
{
    std::cout<<"Cash Destructor Called"<<std::endl;
}

Cash::Cash(float paidAmount, float balanceAmount, std::string paymentType, std::string paymentStatus, std::string paymentID)
{
    std::cout<<"Cash Parameter Constructor Called"<<std::endl;
    this->m_paidAmount = paidAmount;
    this->m_balanceAmount = balanceAmount;
    this->m_paymentType = paymentType;
    this->m_paymentStatus = paymentStatus;
    this->m_paymentID = paymentID;
}


float Cash::getPaidAmount()
{
    return m_paidAmount;
}

std::string Cash::getPaymentType()
{
    return m_paymentType;
}

std::string Cash::getPaymentStatus()
{
    return m_paymentStatus;
}

std::string Cash::getPaymentID()
{
    return m_paymentID;
}

void Cash::setPaidAmount(float paidAmount)
{
    this->m_paidAmount = paidAmount;
}

void Cash::setPaymentType(std::string paymentType)
{
    this->m_paymentType = paymentType;
}

void Cash::setPaymentStatus(std::string paymentStatus)
{
    this->m_paymentStatus = paymentStatus;
}

void Cash::setPaymentID(std::string paymentID)
{
    this->m_paymentID = paymentID;
}

float Cash::getBalanceAmount()
{
    return m_balanceAmount;
}

void Cash::setBalanceAmount(float balanceAmount)
{
    this->m_balanceAmount = balanceAmount;
}

