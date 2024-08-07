/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clundber < clundber@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:25:27 by casimirri         #+#    #+#             */
/*   Updated: 2024/08/07 11:50:52 by clundber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    void setFn(std::string name);
    void setLn(std::string name);
    void setNn(std::string name);
    void setPn(std::string number);
    void setDs(std::string secret);

    std::string getFn();
    std::string getLn();
    std::string getNn();
    std::string getPn();
    std::string getDs();
};

#endif