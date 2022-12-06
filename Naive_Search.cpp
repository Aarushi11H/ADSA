//  naive pattern search
  #include <bits/stdc++.h>
using namespace std;

void search(string pat, string txt)
{
    int M = pat.length(), N = txt.length();

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M)
            cout << "Pattern found at index " << i << endl;
    }
}

int main()
{
    cout << "Enter the text: ";
    string txt;
    cin >> txt;
    cout << "Enter the pattern: ";
    string pat;
    cin >> pat;
    search(pat, txt);
    return 0;
}
