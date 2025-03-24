#ifndef PAYMENTMODE_H
#define PAYMENTMODE_H

#include <string>
class PaymentMode
{
public:
    PaymentMode();
    ~PaymentMode();
    PaymentMode(float paidAmount, float balanceAmount, std::string paymentType, std::string paymentStatus, std::string paymentID);

    virtual float getPaidAmount();
    virtual float getBalanceAmount();
    virtual std::string getPaymentType();
    virtual std::string getPaymentStatus();
    virtual std::string getPaymentID();

    virtual void setPaidAmount(float paidAmount);
    virtual void setBalanceAmount(float balanceAmount);
    virtual void setPaymentType(std::string paymentType);
    virtual void setPaymentStatus(std::string paymentStatus);
    virtual void setPaymentID(std::string paymentID);

protected:
    float m_paidAmount;
    float m_balanceAmount;
    std::string m_paymentType;
    std::string m_paymentStatus;
    std::string m_paymentID;
};

#endif // PAYMENTMODE_H
