#include<iostream>
using namespace std;
class BigHeap{
	private: int heap[10005],size;
	public: void up(int p){
		while(p>1) if(heap[p]>heap[p/2]) swap(heap[p],heap[p/2]),p/=2;
		else break;
	}
	public: void insert(int p){
		heap[++size]=p;
		up(size);
	}
	public: void down(int p){
		int s=p*2;
		while(s<=size){
			if(s<size&&heap[s]<heap[s+1]) ++s;
			if(heap[s]>heap[p]) swap(heap[s],heap[p]),p=s,s=p*2;
			else break;
		}
	}
	public: void pop(){
		heap[1]=heap[size--];
		down(1);
	}
	public: int top(){
		return heap[1];
	}
}bh;
class SmallHeap{
	private: int heap[10005],size;
	public: void up(int p){
		while(p>1) if(heap[p]<heap[p/2]) swap(heap[p],heap[p/2]),p/=2;
		else break;
	}
	public: void insert(int p){
		heap[++size]=p;
		up(size);
	}
	public: void down(int p){
		int s=p*2;
		while(s<=size){
			if(s<size&&heap[s]<heap[s+1]) ++s;
			if(heap[s]<heap[p]) swap(heap[s],heap[p]),p=s,s=p*2;
			else break;
		}
	}
	public: void pop(){
		heap[1]=heap[size--];
		down(1);
	}
	public: int top(){
		return heap[1];
	}
}sh;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		int tp;
		cin>>tp;
		bh.insert(tp);
	}
	for(int i=1;i<=n;++i){
		cout<<bh.top()<<endl;
		bh.pop();
	}
	return 0;
}
