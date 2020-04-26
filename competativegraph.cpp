#include<iostream>
#include<list>
using namespace std;

class Graph{
	int V;
	
	//Array of list
	list<int> *l;	
 public:
   Graph(int V){
   	this->V = V;
   	l = new list<int>[V];	
   }
   
   void edgelist(int x,int y){
   	l[x].push_back(y);
   	l[y].push_back(x);
   }	
	void printAdjlist(){
		//iterator all over the vertices
		for(int i=0;i<=V;i++){
			cout<<"vertex"<<i<<"->";
			for(int nbr:l[i]){
				cout<<nbr<<",";			
			}
			cout<<endl;
		}	
	}
};
int main(){
	
	Graph g(4);
	g.edgelist(0,1);
	g.edgelist(0,2);
	g.edgelist(2,3);
	g.edgelist(1,2);	
	return 0;
}
