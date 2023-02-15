//---------------------------------------------------------------------------

#ifndef ProductH
#define ProductH
#include <vector>
#include <System.Classes.hpp>
//---------------------------------------------------------------------------

class House
{
public:
	std::vector<AnsiString> parts_;

	AnsiString ReturnParts();
};


#endif
