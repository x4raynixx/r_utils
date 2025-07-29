#pragma once
#include <string>
#include <algorithm>
#include <cctype>

inline std::string makelower(std::string conv) {
    std::transform(conv.begin(), conv.end(), conv.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return conv;
}

inline char makelower(char conv) {
    return std::tolower(static_cast<unsigned char>(conv));
}


inline std::string makeupper(std::string conv) {
    std::transform(conv.begin(), conv.end(), conv.begin(),
                   [](unsigned char c){ return std::toupper(c); });
    return conv;
}

inline char makeupper(char conv) {
    return std::toupper(static_cast<unsigned char>(conv));
}