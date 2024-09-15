#include <vector>
#include <type_traits>

template<typename T>
std::vector<T> PrimeFactors(T n)
{
    static_assert(std::is_integral_v<T>);   // only for integral types

    std::vector<T> factors;
    T i = 2;
    while (i * i <= n)
    {
        if (n % i)  // is i NOT a factor...
        {
            i += 1;
        }
        else
        {
            factors.push_back(i);
            n = n / i;
        }
    }
    factors.push_back(n);
    return factors;
}

template<typename T>
bool IsPalindrome(T num)
{
    static_assert(std::is_integral_v<T>);   // only for integral types

    std::string str = std::to_string(num);
    int len = str.length();
    for(int i = 0 ; i < len ; ++i)
    {
        if(str[i] != str[len - i - 1])
            return false;
    }
    return true;
}
