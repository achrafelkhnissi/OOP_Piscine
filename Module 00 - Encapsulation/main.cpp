#include "Account.hpp"
#include "Bank.hpp"

int main()
{
	Bank bank = Bank();
    bank.setLiquidity(999);

    bank.createAccount(100);
    bank.createAccount(100);

    Account accountA = *bank.getClientAccounts()[0];
    Account accountB = *bank.getClientAccounts()[1];

    bank.setLiquidity(bank.getLiquidity() - 200);
    bank.modifyAccount(accountA.getId(), accountA.getValue() + 400);

	std::cout << "Account : " << std::endl;
	std::cout << accountA << std::endl;
	std::cout << accountB << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	return (0);
}
