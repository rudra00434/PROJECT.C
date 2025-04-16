#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val)
    {
       size=size+1;
       int i=size;
       arr[i]=val;
      while(i>1)
      {
        int parent=i/2;
        if(arr[parent]<arr[i])
        {
            swap(arr[parent],arr[i]);
            i=parent;
        }
        else{
            return;
        }
      }


    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<< endl;
    }
  void deletefromHeap()
  {
    if(size==0)
    {
        cout<<"nothing to delete" << endl;
        return;
    }
    arr[1]=arr[size];
    size--;
    int i=1;
    while(i<size)
    {
        int leftindex=2*i;
        int rightindex=2*i+1;
        if(leftindex<=size && arr[i]<arr[leftindex] && arr[leftindex]>arr[rightindex])
        {
            swap(arr[i],arr[leftindex]);
            i=leftindex;
        }
        else if(rightindex<=size && arr[i]<arr[rightindex] && arr[leftindex]<arr[rightindex])
        {
            swap(arr[i],arr[rightindex]);
            i=rightindex;
        }
        else{
            return;
        }
    }
  }
};
void heapify(int arr[],int n,int i)
{
   int largest =i;
   int leftchild=2*i;
   int rightchild=(2*i+1);
   if(leftchild<=n && arr[largest]<arr[leftchild])
   {
      largest=leftchild;
   }
   if(rightchild<=n && arr[largest]<arr[rightchild])
   {
     largest=rightchild;
   }
   if(largest!=i)
   {
    swap(arr[largest],arr[i]);
    heapify(arr,n,largest);
   }
}
void heapsort(int arr[],int n)
{
  int size=n;
  while(size>1)
  {
    swap(arr[size],arr[1]);
    size--;
    heapify(arr,size,1);
  }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletefromHeap();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    cout<<"printing the array: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    heapsort(arr,n);
    cout<<"printing the sorted array: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"using priority queue here"<<endl;
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
  cout<< "element at top "<<pq.top()<<endl;
  pq.pop();
  cout<< "element at top "<<pq.top()<<endl;
 return 0;
}
