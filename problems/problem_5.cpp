float problemSolution5(float x, char operation, float y) {
   float result;
   // write your code here

   if (operation == '+'){
       result = x + y;
   } else if (operation == '-'){
       result = x - y;
   } else if (operation == '*'){
       result = x * y;
   } else if (operation == '/'){
       result = x / y;
   } else result = 0;

   return result;
}
