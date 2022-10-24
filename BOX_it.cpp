// #include<bits/stdc++.h>

// using namespace std;
// class Box
// {
//     private:
//         int l, b, h;
//     public:
//         Box(): l(0) ,b(0) ,h(0)
//         {}
//         Box(int i, int j, int k): l(i) ,b(j) ,h(k)
//         {}
//         Box(Box& B) 
//         {
//             l = B.l;
//             b = B.b;
//             h = B.h;
//         }
//         int getLength()
//         {
//             return l;
//         }
//         int getBreadth()
//         {
//             return b;
//         }
//         int getHeight()
//         {
//             return h;
//         }
//         long long CalculateVolume()
//         {
//             return static_cast<long>(l)*static_cast<long>(b)*static_cast<long>(h);
//         }
//         bool operator < (Box) const;
//         friend ostream & operator << (ostream &out,const Box &B)
//         {
            
//             out<<B.l<<" "<<B.b<<" "<<B.h;
//             return out;
//         }
// };  

// bool Box::operator < (Box B) const
// {
//     if(l<B.l)
//     {
//         return true;
//     }
//     else if(b<B.b && l == B.l)
//     {
//         return true;
//     }
//     else if(h<B.h && b==B.b && l==B.l)
//     {
//         return true;
//     }
//     else {
//         return false;
//     }
// }
class Box {
  private:
  int l,b,h;
  public:
  Box(){
      l=0,b=0,h=0;
  }  
   Box(int length, int breadth, int height){
       l=length;
       b=breadth;
       h=height;
   }
   Box(Box& ba){
       this->l =ba.l;
       this->b =ba.b;
       this->h =ba.h;    
   }
   int getLength(){
       return this->l;
   }
   int getBreadth(){
       return this->b;
   }
   
   int getHeight(){
       return this->h;
   }
   long long CalculateVolume(){
      return l*b*h; 
   }
   bool operator< (Box& B) {
      if((this->l < B.l)||((this->b < B.b) && (this->l == B.l))||((this->h < B.h)&&(this->b == B.b) && (this->l == B.l))){
         return true; 
      } 
      return false;
   }
   friend ostream & operator << (ostream &out, Box &c);
   //friend istream & operator >> (istream &in, Box &c);
};

ostream & operator << (ostream &out, Box &c){
    out << c.l << " " << c.b << " " <<c.h;
    return out;
}