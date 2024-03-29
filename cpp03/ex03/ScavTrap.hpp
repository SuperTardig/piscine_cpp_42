/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:03:56 by bperron           #+#    #+#             */
/*   Updated: 2023/03/13 07:47:10 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
  bool guard;

public:
  ScavTrap();
  ScavTrap(std::string n);
  ScavTrap(const ScavTrap &init);
  ~ScavTrap();

  ScavTrap &operator=(const ScavTrap &src);

  void set_guard(const bool &guard);
  const bool &get_guard() const;

  void guardGate();
  void attack(const std::string &target);
};

#endif