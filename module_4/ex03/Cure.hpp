/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:52:27 by clundber          #+#    #+#             */
/*   Updated: 2024/10/03 11:36:50 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once
# include "AMateria.hpp"

class Cure: virtual public AMateria
{
private:

public:
	Cure();
	~Cure();
	Cure(Cure&);
	Cure& operator=(Cure&);
	AMateria* clone() const override;
};