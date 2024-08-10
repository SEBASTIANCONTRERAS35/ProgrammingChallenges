#include <iostream>
#include <vector>

// Aquí va la función 'solution'
bool solution(std::vector<std::vector<bool>> roadRegister) {
        bool condicion=true;
        for (int i=0;i<roadRegister.size()&&condicion==true;i++){
            int roads=roadRegister[i].size();
            for (int j=0;j<roadRegister[i].size();j++){
                if (roadRegister[i][j]==false){
                    roads--;
                }
                if (roads==0){
                    condicion=false;
                }
            }
        }
        return condicion;
    }



/*int main() {
    std::vector<std::vector<bool>> roadRegister = {
            {false,true,false},
            {false,false,false},
            {true,false,false}
    };

    bool result = solution(roadRegister);

    if (result) {
        std::cout << "La condición se cumple." << std::endl;
    } else {
        std::cout << "La condición no se cumple." << std::endl;
    }

    return 0;
}
*/