/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:52:27 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 15:52:28 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# pragma once
# include "AMateria.hpp"

class Cure: public AMateria
{
private:

public:
	Cure();
	~Cure();
	Cure(Cure&);
	Cure& operator=(Cure&);
	Cure* clone() const override;
};