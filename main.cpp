    //OOP CA
#include <iostream>
#include <string>
using namespace std;

 //Base class
class Vehicle{
   private:
       string brand;
       string model;
       int year;

   public:
       Vehicle(string b, string m, int y){
           brand = b;
           model = m;
           year = y;

}
  //Using getters since class is private
       string getBrand(){ return brand;}
       string getModel(){ return model;}
       int getYear(){ return year;}


        virtual string Getinfo(){
            return "Brand: " + brand +", Model:" +model +", Year:" + to_string(year);
	 }

};

//Derived class Car
class Car: public Vehicle{
   private:
     int numDoors;
   public:
       Car(int n, string b, string m, int y): Vehicle (b, m, y) {
          numDoors = n;
	 }

	   string Getinfo()override{
		   return "Brand: " + getBrand() +", Model:" +getModel() +", Year:" + to_string(getYear()) +", "+ to_string(numDoors)+" "+"doors";
	   }
};
//Derived class Motorcycle
class Motorcycle: public Vehicle{
   private:
    bool hasSidecar;
   public:
       Motorcycle(int h,string b, string m, int y): Vehicle (b, m, y) {
          hasSidecar = h;
	}

	   string Getinfo()override{
	       string Sidecar = hasSidecar? "Yes":"No";
	       return "Brand: " + getBrand() +", Model:" +getModel()+", Year:" + to_string(getYear()) +" "+", Any side car?"+" "+ Sidecar;
	   }
};

//Creating objects of Car and Motorcycle
int main(){

  Car*C1 = new Car(2,"Ford","Mustang",2025);
  Motorcycle*M1 = new Motorcycle(true, "Yamaha", "MT-07", 2026) ;


  cout<<C1 -> Getinfo()<<endl;
  cout<<M1 -> Getinfo()<<endl;

return 0;
}
