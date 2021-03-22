#include "all.h"

namespace EigenDemo {

int test(){
    Eigen::Matrix2d m1, m2;
    m1<<1, 2, 3, 4;
    m2<<3, 4, 5, 6;

    std::cout<<m1+m2<<std::endl;

}
}
