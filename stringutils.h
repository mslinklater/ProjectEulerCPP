#include <iostream>
#include <string>

template<typename T>
std::string VectorToString(std::vector<T>& vec)
{
    std::string ret = "[";
    int count = vec.size();
    int last = count - 1;
    for(int i = 0 ; i < count ; ++i)
    {
        ret.append(std::to_string(vec[i]));
        if(i != last)
        {
            ret.append(", ");
        }
    }    
    ret.append("]");
    return ret;
}
