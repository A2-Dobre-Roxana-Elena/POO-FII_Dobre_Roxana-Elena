#include <stdio.h>
#include <cstring>
#include <iostream>
#pragma warning(disable: 4996)
using namespace std;
char m_str[10][20];

int main()
{
    char  str[100], aux[20];
    scanf("%[^\n]s",str);                   ///citesc sirul de caractere
    int i, im = 0,j;
    char* p;
    p = strtok(str, " ");
    while (p != NULL)                      /// impart sirul in cuvinte
    {
        for (i = 0; i < strlen(p) ; i++)        /// si le stochez intr-o matrice de caractere
        {
            m_str[im][i] = p[i];            
        }
        im++;
        p = strtok(NULL, " ");
    }

    for (int i = 0; i < im; i++)           ///sortez matricea de caractere
    {
        for (int j = i + 1; j <= im; j++)
        {
            if (strlen(m_str[i]) < strlen(m_str[j]))        /// in functie de lungimea cuvintelor
            {   strcpy(aux, m_str[i]);
                strcpy(m_str[i], m_str[j]);
                strcpy(m_str[j], aux);
            }
            if (strlen(m_str[i]) == strlen(m_str[j]))       /// in ordine alfabetica pentru cuvintele de aceeasi lungime
                {
                    if(strcmp(m_str[i],m_str[j])>0)
                    {
                        strcpy(aux, m_str[i]);
                        strcpy(m_str[i], m_str[j]);
                        strcpy(m_str[j], aux);
                    }
                }
            
        }
    }
 
    for (i = 0; i <= im; i++)
    {
        cout << m_str[i] << " ";
    }
    cout << endl;

    return 0;
}

