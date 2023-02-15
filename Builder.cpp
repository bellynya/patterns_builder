//---------------------------------------------------------------------------

#pragma hdrstop

#include "Builder.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void CheapHouseBuilder::Reset()
{
	house = new House();
}

void CheapHouseBuilder::BuildBathroom()
{
	house->parts_.push_back("Bathroom");
}

void CheapHouseBuilder::BuildSleepingRoom()
{
	house->parts_.push_back("SleepingRoom");
}

void CheapHouseBuilder::BuildKitchen()
{
	house->parts_.push_back("Kitchen");
}

void CheapHouseBuilder::BuildMainRoom()
{
	house->parts_.push_back("MainRoom");
}

House* CheapHouseBuilder::GetHouse()
{
	House* res = house;
	Reset();
	return res;
}




void RichHouseBuilder::Reset()
{
	house = new House();
}

void RichHouseBuilder::BuildBathroom()
{
	house->parts_.push_back("RichBathroom");
}

void RichHouseBuilder::BuildSleepingRoom()
{
	house->parts_.push_back("RichSleepingRoom");
}

void RichHouseBuilder::BuildKitchen()
{
	house->parts_.push_back("RichKitchen");
}

void RichHouseBuilder::BuildMainRoom()
{
	house->parts_.push_back("RichMainRoom");
}


House* RichHouseBuilder::GetHouse()
{
	House* res = house;
	Reset();
	return res;
}
