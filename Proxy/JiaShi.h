#pragma once
#include <iostream>
#include "kindwomen.h"

class JiaShi : public KindWomen
{
public:

	JiaShi(void) { }

	~JiaShi(void) { }

	void makeEyesWithMan()
	{
		std::cout << "  ����������  " << std::endl;
	}

	void happyWithMan()
	{
		std::cout << " ���Ϻ��������Ǹ�... ... " << std::endl;
	}

};

