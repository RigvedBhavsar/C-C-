//This is demonstration C++ programs
#include<iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int iSize;

public:
    Array(int iValue = 10)
    {
        cout<<"Inside Constrctor\n";
        this->iSize=iValue;
        this->Arr=new int [iSize];
    }
    Array(Array &ref)
    {
        cout<<"Inside Reference Constrctor";
        this->iSize=ref.iSize;
        this->Arr=new int [this->iSize];

        for(int i=0;i<iSize;i++)
        {
            this->Arr[i]=ref.Arr[i];
        }
    }

    ~Array()
    {
        cout<<"Inside Destructor\n";
        delete []Arr;
    }

    inline void Accept();
    inline void Display();

};

void Array::Accept()
{
    cout<<"Enter Elemeets";

    for(int i=0;i<this->iSize;i++)
    {
        cin>>Arr[i];
    }
}

void Array::Display()
{
    cout<<"Elements are \n";

    for(int i=0;i<this->iSize;i++)
    {
        cout<<Arr[i]<<" ";
        cout<<"\n";
    }
}

class ArrSearch : public Array      //Inheriting the class publicly 
{
    public:
    ArrSearch(int no =10): Array(no)
    {}
    
    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch :: Frequency(int value)
{
    int iCnt=0;
    
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]==value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: SearchFirst(int value)
{
    int i=0;
    for(i=0;i<iSize;i++)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==iSize)
    {
        return -1;
    }
    else
    {
        return i;
    }
    
}

int ArrSearch :: SearchLast(int value)
{
    int i=0;
    for(i=iSize;i>0;i--)
    {
        if(Arr[i]==value)
        {
            break;
        }
    }
    if(i==0)
    {
        return -1;
    }
    else
    {
        return i;
    }   
}

int ArrSearch :: EvenCount()
{
    int iCnt=0;

    for(int i=0;i<iSize;i++)
    {
        if((Arr[i] %2)==0)
        {
            iCnt++;
        }
    }
    return iCnt;
} 

int ArrSearch :: OddCount()
{
    int iCnt=0;

    for(int i=0;i<iSize;i++)
    {
        if((Arr[i] %2) !=0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int ArrSearch :: SumAll()
{
    int iSum=0;

    for(int i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i];
    }
    return iSum;
}

int main()
{
    cout<<"Inside Main";
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iRet=sobj1.Frequency(11);
    cout<<"Frequencuy is "<<iRet<<endl;
    
    
    
    return 0;
}