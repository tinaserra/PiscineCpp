/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vserra <vserra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:44:11 by vserra            #+#    #+#             */
/*   Updated: 2022/01/27 18:06:12 by vserra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* CONSTRUCTEUR -------------------------------------------------------------- */

Account::Account() : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;";
	std::cout << "created" << std::endl;
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
	_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount
        << ";created" << std::endl;
}

/* DESTRUCTEUR --------------------------------------------------------------- */

Account::~Account()
{
    _nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";closed" << std::endl;
}

/* STATIC FUNCTIONS ---------------------------------------------------------- */

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:"
        << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:"
        <<_totalNbWithdrawals  << std::endl;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
    time_t t;

    struct tm *tm;
    std::time(&t);
    tm = std::localtime(&t);

    std::cout << "[" << tm->tm_year + 1900;
    if (tm->tm_mon >= 0 && tm->tm_mon < 9)
        std::cout << "0" << tm->tm_mon + 1;
    else
        std::cout << tm->tm_mon + 1;
    std::cout << tm->tm_mday << "_" << tm->tm_hour << tm->tm_min << tm->tm_sec << "] ";
}

/* OTHERS FUNCTIONS ---------------------------------------------------------- */

void	Account::makeDeposit( int deposit )
{
    if (deposit <= 0)
		return ;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount - deposit)
		<< ";deposit:" << deposit << ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if(checkAmount() < withdrawal)
    {
		_displayTimestamp();
			std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount)
				<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount + withdrawal)
		<< ";withdrawal:" << withdrawal << ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}