/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:43:05 by clundber          #+#    #+#             */
/*   Updated: 2024/08/07 11:51:37 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFn(std::string name)
{
	first_name = name;
}
void Contact::setLn(std::string name)
{
	last_name = name;
}
void Contact::setNn(std::string name)
{
	nickname = name;
}
void Contact::setPn(std::string number)
{
	phone_number = number;
}
void Contact::setDs(std::string secret)
{
	darkest_secret = secret;
}

std::string Contact::getFn()
{
	return (first_name);
}
std::string Contact::getLn()
{
	return(last_name);
}
std::string Contact::getNn()
{
	return(nickname);
}
std::string Contact::getPn()
{
	return (phone_number);
}
std::string Contact::getDs()
{
	return (darkest_secret);
}