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