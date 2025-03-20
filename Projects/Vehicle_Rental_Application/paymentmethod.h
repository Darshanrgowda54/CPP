#ifndef PAYMENTMETHOD_H
#define PAYMENTMETHOD_H

#include <string>
class PaymentMethod
{
public:
    PaymentMethod();
    ~PaymentMethod();
    PaymentMethod(float amount, std::string paymentType, std::string paymentStatus);

    float getAmount();
    std::string getPaymentType();
    std::string getPaymentStatus();

    void setAmount(float amount);
    void setPaymentType(std::string paymentType);
    void setPaymentStatus(std::string paymentStatus);

private:
    float m_amount;
    std::string m_paymentType;
    std::string m_paymentStatus;
};

#endif // PAYMENTMETHOD_H
