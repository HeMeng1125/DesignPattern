#pragma once
#include <iostream>
#include "kindwomen.h"

class PanJinLian : public KindWomen
{
public:

	PanJinLian(void) { }

	~PanJinLian(void) { }

	void makeEyesWithMan()
	{
		std::cout << "  �˽���������  " << std::endl;
	}

	void happyWithMan()
	{
		std::cout << " �˽������������Ǹ�... ... " << std::endl;
	}


};

