#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
#include <iomanip>

void fileDataMap(std::map<std::string, float> &data, int &errorCode);
void findBitcoinValue(std::ifstream &inpuTxt, std::map<std::string, float> &data);

#endif