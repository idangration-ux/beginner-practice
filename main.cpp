#include <iostream>


   int searchfoodmenu(std::string foods[10],std::string myFood,int size,double pricefoods[10]);
   void sortfoods(std::string foods[10],int size,double pricefoods[10]);


int main()
{
    double pricefoods[10]={18.33,2,1,2,6.99,10,0.2,2.8,3.2,3.6};
    std::string foods[10]={"pizza","wali","ugali","chips","tambi","sushi","ndizi","urojo","hotdog","pilau"};
    int size =sizeof(foods)/sizeof(foods[0]);
    int sizeprice=sizeof(pricefoods)/sizeof(pricefoods[0]);
    std::string myFood;

   std::cout<<"The following is the menu of foods we serve here at our hotel: "<<'\n';
     for(int i=0; i<size; i++){
        std::cout<<"Food "<<i+1<<':'<<foods[i]<<'\n';
     }

          std::cout<<"Search for a food you like: ";
          std::getline(std::cin,myFood);


     int  index = searchfoodmenu(foods,myFood,size,pricefoods);
       if(index!=-1){
        std::cout<< myFood<<' '<<"is at index: "<<index<<'\n';
        std::cout<<"And it's price is: "<<pricefoods[index]<<"$";
       }else{
       std::cout<<"The food is not on the menu!"<<'\n';
       }
       std::cout<<std::endl;
       std::cout<<std::endl;


       std::cout<<"Sorted foods on menu with their prices"<<'\n';

       sortfoods(foods,size,pricefoods);

         for(int i=0; i<size; i++){
            std::cout<< foods[i]<<"-$"<< pricefoods[i]<<'\n';
         }
     return 0;
}
   int searchfoodmenu(std::string foods[10],std::string myFood,int size,double pricefoods[10]){
         for(int i=0; i<size; i++){
           if(myFood==foods[i]){
            return i;
    }
         }
 return -1;

}
  void sortfoods(std::string foods[5],int size,double pricefoods[5]){
      for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(foods[j]>foods[j+1]){
                std::swap(foods[j],foods[j+1]);
                std::swap(pricefoods[j],pricefoods[j+1]);
            }
        }
      }

  }
