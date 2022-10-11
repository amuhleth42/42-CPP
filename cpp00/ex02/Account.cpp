/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:19:02 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 00:31:25 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <chrono>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}


void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}


Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->_amount << ";created";
	std::cout << std::endl;
	Account::_totalAmount += this->_amount;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->_amount << ";closed";
	std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "p_amount:" << this->_amount << ";";
	
	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
	
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (0);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (1);
	}
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm time = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (time.tm_year + 1900)
			<< std::setw(2) << time.tm_mon
			<< std::setw(2) << time.tm_mday << "_"
			<< std::setw(2) << time.tm_hour
			<< std::setw(2) << time.tm_min
			<< std::setw(2) << time.tm_sec << "] ";
}


