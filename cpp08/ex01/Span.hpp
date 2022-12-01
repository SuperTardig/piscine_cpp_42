/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:47:30 by bperron           #+#    #+#             */
/*   Updated: 2022/11/24 13:46:19 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span{
private:
	unsigned int		size;
	std::vector<int>	vec;
public:
	Span();
	Span(int n);
	Span(const Span &src);
	~Span();

	int		shortestSpan();
	int		longestSpan();
	void	addNumber(int n);
	void	bigAddNumber(int n);
	
	Span &operator=(const Span &src);

	class FullExecption : public std::exception{
		public:
			virtual const char *what() const throw(){return ("The span doesn't have anymore space left to fit new numbers");};
	};
	
	class NoSpanExecption : public std::exception{
		public:
			virtual const char *what() const throw(){return ("The span either has no numbers or one numbers in it. No span can be found");};
	};
};
