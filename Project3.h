/*Author: Jingyu Liu
 *
 * Copyright :2018 liuj25@miamioh.edu
 */

#ifndef HW_3B_H
#define HW_3B_H
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <iomanip>
#include <algorithm>

class getData {
private:
    using StrStrMap = std::unordered_map<std::string, std::string>;
public:
    void set(std::istream& in, StrStrMap& map, StrStrMap& map2);
    void get(std::string& in, StrStrMap& map, StrStrMap& map2);
};

#endif /* HW_3B_H */
