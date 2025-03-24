#ifndef CASH_H
#define CASH_H

#include "paymentmode.h"
class Cash:public PaymentMode
{
public:
    Cash();
    ~Cash();
    Cash(float paidAmount, float balanceAmount, std::string paymentType, std::string paymentStatus, std::string paymentID);

    float getPaidAmount();
    float getBalanceAmount();
    std::string getPaymentType();
    std::string getPaymentStatus();
    std::string getPaymentID();

    void setPaidAmount(float paidAmount);
    void setBalanceAmount(float balanceAmount);
    void setPaymentType(std::string paymentType);
    void setPaymentStatus(std::string paymentStatus);
    void setPaymentID(std::string paymentID);
};

#endif // CASH_H
