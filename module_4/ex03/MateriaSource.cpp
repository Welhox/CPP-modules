/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:47:57 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 15:50:49 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "default MateriaSource created" << std::endl;
}

MateriaSource::MateriaSource(std::string name)
{
	std::cout << "MateriaSource created" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource undone" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource& other)
{

	std::cout << "MateriaSource duplicated" << std::endl;
}
	
MateriaSource& MateriaSource::operator=(MateriaSource& other)
{

	std::cout << "MateriaSource = operator called" << std::endl;
	
	return(*this);
}