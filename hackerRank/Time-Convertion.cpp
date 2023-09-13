#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int hh, mm, ss;
    string ampm;

    sscanf(s.c_str(), "%d:%d:%d%s", &hh, &mm, &ss, &ampm[0]);

    string unit = s.substr(s.size() - 2);

    if (unit == "PM" && hh != 12)
    {
        hh += 12;
    }
    else if (unit == "AM" && hh == 12)
    {
        hh = 0;
    }

    char result[9];
    sprintf(result, "%02d:%02d:%02d", hh, mm, ss);

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
