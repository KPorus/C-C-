#include <iostream>

bool matchPattern(const std::string &pattern, const std::string &text)
{
    int pLen = pattern.length();
    int tLen = text.length();
    int pIndex = 0;
    int tIndex = 0;

    while (pIndex < pLen && tIndex < tLen)
    {
        if (pattern[pIndex] == '^')
        {
            pIndex++;
            continue;
        }
        if (pattern[pIndex] == '[' && pattern[pIndex + 1] == '^')
        {
            if (pattern[pIndex + 2] == text[tIndex])
            {
                return false;
            }
            pIndex += 3;
            continue;
        }
        if (pattern[pIndex] == '[')
        {
            bool matchFound = false;
            while (pattern[pIndex] != ']')
            {
                if (pattern[pIndex] == text[tIndex])
                {
                    matchFound = true;
                    break;
                }
                pIndex++;
            }
            if (!matchFound)
            {
                return false;
            }
            pIndex++;
            continue;
        }
        if (pattern[pIndex] == '*')
        {
            while (pattern[pIndex] == '*')
            {
                pIndex++;
            }
            if (pIndex == pLen)
            {
                return true;
            }
            while (tIndex < tLen)
            {
                if (matchPattern(pattern.substr(pIndex), text.substr(tIndex)))
                {
                    return true;
                }
                tIndex++;
            }
            return false;
        }
        if (pattern[pIndex] == '+')
        {
            while (pattern[pIndex] == '+')
            {
                pIndex++;
            }
            if (pIndex == pLen)
            {
                return true;
            }
            bool matchFound = false;
            while (tIndex < tLen)
            {
                if (matchPattern(pattern.substr(pIndex), text.substr(tIndex)))
                {
                    matchFound = true;
                    break;
                }
                tIndex++;
            }
            if (!matchFound)
            {
                return false;
            }
            tIndex++;
            continue;
        }
        if (pattern[pIndex] == '?')
        {
            if (matchPattern(pattern.substr(pIndex + 1), text.substr(tIndex)))
            {
                return true;
            }
            pIndex++;
            continue;
        }
        if (pattern[pIndex] == '{')
        {
            int closeBraceIndex = pattern.find('}', pIndex);
            std::string countStr = pattern.substr(pIndex + 1, closeBraceIndex - pIndex - 1);
            if (countStr.find(',') != std::string::npos)
            {
                int commaIndex = countStr.find(',');
                int minCount = std::stoi(countStr.substr(0, commaIndex));
                int maxCount = std::stoi(countStr.substr(commaIndex + 1));
                int totalCount = tIndex;
                while (tIndex < tLen && totalCount < maxCount)
                {
                    totalCount++;
                    tIndex++;
                }
                if (totalCount < minCount || totalCount > maxCount)
                {
                    return false;
                }
            }
            else
            {
                int count = std::stoi(countStr);
                int totalCount = tIndex;
                while (tIndex < tLen && totalCount < count)
                {
                    totalCount++;
                    tIndex++;
                }
                if (totalCount != count)
                {
                    return false;
                }
            }
            pIndex = closeBraceIndex + 1;
            continue;
        }
        if (pattern[pIndex] != text[tIndex])
        {
            return false;
        }
        pIndex++;
        tIndex++;
    }

    if (pIndex == pLen && tIndex == tLen)
    {
        return true;
    }

    return false;
}

void checkRegularExpression(int n, const std::string *patterns, int m, const std::string *strings, int *results)
{
    for (int i = 0; i < m; i++)
    {
        bool matched = false;
        for (int j = 0; j < n; j++)
        {
            if (matchPattern(patterns[j], strings[i]))
            {
                results[i] = j + 1;
                matched = true;
                break;
            }
        }
        if (!matched)
        {
            results[i] = 0;
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    std::string *patterns = new std::string[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> patterns[i];
    }

    int m;
    std::cin >> m;

    std::string *strings = new std::string[m];
    for (int i = 0; i < m; i++)
    {
        std::cin >> strings[i];
    }

    int *results = new int[m];
    checkRegularExpression(n, patterns, m, strings, results);

    for (int i = 0; i < m; i++)
    {
        if (results[i])
        {
            std::cout << "YES, " << results[i] << std::endl;
        }
        else
        {
            std::cout << "NO, 0" << std::endl;
        }
    }

    delete[] patterns;
    delete[] strings;
    delete[] results;

    return 0;
}
