#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
public:
    Array();
    ~Array();

    Array (const Array<T>  &A1);

    void resize();
    void pushback(T value);
    void print();
private:
    T* m_arr;
    int m_size;
    int m_capacity;
};

#endif // ARRAY_H

