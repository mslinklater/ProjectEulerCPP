#include <vector>
#include <type_traits>
#include <map>

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

template<typename T>
T NumberFromPrimeFactorCounts(const std::map<T, T>& factors)
{
    T ans = 1;
    for(auto e : factors)
    {
        int mul = std::pow(e.first, e.second);
        ans = ans * mul;
    }
    return ans;
}

template<typename T>
std::map<T, int> CountElements(const std::vector<T>& input)
{
    std::map<T, int> ret;
    for(int e : input)
    {
        if(!ret.contains(e))
        {
            ret[e] = 1;
        }
        else
        {
            ret[e]++;
        }
    }
    return ret;
}

template<typename T>
T SumOfSquares(T count)
{
    T answer = 0;
    for(T i=0 ; i<=count ;++i)
    {
        answer += i * i;
    }
    return answer;
}

template<typename T>
T Sum(T count)
{
/* Simple geometric reasoning... sum is half the area of a rect with sides n, n+1

eg 5 - half a rect of 5x6

*.....
**....
***...
****..
*****.

answer - 15

*/

    return (count * (count+1)) / 2;
}

template<typename T>
bool IsPrime(T number)
{
    return PrimeFactors<T>(number).size() == 1;
}