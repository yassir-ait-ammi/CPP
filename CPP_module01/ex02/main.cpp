/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:24:26 by yaait-am          #+#    #+#             */
/*   Updated: 2025/06/27 09:54:50 by yaait-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string var =  "HI THIS IS BRAIN";
	std::string* ptr = &var;
	std::string& ref = var;
	std::cout << "string address : " << &var << "\n";
	std::cout << "pointer held : " << ptr << "\n";
	std::cout << "reference held : " << &ref << "\n";
	std::cout << "string value : " << var << "\n";
	std::cout << "pointer value : " << *ptr << "\n";
	std::cout << "reference value : " << ref << "\n";
}
