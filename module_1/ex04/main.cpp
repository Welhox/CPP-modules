/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:49:54 by casimirri         #+#    #+#             */
/*   Updated: 2024/09/11 14:24:29 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main(int argc, char **argv)
{
    try
    {
        if (argc != 4)
            throw(std::invalid_argument("invalid argument count"));
        std::string in_name = argv[1];
        std::string to_replace = argv[2];
        std::string replacement = argv[3]; 
        std::ifstream original_file(in_name);
        if (!original_file.is_open())
            throw(std::invalid_argument("failed to open file"));

        std::ofstream new_file(in_name + ".replace");
        if (!new_file.is_open())
            throw(std::invalid_argument("failed to create file"));

        std::string buffer;
        std::ostringstream stream;
        stream << original_file.rdbuf();
        buffer = stream.str();
        long unsigned int index = 0;
        if (!to_replace.empty())
        {
            while (index <= buffer.length())
            {
                index = buffer.find(to_replace, index);
                if (index <= buffer.length())
                {
                    buffer.erase(index, to_replace.length());
                    buffer.insert(index, replacement);
                    index += replacement.length();
                }
            }
        }
        new_file << buffer;
        new_file.close();
        original_file.close();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (1);
    }
}
