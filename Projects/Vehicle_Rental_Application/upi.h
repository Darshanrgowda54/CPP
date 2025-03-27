#ifndef UPI_H
#define UPI_H

#include "paymentmode.h"
#include <string>
class Upi:public PaymentMode
{
public:
    Upi();
    ~Upi();
    Upi(float paidAmount, float balanceAmount, std::string paymentType, std::string paymentStatus, std::string paymentID);

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

#endif // UPI_H
