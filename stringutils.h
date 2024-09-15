#include <iostream>
#include <string>

// TODO: Try this with std::string and see if it fails - use traits for type checking
template<typename T>
std::string VectorToString(const std::vector<T>& vec)
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

std::string MapToString(const std::map<int, int>& input)
{
    std::string ret = "[";

    for(auto e : input)
    {
        ret.append("[");
        ret.append(std::to_string(e.first));
        ret.append(", ");
        ret.append(std::to_string(e.second));
        ret.append("]");
    }

    ret.append("]");
    return ret;
}
