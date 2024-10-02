/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:07:50 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 15:27:14 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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