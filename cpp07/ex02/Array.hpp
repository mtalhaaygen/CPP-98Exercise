#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T *_array;
        size_t _size;

    public:
        Array() : _array(NULL), _size(0) {}
        Array(unsigned int n) : _array(new T[n]()), _size(n) {}
        Array(Array const &other) : _array(new T[other._size]()), _size(other._size)
        {
            for (size_t i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        ~Array() { delete[] _array; }

        Array &operator=(Array const &other)
        {
            if (this != &other)
            {
                delete[] _array;
                _array = new T[other._size]();
                _size = other._size;
                for (size_t i = 0; i < _size; i++)
                    _array[i] = other._array[i];
            }
            return *this;
        }

        T &operator[](size_t i)
        {
            if (i >= _size)
                throw std::out_of_range("Index out of range");
            return _array[i];
        }

        size_t size() const { return _size; }
};

#endif