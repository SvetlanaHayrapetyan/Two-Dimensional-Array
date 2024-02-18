// Տրված բնական թվերի քառակուսային մատրիցի համար արտածել
// ա) վերին եռանկյան զույգ տարրերի գումարը,
#include <iostream>
using namespace std;

const int a=4;
bool isEven(int n)
{   
    if ((n%2)==0)
    {
        return true;
    }
    
    return false;
}
int main() {
    int matrix[a][a], sum=0;
    for (int i=0; i < 4; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 4; k++)
        {
            cin >> matrix[i][k];
        }
    }
    for (int i = 0; i < 4; i++)
    { 
        for (int k=i; k < a; k++)
        {
            if(isEven(matrix[i][k]))
            sum+=matrix[i][k];
        }
        
    }
      cout << sum << endl;
    
    return 0;
}



// բ) ստորին եռանկյան 3-ից մեծ և 10-ից փոքր տարրերի միջին թվաբանականը,
#include <iostream>
using namespace std;

const int a=4;
bool isTrue(int n)
{   
    if (n>3 && n<10)
    {
        return true;
    }
    
    return false;
}
int main() {
    int matrix[a][a], count=0;
    double sum=0;
    for (int i=0; i < 4; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 4; k++)
        {
            cin >> matrix[i][k];
        }
    }
    for (int i = 0; i < 4; i++)
    { 
        for (int k=0; k <= i; k++)
        {
            if(isTrue(matrix[i][k]))
            {
                sum+=matrix[i][k];
                count++;
            }
        }
        
    }
    if (count)
    {
        cout << sum/count << endl;
    }
    else
    cout << 0 << endl;
    
    return 0;
}

// գ) երկրորդական անկյունագծի այն առաջին տարրը, որի
// թվանշանների գումարը հավասար է ինչ-որ թվի ֆակտորիալի,
#include <iostream>
#include <cmath>
using namespace std;

const int a=4;
bool isFactorial(int n)
{   
    int sum=0;
    while ( n > 0)
    {
        sum=sum+(n%10);
        n/=10;
    }
    
    for (int i = 1;; i++)
    {
        if (sum%i==0)
        {
            sum/=i;
        }
        else{
            break;
        }
    }
    if (sum==1)
    {
        return 1;
    }
    return false;
}
int main() {
    int matrix[a][a];
    for (int i=0; i < 4; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 4; k++)
        {
            cin >> matrix[i][k];
        }
    }
    for (int i = 0; i < 4; i++)
    { 
        
        if(isFactorial(matrix[i][3-i]))
        {
            cout << matrix[i][3-i] << endl;
            return 0;
        }
        
    }
    cout << "there`s not such number" << endl;
    return 0;
}

// դ) գլխավոր անկյունագծի այն տարրերի գումարը, որոնց
// թվանշանների գումարը մեծ է 10-ից,
#include <iostream>
using namespace std;

const int a=4;
bool isTrue(int n)
{   
    int sum=0;
    while ( n > 0)
    {
        sum=sum+(n%10);
        n/=10;
    }
    if (sum>10)
    {
        return 1;
    }
    return false;
}
int main() {
    int matrix[a][a];
    int m=0;
    for (int i=0; i < 4; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 4; k++)
        {
            cin >> matrix[i][k];
        }
    }
    for (int i = 0; i < 4; i++)
    { 
        
        if(isTrue(matrix[i][i]))
        {
            m+=matrix[i][i];
        }
        
    }
    cout << m << endl;
    return 0;
}

// ե) գլխավոր անկյունագծից վերև գտնվող տարրերի ամենամեծ ընդհանուր բաժանարարը: 
#include <iostream>
using namespace std;

const int a=4;
int minimum(int a, int b){
    if(a>b){
        return b;
    }
    return a;
}
int gcd(int a, int b)
{
    int result = minimum(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0)
        {
            break;
        }
        result--;
    }
    return result;
}
int main() {
    int matrix[a][a];
    int m=0;
    for (int i=0; i < 4; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 4; k++)
        {
            cin >> matrix[i][k];
        }
    }
    int c=matrix[0][1];
    for (int i = 0; i < 4; i++)
    { 
        for (int k = i+1; k < 4; k++)
        {
             
            c = gcd(matrix[i][k], c); 
            if(c == 1) 
            { 
                cout << 1 << endl;
                return 0; 
            } 
        }
        
    }
    cout << c << endl;
    return 0;
}
