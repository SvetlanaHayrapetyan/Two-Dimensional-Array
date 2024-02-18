// Տրված է բնական թվերի մատրից: Կառուցել և արտածել միաչափ զանգված,
// ա) որը պարունակում է մատրիցի բոլոր այն տողերի կարգահամարները, որոնցում կա 2-ի աստիճան հանդիսացող
// գոնե մեկ թիվ,
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1) {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}
int main() {
    int matrix[a][b], arr[a]={0, 0, 0};
    for (int i=0; i < 3; i++) // insert matrix
    {
      cout << "tox" << i+1 << endl;
      for (int k = 0; k < 5; k++)
      {
        cin >> matrix[i][k];
      }
    }
    for (int i = 0, num=0; i < 3; i++)
    {
      for (int k = 0; k < 5; k++)
      {
        if (isPowerOfTwo(matrix[i][k]))
        {
          arr[num]=i;
          num++;
          break;
        }
        
      }
    }
    for (int i = 0; i < a; i++)
    {
      cout << arr[i] << endl;
    }
    
    return 0;
}

// բ) որի i-րդ տարրը հավասար է true, եթե մատրիցի i-րդ
// տողի պարզ թվերը կարգավորված են նվազման կարգով,
// և հավասար է false՝ հակառակ դեպքում,
#include <iostream>
#include <cmath>
using namespace std;

const int a=3;
const int b=5;
int root(int x)
{
    if (x == 0 || x == 1){
        return x;
    }
    int i = 1, result = 1;
    while (result <= x) {
        i++;
        result = i * i;
    }
    return i - 1;
}
bool isPrime(int n)
{
    if(n<=1)
    return 0;
    for (int i = 2; i < root(n); i++)
    {
        if((n%i)==0)
        return 0;
    }
    
    return 1;
}
int main() {
    int matrix[a][b];
    bool arr[a];
    for (int i=0; i < 3; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 5; k++)
        {
            cin >> matrix[i][k];
        }
    }
    for (int i = 0, temp=0; i < 3; i++) //xist nvazox parz tver
    {
        arr[i]=true;
        for (int k = 0; k+1 < 5; k++)
        {
            if(isPrime(matrix[i][k]))
            {
              if (temp>=matrix[i][k] && temp)
              {
                arr[i]=false;
                break;
              }        
              temp=matrix[i][k];
            }
        }
        if(temp==0){
            arr[i]=false;
        }
        temp=0;
    }
    for (int i = 0; i < a; i++)
    {
      cout << arr[i] << endl;
    }
    
    return 0;
}

// գ) որի i-րդ տարրը հավասար է մատրիցի i-րդ տողի այն
// թվերի միջին թվաբանականին, որոնց հազարավորների
// թվանշանը հավասար է միավորների թվանշանին,
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
bool isEqual(int n)
{   
    if (((n/1000)%10)==(n%10) && n>999)
    {
        return true;
    }
    
    return false;
}
int main() {
    int matrix[a][b];
    double arr[a];
    for (int i=0; i < 3; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 5; k++)
        {
            cin >> matrix[i][k];
        }
    }
    for (int i = 0,sum=0, count=0; i < 3; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            if(isEqual(matrix[i][k])){
                sum+=matrix[i][k];
                count++;
            }
        }  
        if (count)
        {
            arr[i]=sum/count;
        }
        else{
            arr[i]=0;
        }
        sum=0;
        count=0;
    }
    
    for (int i = 0; i < a; i++)
    {
      cout << arr[i] << endl;
    }
    
    return 0;
}

// դ) որի i-րդ տարրը հավասար է true, եթե մատրիցի i-րդ
// սյան մեջ կա գոնե մեկ թիվ, որի 16-ական ներկայացումը
// պարունակում է E սիմվոլը, և հավասար է false՝ հակառակ դեպքում: 
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
bool containsE(int n)
{   
    for (int i = 16; n>0;)
    {
        if((n%16)==14){
            return 1;
        }
        n=n/16;
    }
    
    return false;
}
int main() {
    int matrix[a][b];
    bool arr[b];
    for (int i=0; i < 3; i++) // insert matrix
    {
        cout << "tox" << i+1 << endl;
        for (int k = 0; k < 5; k++)
        {
            cin >> matrix[i][k];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i]=false;
        for (int k = 0; k < 3; k++)
        {
            if (containsE(matrix[k][i]))
            {
                arr[i]=true;
                break;
            }
        }
        
    }
    
    for (int i = 0; i < b; i++)
    {
      cout << arr[i] << endl;
    }
    
    return 0;
}
