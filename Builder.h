//---------------------------------------------------------------------------

#ifndef BuilderH
#define BuilderH
#include "Product.h"
//---------------------------------------------------------------------------

class HouseBuilder
{
public:
	House* house;
	virtual void Reset() = 0;
	virtual void BuildBathroom() = 0;
	virtual void BuildSleepingRoom() = 0;
	virtual void BuildKitchen() = 0;
	virtual void BuildMainRoom() = 0;

	virtual House* GetHouse() = 0;
};

class CheapHouseBuilder : public HouseBuilder
{
public:

	CheapHouseBuilder()
	{
		Reset();
	}

	~CheapHouseBuilder()
	{
		delete house;
	}

	void Reset() override;
	void BuildBathroom() override;
	void BuildSleepingRoom() override;
	void BuildKitchen() override;
	void BuildMainRoom() override;
	House* GetHouse() override;
};

class RichHouseBuilder : public HouseBuilder
{
public:

	RichHouseBuilder()
	{
		Reset();
	}

	~RichHouseBuilder()
	{
		delete house;
	}

	void Reset() override;
	void BuildBathroom() override;
	void BuildSleepingRoom() override;
	void BuildKitchen() override;
	void BuildMainRoom() override;
	House* GetHouse() override;
};


#endif
