#include "BitcoinExchange.hpp"

bool    is_valid_file(std::string file){
    unsigned int value = file.find(".txt");
    if (value != file.length() - 4){
        std::cerr << "Bad arg. ./btc [input.txt]" << std::endl;
        return false;        
    }
    
    return true;    
}

int main(int argc, char **argv){
    if (argc != 2){
        std::cerr << "Need one argument. ./btc [text.txt]" << std::endl;
        return 1;
    }
    std::string file = argv[1];
    if(!is_valid_file(file))
        return 1;
    std::ifstream inputTxt (argv[1], std::ios::in);
    if (!inputTxt)
    {
        std::cerr << "File restricted. ./btc [text.txt]" << std::endl;
        return 1;
    }
    std::map<std::string, float> inputData;
    int errorCode = 0;
    fileDataMap(inputData, errorCode);
    if (errorCode == 1)
        return 1;
    findBitcoinValue(inputTxt, inputData);
    return 0;
}