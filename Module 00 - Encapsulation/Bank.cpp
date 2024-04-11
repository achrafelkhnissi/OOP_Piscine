#include "Bank.hpp"
#include "Account.hpp"
#include <algorithm>

Bank::Bank() :
	_liquidity(0) {}

Bank::~Bank() {}

int Bank::getLiquidity() const {
	return (_liquidity);
}

std::vector<Account *> Bank::getClientAccounts() const {
	return (_clientAccounts);
}

void Bank::setLiquidity(int liquidity) {
	_liquidity = liquidity;
}

void Bank::setClientAccounts(std::vector<Account *> clientAccounts) {
	_clientAccounts = clientAccounts;
}

void Bank::addClientAccount(Account *clientAccount) {
    if (std::find(_clientAccounts.begin(), _clientAccounts.end(), clientAccount) != _clientAccounts.end()) {
        std::cout << "Account already in the list" << std::endl;
        return;
    }

	_clientAccounts.push_back(clientAccount);
}

void Bank::removeClientAccount(Account *clientAccount) {
    std::vector<Account *>::iterator it = std::find(_clientAccounts.begin(), _clientAccounts.end(), clientAccount);
    if (it != _clientAccounts.end())
        _clientAccounts.erase(it);
    else
        std::cout << "Account not found" << std::endl;
}

void Bank::createAccount(int value) {
    Account *account = new Account(value);
    addClientAccount(account);
}

void Bank::deleteAccount(int id) {
    std::vector<Account *>::iterator it = _clientAccounts.begin();
    while (it != _clientAccounts.end()) {
        if ((*it)->getId() == id) {
            _clientAccounts.erase(it);
            return;
        }
        ++it;
    }
    std::cout << "Account not found" << std::endl;
}

void Bank::modifyAccount(int id, int value) {

    Account *account = getAccountById(id);

    if (account != nullptr) {
        account->setValue(value);
        _liquidity += value * 0.05;
        return;
    }

    std::cout << "Account not found" << std::endl;
}

void Bank::giveLoan(int id, int value) {
    Account *account = getAccountById(id);

    if (account != nullptr) {
        if (_liquidity >= value) {
            account->setValue(account->getValue() + value);
            _liquidity -= value;
        } else {
            std::cout << "Not enough liquidity" << std::endl;
        }
        return;
    }

    std::cout << "Account not found" << std::endl;
}

Account *Bank::getAccountById(int id) {
    std::vector<Account *>::iterator it = _clientAccounts.begin();
    while (it != _clientAccounts.end()) {
        if ((*it)->getId() == id) {
            return (*it);
        }
        ++it;
    }
    return (nullptr);
}

std::ostream& operator << (std::ostream& os, const Bank& bank)
{
	os << "Bank informations : " << std::endl;
	os << "Liquidity : " << bank._liquidity << std::endl;

    for (std::vector<Account *>::const_iterator it = bank._clientAccounts.begin(); it != bank._clientAccounts.end(); ++it)
        os << **it << std::endl;

	return (os);
}
