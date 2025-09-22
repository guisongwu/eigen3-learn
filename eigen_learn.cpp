/* Eigen支持多种矩阵类型，其命名规则清晰易懂，能让用户快速判断数据类型。
 * 例如，“d”代表double类型，“f”代表float类型，“i”代表整数，“c”代表复数。
 * 像Matrix2f就表示一个2×2维、元素为float类型的矩阵。
 * 在数值运算方面，它涵盖了矩阵的加减乘除、求逆、特征值分解、奇异值分解
 * 等各种高效的线性代数运算，为科学计算提供了全面的支持。 
 */
#include <iostream>
#include <cstdio>
#include <cstdarg>
#include <cmath>
#include <vector>
#include <Eigen/Dense>


using namespace std;
using namespace Eigen;

using RealMat = Eigen::MatrixXd;
using RealVec = Eigen::VectorXd;


int main(int argc, char **argv) {
    // -------------------------------- Declaration and Assignment -------------------------------
    // 固定尺寸矩阵声明
    Eigen::Matrix3d fixedMatrix;
    // 动态矩阵声明
    Eigen::MatrixXd dynamicMatrix(2, 3);
    std::cout << "Fixed matrix rows: " << fixedMatrix.rows() << ", cols: " << fixedMatrix.cols() << std::endl;
    std::cout << "Dynamic matrix rows: " << dynamicMatrix.rows() << ", cols: " << dynamicMatrix.cols() << std::endl;

    Eigen::Matrix3f m;
    m << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;
    std::cout << "Matrix initialized by comma:\n" << m << std::endl;

	// ----------------------------------------- MatrixXd ----------------------------------------
    /* MatrixXd m(2, 2); */
    /* m(0, 0) = 3; */
    /* m(1, 0) = 2.5; */
    /* m(0, 1) = -1; */
    /* m(1, 1) = m(1, 0) + m(0, 1); */
    /* std::cout << m << std::endl; */

	return 0;


}

		

	


