/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:07:50 by clundber          #+#    #+#             */
/*   Updated: 2024/10/03 11:34:08 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Character.hpp"

class AMateria
{
protected:
	std::string type;
	
public:
	AMateria();
	AMateria(std::string const & type);
	~AMateria();
	AMateria(AMateria&);
	AMateria& operator=(AMateria&);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};