#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

class Node{
   public:
      char name;
      int value;
      bool is_leaf;

   std::vector<Node *> chidren;
   public:
      Node(int v){ 
         this->value = v;
         this->is_leaf= false;
      };
      Node(int v, bool is_leaf){ 
         this->value = v;
         this->is_leaf=is_leaf;
      };
      Node(int v, char name, bool is_leaf){
         this->value=v;
         this->name=name;
         this->is_leaf=is_leaf;
      }
};
int cnt=0;

Node *create_tenary_tree_from_array(){
   //Knuth's 1975 paper's example
   queue<int> q({3,1,4, 1,5,9, 2,6,5, 3,5,8, 9,7,9, 3,2,3, 8,4,6, 
   2,6,4, 3,3,8, 3,2,7, 9,5,0, 2,8,8, 4,1,9, 7,1,6, 9,3,9, 9,3,7, 5,1,0, 
   5,8,2, 0,9,7, 4,9,4, 4,5,9, 2,3,0, 7,8,1, 6,4,0, 6,2,8, 6,2,0, 8,9,9});
   queue<Node*> Q;
   cout<<q.size()<<"\n";
   Node *n;
   while(!q.empty() || !Q.empty()){
      int v1, v2, v3;
      Node *n1, *n2, *n3; 
      if(Q.size()==1 && q.empty()) break;
      if(!q.empty()){
         v1=q.front(); 
         q.pop();
         v2=q.front(); 
         q.pop();
         v3=q.front(); 
         q.pop();
         n1=new Node(v1, ' ', true);
         n2=new Node(v2, ' ', true);
         n3=new Node(v3, ' ', true);
      } else {
         n1=Q.front(); 
         Q.pop();
         n2=Q.front(); 
         Q.pop();
         n3=Q.front(); 
         Q.pop();
      }
      n=new Node(-1, ' ', false);
      n->chidren=vector<Node*>({n1, n2, n3});
      Q.push(n);
   }
   return n;
}
void pre_order(Node *root){
   if(root->is_leaf) cout<<root->value<<" ";
   else {
      for(Node *c:root->chidren){
         pre_order(c);
      }
   } 
}

int F1(Node *p, int bound){
   std::cout<<"p.value "<<p->value<<"\n";
   if (p->is_leaf) {
      cnt++;
      return p->value;
   }
   int best=INT32_MAX/2;
   for(Node *c:p->chidren){
      int t=F1(c, -best);
      if(t<best){
         best=t;
      }
      if(best <= bound){
         break;
      }
   }
   return -best;
}
int F2(Node *p, int a, int b){
   if(p->is_leaf){
      cnt++;
      return p->value;
   } 
   int best=b;
   for(Node *c:p->chidren){
      int t=F2(c, -best, -a);
      if(t<best){
         best=t;
      }
      if(best<=a){
         break;
      }
   }
   return -best;
}

int main()
{
   //Node *r=create2();
   Node *root=create_tenary_tree_from_array();
   pre_order(root);
   cout<<"\n\n";
   int x=F1(root, -INT32_MAX/2);
   std::cout<<"best: "<<x<<std::endl;
   std::cout<<"cnt: "<<cnt <<std::endl;
   cnt=0;
   x=F2(root, -INT32_MAX/2, INT32_MAX/2);
   std::cout<<"F2 best:"<<x<<std::endl;
   std::cout<<"cnt: "<<cnt<<"\n";
   return 0;
}
