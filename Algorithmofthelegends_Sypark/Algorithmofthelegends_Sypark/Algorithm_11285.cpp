#include<iostream>

using namespace std;



int main(void)
{
    setlocale(LC_ALL, "");// set unicode


    wchar_t first[19] = {L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��'};
    wchar_t middle[21] = {L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��' };
    wchar_t final[28] = {L' ',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��',L'��'};




    wchar_t a[10] ;  // input ��
    wchar_t b[10] ;  // input ��
    wchar_t c[10] ;  // input ��

    wchar_t fir;//�� temp
    wchar_t mid; // �� temp
    wchar_t fin;// �� temp
    wchar_t result= 0xAC00; // �ѱ� ���� �����ڵ� hex -> dec = 44032

    wcin.getline(a, 10);//input
    wcin.getline(b, 10);
    wcin.getline(c, 10);
    fir = a[0];
    mid = b[0];
    fin = c[0];
    //getline(cin, str);
    //wstring widestr = std::wstring(str.begin(), str.end());
    //const wchar_t* c = widestr.c_str();
    //wcin.getline(c,2,'\n');

    for (int i = 0; i < 19; i++)
    {
       if (first[i] == fir)
          result += i*21*28;
    }
    for (int i = 0; i < 21; i++)
    {
       if (middle[i] == mid)
          result += i*28;
    }
    for (int i = 0; i < 28; i++)
    {
       if (final[i] == fin)
          result += i;
    }
    //result = (su1 * 21 * 28) + (su2 * 28)+ su3 + 0xAC00;
    //cout << su1 << endl;
    ///*cout << a << endl << b << endl << c << endl;*/

    //cout << a<<endl<<b<<endl<<c << endl ;

    wcout << result;




}