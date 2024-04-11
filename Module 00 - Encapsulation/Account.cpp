#include "Account.hpp"

int Account::_idCounter = 0;

Account::Account() : _id(_idCounter++), _value(0) {}

Account::Account(int value) :
	_value(value) {}

Account::~Account() {}

int Account::getId() const {
	return (_id);
}

int Account::getValue() const {
	return (_value);
}

void Account::setValue(int value) {
	_value = value;
}

std::ostream& operator << (std::ostream& os, const Account& account)
{
	os << "[" << account._id << "] - [" << account._value << "]";
	return (os);
}
