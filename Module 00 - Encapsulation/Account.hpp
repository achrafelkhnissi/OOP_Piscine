#pragma once

#include <string>
#include <vector>
#include <iostream>

class Account
{
public:
	Account();
	Account(int p_value);
	~Account();

	int getId() const;
	int getValue() const;

	friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);

private:
    int _id;
    int _value;

	void setValue(int p_value);

    static int _idCounter;

    friend class Bank;
};
