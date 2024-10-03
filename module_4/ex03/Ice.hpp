/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:26:13 by clundber          #+#    #+#             */
/*   Updated: 2024/10/03 11:36:15 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AMateria.hpp"

class Ice: virtual public AMateria
{
private:

public:
	Ice();
	~Ice();
	Ice(Ice&);
	Ice& operator=(Ice&);
	AMateria* clone() const override;
};