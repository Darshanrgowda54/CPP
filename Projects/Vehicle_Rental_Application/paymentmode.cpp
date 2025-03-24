#include "paymentmode.h"
#include <iostream>

PaymentMode::PaymentMode()
{
    std::cout<<"PaymentMode Constructor Called"<<std::endl;
}

PaymentMode::~PaymentMode()
{
    std::cout<<"PaymentMode Destructor Called"<<std::endl;
}

PaymentMode::PaymentMode(float paidAmount, float balanceAmount, std::string paymentType, std::string paymentStatus, std::string paymentID)
{
    std::cout<<"PaymentMode Parameter Constructor Called"<<std::endl;
    this->m_paidAmount = paidAmount;
    this->m_balanceAmount = balanceAmount;
    this->m_paymentType = paymentType;
    this->m_paymentStatus = paymentStatus;
    this->m_paymentID = paymentID;
}

float PaymentMode::getPaidAmount()
{
    return m_paidAmount;
}

std::string PaymentMode::getPaymentType()
{
    return m_paymentType;
}

std::string PaymentMode::getPaymentStatus()
{
    return m_paymentStatus;
}

std::string PaymentMode::getPaymentID()
{
    return m_paymentID;
}

void PaymentMode::setPaidAmount(float paidAmount)
{
    this->m_paidAmount = paidAmount;
}

void PaymentMode::setPaymentType(std::string paymentType)
{
    this->m_paymentType = paymentType;
}

void PaymentMode::setPaymentStatus(std::string paymentStatus)
{
    this->m_paymentStatus = paymentStatus;
}

void PaymentMode::setPaymentID(std::string paymentID)
{
    this->m_paymentID = paymentID;
}

float PaymentMode::getBalanceAmount()
{
    return m_balanceAmount;
}

void PaymentMode::setBalanceAmount(float balanceAmount)
{
    this->m_balanceAmount = balanceAmount;
}

