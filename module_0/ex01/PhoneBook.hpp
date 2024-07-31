/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casimirri <clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:18:40 by casimirri         #+#    #+#             */
/*   Updated: 2024/07/30 13:22:48 by casimirri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "PhoneBook.hpp"

class PhoneBook
{
private:
    Contact contact[8];
public:
    void add_contact();
    void search_contacts();
};

#endif