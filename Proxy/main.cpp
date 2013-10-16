#include "WangPo.h"
#include "PanJinLian.h"
#include "JiaShi.h"

using std::cout;
using std::endl;

void doPanJinLia()
{
    // �����������˽����������������š�
	WangPo *wp=new WangPo(new PanJinLian);
	wp->makeEyesWithMan();
	wp->happyWithMan();
	delete wp;
}

void doJiaShi()
{
	// ���������Ҽ��ϣ������������š�
	WangPo *wp=new WangPo(new JiaShi);
	wp->makeEyesWithMan();
	wp->happyWithMan();
	delete wp;
}

int main(void)
{
	doPanJinLia();
	doJiaShi();

	std::cin.get();
	return 0;
}