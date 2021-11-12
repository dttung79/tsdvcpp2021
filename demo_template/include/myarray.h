#pragma once
#define DEFAULT_SIZE 100
template<class T>
class Array
{
    private:
        T *content;
        int size;
    public:
        Array()
        {
            size = DEFAULT_SIZE;
            content = new T[size];
        }

        Array(const int &size)
        {
            this->size = size;
            content = new T[size];
            for (int i = 0; i < size; i++) content[i] = 0;
        }

        ~Array()
        {
            delete[] content;
        }
        int length() const
        {
            return size;
        }

        T& operator[](const int &index) const
        {
            if (index < 0 || index >= size) 
                throw "Error: Index out of bound!";
            return content[index];
        }
};