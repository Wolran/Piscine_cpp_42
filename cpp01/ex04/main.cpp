/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:56:46 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/08 19:40:07 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int arc, char **argv)
{
	if (arc != 4)
	{
		std::cout << "error nombre d'arg != 4 " << std::endl;
		return 1;
	}
    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
	if (filename == "" || s1 == "" || s2 == "" || s1 == s2) 
	{
		std::cout << "error mauvaise entrée" << std::endl;
		return 2;
	}
	std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: could not open input file " << filename << std::endl;
        return 3;
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: could not create output file " << filename << ".replace" << std::endl;
        return 3;
    }

    std::string line;
    while (std::getline(inFile, line)) {
        std::string::size_type pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        outFile << line << '\n';
    }

    std::cout << "Replacement complete. Results written to " << filename << ".replace" << std::endl;
	return 0;
}