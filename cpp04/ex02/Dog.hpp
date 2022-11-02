/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:48:37 by bperron           #+#    #+#             */
/*   Updated: 2022/11/02 11:37:43 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : virtual public AAnimal{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &init);
	~Dog();
	Dog &operator=(const Dog &src);

	void	makeSound() const;
	void	showIdea(int i);
};

#endif