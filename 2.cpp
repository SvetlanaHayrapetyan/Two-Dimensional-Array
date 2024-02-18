// Տրված է իրական թվերի մատրից: Արտածել մատրիցի
// ա) բոլոր տարրերի գումարը,
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
int main() {
    double matrix[a][b];
    double sum=0;
    for (int i=0; i < 3; i++) // insert matrix
    {
      cout << "tox" << i+1 << endl;
      for (int k = 0; k < 5; k++)
      {
        cin >> matrix[i][k];
      }
    }

    for (int i = 0; i < 3; i++)
    {
      for (int k = 0; k < 5; k++)
      {
          sum+=matrix[i][k];
      }
      
    } 
    cout << sum << endl;
    return 0;
}


// բ) բոլոր տողերի տարրերի գումարները,
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
int main() {
    double matrix[a][b];
    double line1=0, line2=0, line3=0;
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
      line1+=matrix[0][i];
    }
    for (int i = 0; i < 5; i++)
    {
      line2+=matrix[1][i];
    }
    for (int i = 0; i < 5; i++)
    {
      line3+=matrix[2][i];
    }
    
    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    return 0;
}


// գ) այն տողերի քանակը, որոնց բոլոր տարրերը մեծ են 5-ից,
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
int main() {
    double matrix[a][b];
    double sum=0, count=0;
    for (int i=0; i < 3; i++) // insert matrix
    {
      cout << "tox" << i+1 << endl;
      for (int k = 0; k < 5; k++)
      {
        cin >> matrix[i][k];
      }
    }

    for (int i = 0; i < 3; i++)
    {
      for (int k = 0; k < 5; k++)
      {
          if(matrix[i][k]<5){
          count=0;
          break;
          }
          count=1;
      }
      sum+=count;
    } 
    cout << sum << endl;
    return 0;
}

// դ) այն տողերի քանակը, որոնցում չկան կրկնվող տարրեր,
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
int main() {
    double matrix[a][b];
    int sum=0;
    for (int i=0; i < 3; i++) // insert matrix
    {
      cout << "tox" << i+1 << endl;
      for (int k = 0; k < 5; k++)
      {
        cin >> matrix[i][k];
      }
    }

    for (int i = 0; i < 3; i++)
    {
      for (int k = 0; k < 5; k++)
      {
          for (int c = k+1; c < 5; c++)
          {
             if (matrix[i][k]==matrix[i][c])
             {
              sum++;
              break;
             } 
          }
          
      }

      
    } 
    cout << sum << endl;
    return 0;
}


// ե) այն տողերի տարրերի գումարները, որոնցում բոլոր
// տարրերը մեծ են 5-ից,
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
int main() {
    double matrix[a][b];
    double sum=0, temp=0;
    for (int i=0; i < 3; i++) // insert matrix
    {
      cout << "tox" << i+1 << endl;
      for (int k = 0; k < 5; k++)
      {
        cin >> matrix[i][k];
      }
    }

    for (int i = 0; i < 3; i++)
    {
      for (int k = 0; k < 5; k++)
      {
          if(matrix[i][k]<5){
          temp=0;
          break;
          }
          temp+=matrix[i][k];
      }
      sum+=temp;
      temp=0;
    } 
    cout << sum << endl;
    return 0;
}
// զ) բոլոր տողերի նվազագույն տարրերից մեծագույնը: 
#include <iostream>
using namespace std;

const int a=3;
const int b=5;
int main() {
    double matrix[a][b];
    double c;
    for (int i=0; i < 3; i++) // insert matrix
    {
      cout << "tox" << i+1 << endl;
      for (int k = 0; k < 5; k++)
      {
        cin >> matrix[i][k];
      }
    }
    double max=matrix[0][0];
    for (int i = 0; i < 3; i++)
    {
      c=matrix[i][0];
      for (int k = 1; k < 5; k++)
      {
          if (c<matrix[i][k])
          c=matrix[i][k];
      }
      if (max<c)
      max=c;
    }
    cout << max << endl;
    return 0;
}
