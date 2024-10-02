/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:00:30 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 15:18:27 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter, public AMateria
{
private:
	std::string name;
	AMateria *materias[4];
	AMateria *discarded[100]; //need to be scaleable;
	static unsigned int disAmount;
public:
	Character();
	Character(std::string name);
	~Character();
	Character(Character&);
	Character& operator=(Character&);
	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
};