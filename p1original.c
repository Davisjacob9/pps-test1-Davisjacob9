int main(void){ 
   int n=50; 
 
   addTo(&n, 30);   //The value of n itself is changed by the function. 
 
   printf("sum = %d",n);  
   return 0; 
} 
