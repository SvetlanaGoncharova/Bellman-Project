#pragma once

struct Trio {
    int surplus; //������� ��������� 
    int OptControl; // ����������� ����������
    int MaxFunValue;  //������������ �������� ������� ��� ������� ���������
};

class Table
{
private:
   int sizeN;
    int GetN() { return sizeN; }

public:
    Table(int _N);
    ~Table();
    Trio* OpTab;
};
