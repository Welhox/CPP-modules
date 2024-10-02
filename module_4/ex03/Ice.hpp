/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:26:13 by clundber          #+#    #+#             */
/*   Updated: 2024/10/02 11:45:41 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "AMateria.hpp"

class Ice: public AMateria
{
private:

public:
	Ice();
	~Ice();
	Ice(Ice&);
	Ice& operator=(Ice&);
	Ice* clone() const override;
};