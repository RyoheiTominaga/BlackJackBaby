#pragma once

#include "Person.h"
class Shoe;

class Dealer : public Person
{
public:
	Dealer();
	Dealer(const char* name);
	virtual ~Dealer();

public:
	bool play(Shoe* pShoe)override; //override;	// ƒ^[ƒ“ˆ—
};
