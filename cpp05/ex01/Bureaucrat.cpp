/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:52:07 by bperron           #+#    #+#             */
/*   Updated: 2022/11/04 09:49:01 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("GradeTooHigh");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("GradeTooLow");
}

Bureaucrat::Bureaucrat() : grade(150), name("Some random bureaucrat"){
	cout << "Bureaucrat default constructor called" << endl;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &init) : grade(init.getGrade()), name(init.getName()){
	cout << "Bureaucrat copy constructor called" << endl;
	return;
}

Bureaucrat::Bureaucrat(int i, const string n) : name(n){
	if (i < 1)
		throw GradeTooHighException();
	else if (i > 150)
		throw GradeTooLowException();
	grade = i;
	cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::~Bureaucrat(){
	cout << "Bureaucrat destructor called" << endl;
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
	cout << "Bureaucrat copy assignement operator called" << endl;
	if (this != &src)
		grade = src.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &dude){
	os << "Hi, my name is " << dude.getName() << " and my grade is " << dude.getGrade();
	return (os);
}

std::string Bureaucrat::getName() const{
	return name;
}

int	Bureaucrat::getGrade() const{
	return grade;
}

void	Bureaucrat::gradeUp(){
	if (grade < 2)
		throw GradeTooHighException();
	grade--;
	return;
}

void	Bureaucrat::gradeDown(){
	if (grade > 149)
		throw GradeTooLowException();
	grade++;
	return;
}