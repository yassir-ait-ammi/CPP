/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 10:54:11 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/20 11:07:50 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>

void	Repalce_and_write(std::string line, char **av)
{
	std::ofstream outfile;
	std::string new_filename = std::string (av[1]) + ".replace";
	std::string s1 = av[2];
	std::string s2 = av[3];
	size_t len1 = s1.length();

	outfile.open(new_filename.c_str());
	if (!outfile)
	{
		std::cerr << "Error: cannot open output file.\n";
		return;
	}
	for (int i = 0; line[i]; i++)
	{
		if (line.compare(i, len1, s1) == 0)
		{
			for (size_t j = 0; j < s2.length(); ++j)
				outfile.put(s2[j]);
			i += len1;
		}
		outfile.put(line[i]);
	}
	outfile.close();
}

int main(int ac, char **av)
{
	std::ifstream	infile;
	std::string		line;
	std::string		total;

	if (ac != 4)
		return (std::cout << "Usage : ./replace <filename> <string1> <string2>\n", 1);
	infile.open(av[1]);
	if (!infile)
	{
		std::cerr << "Error: cannot open input file.\n";
		return (1);
	}
	while (std::getline(infile, line))
	{
		total += line;
		total += "\n";
	}
	Repalce_and_write(total, av);
	infile.close();
}
