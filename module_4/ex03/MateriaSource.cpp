/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:47:57 by clundber          #+#    #+#             */
/*   Updated: 2024/10/04 22:43:08 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->templates[i] = nullptr;
	std::cout << "default MateriaSource created" << std::endl;
}

MateriaSource::~MateriaSource()
{
	delete [] this->templates;
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

void MateriaSource::learnMateria(AMateria* other)
{
	int i = 0;
	while (i < 4 && templates[i] != nullptr)
		i++;
	if (i < 4)
		this->templates[i] = other;
}

	AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i] != nullptr && this->templates[i]->getType() == type)
			return (this->templates[i]);
	}
	return (nullptr);
}