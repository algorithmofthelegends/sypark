#include<iostream>

using namespace std;



int main(void)
{
    setlocale(LC_ALL, "");// set unicode


    wchar_t first[19] = {L'ㄱ',L'ㄲ',L'ㄴ',L'ㄷ',L'ㄸ',L'ㄹ',L'ㅁ',L'ㅂ',L'ㅃ',L'ㅅ',L'ㅆ',L'ㅇ',L'ㅈ',L'ㅉ',L'ㅊ',L'ㅋ',L'ㅌ',L'ㅍ',L'ㅎ'};
    wchar_t middle[21] = {L'ㅏ',L'ㅐ',L'ㅑ',L'ㅒ',L'ㅓ',L'ㅔ',L'ㅕ',L'ㅖ',L'ㅗ',L'ㅘ',L'ㅙ',L'ㅚ',L'ㅛ',L'ㅜ',L'ㅝ',L'ㅞ',L'ㅟ',L'ㅠ',L'ㅡ',L'ㅢ',L'ㅣ' };
    wchar_t final[28] = {L' ',L'ㄱ',L'ㄲ',L'ㄳ',L'ㄴ',L'ㄵ',L'ㄶ',L'ㄷ',L'ㄹ',L'ㄺ',L'ㄻ',L'ㄼ',L'ㄽ',L'ㄾ',L'ㄿ',L'ㅀ',L'ㅁ',L'ㅂ',L'ㅄ',L'ㅅ',L'ㅆ',L'ㅇ',L'ㅈ',L'ㅊ',L'ㅋ',L'ㅌ',L'ㅍ',L'ㅎ'};




    wchar_t a[10] ;  // input 초
    wchar_t b[10] ;  // input 중
    wchar_t c[10] ;  // input 종

    wchar_t fir;//초 temp
    wchar_t mid; // 중 temp
    wchar_t fin;// 종 temp
    wchar_t result= 0xAC00; // 한글 시작 유니코드 hex -> dec = 44032

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