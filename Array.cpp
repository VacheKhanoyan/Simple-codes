#include <iostream>
  
  int main ( ) {
      int rows_number;
      int columns_number;
      double** arr;
      int gen_cor=0;
      std::cout<< " enter rows number: "<<std::endl;
      std::cin>> rows_number;
      std::cout<< " enter columns number: " << std::endl;
      std::cin>> columns_number;
      arr = new double* [ rows_number ];
      for ( int i = 0; i < rows_number; i++) {
          arr[i] = new double [ columns_number ];
      }
      for ( int i = 0; i < rows_number; i++) {
          for (int j = 0; j < columns_number; j++) {
          std::cout<< " enter element " << "[" << i << "][" << j << "]";
          std::cin>> arr [ i ] [ j ];
          }
      }
      for ( int i = 0; i < rows_number; i++) {
          for ( int j = 0; j < columns_number; j++) {
                   gen_cor += arr [ i ] [ j ];
           }
      }
      std::cout<<gen_cor;
          for ( int i = 0; i < rows_number; i++) {
          delete [ ] arr [ i ] ;
      }
      for ( int j = 0; j < columns_number; j++) {
          delete [ ] arr[ j ];
      }
      return 0;
 }
 
