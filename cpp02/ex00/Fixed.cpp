/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:26:15 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 14:05:38 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : nb(0) {
  std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &init) {
  std::cout << "Copy Constructor called" << std::endl;
  this->setRawBits(init.getRawBits());
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed &Fixed::operator=(const Fixed &src) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &src)
    this->setRawBits(src.getRawBits());
  return (*this);
}

int Fixed::getRawBits() const {
  std::cout << "getRawBits member function called" << std::endl;
  return nb;
}

void Fixed::setRawBits(int const raw) { nb = raw; }

const int Fixed::fb = 8;