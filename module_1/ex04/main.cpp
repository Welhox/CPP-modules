/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:49:54 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/01 17:19:19 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

void    read_file(std::string *buffer, std::ifstream *original_file)
{
    std::string line;
    while (getline(*original_file, line))
    {
        if (!line.empty())
        {
            if (!buffer->empty())
                *buffer = *buffer + '\n';
         *buffer = *buffer + line;
        }
    }
}



int main(int argc, char **argv)
{
    try
    {
        if (argc != 4)
            throw(std::invalid_argument("invalid argument count"));
        std::string in_name = argv[1];
        std::string to_replace = argv[2];
        std::string replacement = argv[3];
        
        if (std::filesystem::exists(in_name + ".replace"))
            throw(std::invalid_argument("outfile alredy exists"));
            
        std::ifstream original_file(in_name);
        if (!original_file.is_open())
            throw(std::invalid_argument("failed to open file"));

        std::ofstream new_file(in_name + ".replace");
        if (!new_file.is_open())
            throw(std::invalid_argument("failed to create file"));

        std::string buffer;
        read_file(&buffer, &original_file);
        
        long unsigned int index = 0;
        while (index <= buffer.length())
        {
            index = buffer.find(to_replace);
            if (index <= buffer.length())
            {
                buffer.erase(index, to_replace.length());
                buffer.insert(index, replacement);
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
    std::cout << "Great success" << std::endl;
}
