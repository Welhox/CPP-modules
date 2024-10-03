/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:46:07 by clundber          #+#    #+#             */
/*   Updated: 2024/10/03 10:52:07 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *templates[4];
public:
	MateriaSource();
	MateriaSource(std::string name);
	~MateriaSource();
	MateriaSource(MateriaSource&);
	MateriaSource& operator=(MateriaSource&);

	void learnMateria(AMateria*) override;
	AMateria* createMateria(std::string const & type) override;
};