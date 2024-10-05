#include <iostream>
using namespace std;
int main()
{

    char Q1[100] = " Q1 Which is the capital of Pakistan ?";
    char op1[100] = " (a) Islamabad (b) Lahore (c)Karachi (D) Multan";
    char Q2[100] = " Q2 Which is the largest city of Pakistan ? ";
    char op2[100] = " (a) Islamabad (b) Lahore (c)Karachi (D) Multan";
    char Q3[100] = " Q3 Which is the largest city of Punjab ? ";
    char op3[100] = " (a) Islamabad (b) Lahore (c)Karachi (D) Multan";
    char Q4[100] = " Q4 Who is the founder of Pakistan ? ";
    char op4[100] = " (a) Quaid-e-Azam (b) Allama Iqbal (c) Sir syed Ahmad(D) Gandhi ";
    char Q5[100] = " Q5 Which is the highest peak of Pakistan ? ";
    char op5[100] = " (a) Hamaliya (b) Nanga Perbat (c) K2 (D) Mounteverest ";
    char vans[5] = {'a', 'c', 'b', 'a', 'c'}; // saved answer
    char sans[25];                            // use for enter answer of students
    int roll[5] = {0};                        // use for roll number
    int Q[5] = {1, 2, 3, 4, 5};               // use for question marking
    char st1[5];
    char st2[5];
    char st3[5]; // all use for students answer respectively .
    char st4[5];
    char st5[5];
    int m1 = 0;
    int m2 = 0;
    int m3 = 0; // all use for students marks respectively
    int m4 = 0;
    int m5 = 0;
    int m = 0;
    char sp[5] = {0}; // percentage of students
    int c = 0;
    int j = 0;
    char H = 0;         // use for starting quiz
    int check[5] = {0}; // use for checking how much student missed.
    cout << "                 ITC Project           \n";

    for (int q = 0; q < 5; q++)
    {
        cout << "                 ONLINE Quiz           \n";
        cout << "     LET STARTS QUIZ                   \n";
        cout << " Press  ' Y ' for start the Quiz       \n";
        cin >> H;
        cout << "Student " << q + 1 << " :Enter your 2 digit roll number    : ";
        cin >> roll[q];
        cout << Q1 << endl;
        cout << op1 << endl;
        cin >> sans[m];
        m += 1;
        cout << Q2 << endl;
        cout << op2 << endl;
        cin >> sans[m];
        m += 1;
        cout << Q3 << endl;
        cout << op3 << endl;
        cin >> sans[m];
        m += 1;
        cout << Q4 << endl;
        cout << op4 << endl;
        cin >> sans[m];
        m += 1;
        cout << Q5 << endl;
        cout << op5 << endl;
        cin >> sans[m];
        m += 1;
        cout << endl;
        cout << "Quiz completed  of  Student no  " << q + 1 << endl;
        cout << endl;
        cout << endl;
    }
    int t = 5;
    int r = 10;
    int e = 15;
    int w = 20;
    for (int p = 0; p < 5; p++)
    {
        st1[p] = sans[p];
        st2[p] = sans[t];
        st3[p] = sans[r];
        st4[p] = sans[e];
        st5[p] = sans[w];
        t += 1;
        r += 1;
        e += 1;
        w += 1;
    }
    for (int u; u < 5; u++)
    {
        if (st1[u] == vans[u])
        {
            m1 += 20;
        }
        if (st2[u] == vans[u])
        {
            m2 += 20;
        }
        if (st3[u] == vans[u])
        {
            m3 += 20;
        }
        if (st4[u] == vans[u])
        {
            m4 += 20;
        }
        if (st5[u] == vans[u])
        {
            m5 += 20;
        }
    }
    for (int Y = 0; Y < 5; Y++)
    {
        if (st1[Y] == vans[Y])
        {
            check[Y] += 1;
        }
        if (st2[Y] == vans[Y])
        {
            check[Y] += 1;
        }
        if (st3[Y] == vans[Y])
        {
            check[Y] += 1;
        }
        if (st4[Y] == vans[Y])
        {
            check[Y] += 1;
        }
        if (st5[Y] == vans[Y])
        {
            check[Y] += 1;
        }
    }

    cout << "Students answer are as follow : " << endl;
    cout << endl;
    cout << endl;
    cout << " Student ID Q1 Q2 Q3 Q4 Q5 " << endl;
    cout << "         " << roll[0] << " " << st1[0] << "  " << st1[1] << "  " << st1[2] << "  " << st1[3] << "  " << st1[4] << endl;
    cout << "         " << roll[1] << " " << st2[0] << "  " << st2[1] << "  " << st2[2] << "  " << st2[3] << "  " << st2[4] << endl;
    cout << "         " << roll[2] << " " << st3[0] << "  " << st3[1] << "  " << st3[2] << "  " << st3[3] << "  " << st3[4] << endl;
    cout << "         " << roll[3] << " " << st4[0] << "  " << st4[1] << "  " << st4[2] << "  " << st4[3] << "  " << st4[4] << endl;
    cout << "         " << roll[4] << " " << st5[0] << "  " << st5[1] << "  " << st5[2] << "  " << st5[3] << "  " << st5[4] << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "EXAM REPORT" << endl;
    cout << endl;
    cout << "Answer Key" << endl;
    for (int y = 0; y < 5; y++)
    {
        cout << "Q" << Q[y] << " ";
        cout << vans[y] << " | ";
    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << endl;

    cout << " Questions  ";
    for (int X = 0; X < 5; X++)
    {
        cout << "Q" << Q[X] << " | ";
    }
    cout << endl;
    cout << " missed by  ";
    for (int X = 0; X < 5; X++)
    {
        cout << 5 - check[X] << "  | ";
    }
    cout << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << endl;
    cout << "Students score : " << endl;
    cout << endl;
    cout << "Student ID Marks % " << endl;
    cout << "      " << roll[0] << "     " << m1 << " %" << endl;
    cout << "      " << roll[1] << "     " << m2 << " %" << endl;
    cout << "      " << roll[2] << "     " << m3 << " %" << endl;
    cout << "      " << roll[3] << "     " << m4 << " %" << endl;
    cout << "      " << roll[4] << "     " << m5 << " %" << endl;

    sp[0] = m1;
    sp[1] = m2;
    sp[2] = m3;
    sp[3] = m4;
    sp[4] = m5;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "S. IDs" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << " " << roll[i] << "  " << "|";
        if (i == c)
        {
            if (sp[j] == 20)
            {
                cout << " " << "******";
                j += 1;
            }
            else if (sp[j] == 40)
            {
                cout << " " << "*************";
                j += 1;
            }
            else if (sp[j] == 60)
            {
                cout << " " << "********************";
                j += 1;
            }
            else if (sp[j] == 80)
            {
                cout << " " << "***************************";
                j += 1;
            }
            else if (sp[j] == 100)
            {
                cout << " " << "***********************************";
                j += 1;
            }
            else
            {
                j += 1;
            }
            c++;
        }
        cout << endl;
    }

    cout << "     " << "|_____________________________________" << endl;
    cout << "     " << "0     20     40     60     80     100" << endl;

    cout << "               Score %  ";

    return 0;
}
