/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:03:56 by bperron           #+#    #+#             */
/*   Updated: 2022/11/01 10:20:43 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
protected:
	bool	guard;
public:
	ScavTrap();
	ScavTrap(std::string n);
	ScavTrap(const ScavTrap &init);
	~ScavTrap();
	
	ScavTrap &operator=(const ScavTrap &src);

	void	guardGate();
	void	attack(const std::string &target);
};

#endif