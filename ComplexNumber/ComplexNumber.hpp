#pragma once

#include <iostream>
#include <cmath>
#include <type_traits>

namespace jm
{
    namespace jpo
    {
        template <typename T>
            requires std::is_arithmetic_v<T>
        class ComplexNumber
        {
        private:
            T m_re;
            T m_im;

        public:
            ComplexNumber(T re = 0.0, T im = 0.0) : m_re(re), m_im(im) {};

            void setRe(const T &real)
            {
                m_re = real;
            }

            void setIm(const T &imag)
            {
                m_im = imag;
            }

            T getRe() const
            {
                return m_re;
            }

            T getIm() const
            {
                return m_im;
            }

            ComplexNumber operator+(const ComplexNumber &other) const
            {
                return ComplexNumber(m_re + other.m_re, m_im + other.m_im);
            }

            ComplexNumber operator+(T value) const
            {
                return ComplexNumber(m_re + value, m_im + value);
            }

            ComplexNumber operator-(const ComplexNumber &other) const
            {
                return ComplexNumber(m_re - other.m_re, m_im - other.m_im);
            }

            ComplexNumber operator-(T value) const
            {
                return ComplexNumber(m_re - value, m_im - value);
            }

            ComplexNumber &operator+=(const ComplexNumber &other)
            {
                m_re += other.m_re;
                m_im += other.m_im;
                return *this;
            }

            ComplexNumber &operator+=(T value)
            {
                m_re += value;
                m_im += value;
                return *this;
            }

            ComplexNumber &operator-=(const ComplexNumber &other)
            {
                m_re -= other.m_re;
                m_im -= other.m_im;
                return *this;
            }

            ComplexNumber &operator-=(T value)
            {
                m_re -= value;
                m_im -= value;
                return *this;
            }

            ComplexNumber operator*(const ComplexNumber &other) const
            {
                return ComplexNumber(
                    m_re * other.m_re - m_im * other.m_im,
                    m_re * other.m_im + m_im * other.m_re);
            }

            ComplexNumber &operator*=(const ComplexNumber &other)
            {
                T tempRe = m_re * other.m_re - m_im * other.m_im;
                m_im = m_re * other.m_im + m_im * other.m_re;
                m_re = tempRe;
                return *this;
            }

            ComplexNumber operator/(const ComplexNumber &other) const
            {
                T den = other.m_re * other.m_re + other.m_im * other.m_im;
                return ComplexNumber(
                    (m_re * other.m_re + m_im * other.m_im) / den,
                    (m_im * other.m_re - m_re * other.m_im) / den);
            }

            ComplexNumber &operator/=(const ComplexNumber &other)
            {
                T den = other.m_re * other.m_re + other.m_im * other.m_im;
                T tempRe = (m_re * other.m_re + m_im * other.m_im) / den;
                m_im = (m_im * other.m_re - m_re * other.m_im) / den;
                m_re = tempRe;
                return *this;
            }

            bool operator==(const ComplexNumber &other) const
            {
                return (m_re == other.m_re) && (m_im == other.m_im);
            }

            bool operator!=(const ComplexNumber &other) const
            {
                return (m_re != other.m_re) && (m_im != other.m_im);
            }

            ComplexNumber &operator=(const ComplexNumber &other)
            {
                if (this != &other)
                {
                    m_re = other.m_re;
                    m_im = other.m_im;
                }
                return *this;
            }

            friend std::ostream &operator<<(std::ostream &os, const ComplexNumber &c)
            {
                os << c.m_re << (c.m_im >= 0 ? "+" : "-") << std::abs(c.m_im) << "i";
                return os;
            }
        };
    }
}
