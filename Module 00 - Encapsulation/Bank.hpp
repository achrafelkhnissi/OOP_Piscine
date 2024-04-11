#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Account.hpp"

class Bank
{
public:
	Bank();
	~Bank();

	int getLiquidity() const;
	std::vector<Account *> getClientAccounts() const;

	void setLiquidity(int p_liquidity);
	void setClientAccounts(std::vector<Account *> p_clientAccounts);

    void addClientAccount(Account *clientAccount);
    void removeClientAccount(Account *clientAccount);

    void createAccount(int value);
    void deleteAccount(int id);
    void modifyAccount(int id, int value);

    void giveLoan(int id, int value);

	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank);

private:
    int _liquidity;
    std::vector<Account *> _clientAccounts;

    Account *getAccountById(int id);
};