#pragma once
#include "AppliedPO.h"
#include "SystemPO.h"
#include <exception>


class PcSoftware : virtual public SystemPO, virtual public AppliedPO //���������� ����������� ����������
{
public:

	int OnPc = 0;
	int a;
	PcSoftware() { OnPc = 0; }
	PcSoftware(int a) {
		cout << "����������� ������ ��������" << endl;
		if (a) throw 1;
	}
	~PcSoftware() {
		throw std::runtime_error("�������� ����������");
		cout << "���������� PCSoftware" << endl;
	}

	PcSoftware(int OnPc, int i) : OnPc(OnPc), a(i) {}
	void SwitchPC();
};


