#include <string>

std::string problemSolution3(char S, float height) {
    // write your code here

    if (S == 'M' && height < 1.70)
        return "Short";
    else if (S == 'M' && (height >= 1.70 || height < 1.85))
        return "Normal";
    else if (S == 'M' && (height >= 1.85))
        return "Tall";
    else if (S == 'F' && height < 1.60)
        return "Short";
    else if (S == 'F' && (height >= 1.60 || height < 1.75))
        return "Normal";
    else if (S == 'F' && (height >= 1.75))
        return "Tall";
    else return "Not Recognized";


    // use return to return your result
    // make use of control flow statements
}
//if (S == 'M'){
//if (height < 1.70){
//return "Short";
//} else if (height >= 1.70 || height < 1.85){
//return "Normal";
//} else return "Tall";
//} else if (S == 'F'){
//if (height < 1.60){
//return "Short";
//} else if (height >= 1.60 || height < 1.75){
//return "Normal";
//} else return "Tall";
//} else {
//return "Not Human";
//}