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


int main(int argc, char **argv) {
	// -------------------------------------- Example 1 -----------------------------------------
	// Matrix3d m = Matrix3d::Random();
	// m = (m + Matrix3d::Constant(1.2)) * 50;
	// std::cout << "m =" << std::endl << m << std::endl;
	// Vector3d v(1, 2, 3);
	// // Vector3d v;
	// // v << 1,2,3;
	// std::cout << "m * v =" << std::endl << m * v << std::endl;
	// Matrix3d m(1,2,3,4,5,6,7,8,9);
	// cout << m << endl;



	// --------------------------------------- Example 2 ----------------------------------------
	// MatrixXd m = MatrixXd::Random(3, 3);
	// m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
	// std::cout << "m =" << std::endl << m << std::endl;
	// VectorXd v(3);
	// v << 1, 2, 3;
	// std::cout << "m * v =" << std::endl << m * v << std::endl;

	// -------------------------------------- size and resize ------------------------------------
	// Eigen::MatrixXd m(2, 5);
	// m.resize(4, 3);
	// std::cout << "The matrix m is of size " << m.rows() << "x" << m.cols() << std::endl;
	// std::cout << "It has " << m.size() << " coefficients" << std::endl;
	// Eigen::VectorXd v(2);
	// v.resize(5);
	// std::cout << "The vector v is of size " << v.size() << std::endl;
	// std::cout << "As a matrix, v is of size " << v.rows() << "x" << v.cols() << std::endl;
    //

	// -------------------------------------- matrix arithmetic ----------------------------------
	// Eigen::Matrix2d a;
	// a << 1, 2, 3, 4;
	// Eigen::MatrixXd b(2, 2);
	// b << 2, 3, 1, 4;
	// Eigen::Vector2d c(1., 2.);
	// std::cout << "a + b =\n" << a + b << std::endl; // Addition
	// std::cout << "a - b =\n" << a - b << std::endl; // Subtraction
	// std::cout << "a * 2.5 =\n" << a * 2.5 << std::endl; // Scalar multiplication
    //
	// MatrixXcf a = MatrixXcf::Random(2, 2);
	// cout << "Here is the matrix a\n" << a << endl;
	// cout << "Here is the matrix a^T\n" << a.transpose() << endl; // Transposition
	// cout << "Here is the conjugate of a\n" << a.conjugate() << endl; // Conjugation
	// cout << "Here is the matrix a^*\n" << a.adjoint() << endl;
    //
	// cout << "mul of a and b\n" << a * b << endl; // Matrix multiplication
	// cout << "mul of a and c\n" << a * c << endl; // Matrix-vector multiplication
    //
	// Eigen::Vector3d v(1, 2, 3);
	// Eigen::Vector3d w(0, 1, 2);
	// std::cout << "Dot product: " << v.dot(w) << std::endl; // Inner product
	// double dp = v.adjoint() * w;  // automatic conversion of the inner product to a scalar
	// std::cout << "Dot product via a matrix product: " << dp << std::endl;
	// std::cout << "Cross product:\n" << v.cross(w) << std::endl; // cross product
	

	// ------------------------------------- linear solve ---------------------------------------
	// Eigen::Matrix3f A;
	// Eigen::Vector3f b;
	// A << 1, 2, 3, 4, 5, 6, 7, 8, 10;
	// b << 3, 3, 4;
	// Eigen::Vector3f x = A.colPivHouseholderQr().solve(b);
	// std::cout << "The solution is:\n" << x << std::endl;




    // -------------------------------- Declaration and Assignment -------------------------------
    /* // 固定尺寸矩阵声明 */
    /* Eigen::Matrix3d fixedMatrix; */
    /* // 动态矩阵声明 */
    /* Eigen::MatrixXd dynamicMatrix(2, 3); */
    /* std::cout << "Fixed matrix rows: " << fixedMatrix.rows() << ", cols: " << fixedMatrix.cols() << std::endl; */
    /* std::cout << "Dynamic matrix rows: " << dynamicMatrix.rows() << ", cols: " << dynamicMatrix.cols() << std::endl; */
    /* Eigen::Matrix3f m; */
    /* m << 1, 2, 3, */
    /*      4, 5, 6, */
    /*      7, 8, 9; */
    /* std::cout << "Matrix initialized by comma:\n" << m << std::endl; */

	// ----------------------------------------- MatrixXd ----------------------------------------
	// MatrixXd m(2, 2);
	// m(0, 0) = 3;
	// m(1, 0) = 2.5;
	// m(0, 1) = -1;
	// m(1, 1) = m(1, 0) + m(0, 1);
	// std::cout << m << std::endl;

	// --------------------------------------- Special Matrix ------------------------------------
    /* 特殊矩阵生成函数则能快速生成特定类型的矩阵。
	 * Zero()函数可生成全零矩阵，
	 * Identity()函数能生成单位矩阵，
	 * Random()函数会生成随机矩阵。*/
    /* Eigen::Matrix3d zeroMatrix = Eigen::Matrix3d::Zero(); */
    /* Eigen::Matrix3d identityMatrix = Eigen::Matrix3d::Identity(); */
    /* Eigen::Matrix3d randomMatrix = Eigen::Matrix3d::Random(); */
    /* std::cout << "Zero matrix:\n" << zeroMatrix << std::endl; */
    /* std::cout << "Identity matrix:\n" << identityMatrix << std::endl; */
    /* std::cout << "Random matrix:\n" << randomMatrix << std::endl; */


	// ------------------------------------------ block() ------------------------------------------
    /*  块操作与切片技巧可用于提取矩阵的部分元素。例如，使用block()函数可以提取矩阵的子块： */
    /* Eigen::Matrix4f mat; */
    /* mat << 1, 2, 3, 4, */
    /*         5, 6, 7, 8, */
    /*         9, 10, 11, 12, */
    /*         13, 14, 15, 16; */
    /* Eigen::Matrix2f subMat = mat.block(1, 1, 2, 2); */
    /* std::cout << "Sub matrix:\n" << subMat << std::endl; */


	// ----------------------------------- Matrix arithmetic -----------------------------------------
	// Eigen::Matrix2d a;
	// a << 1, 2,
	//         3, 4;
	// Eigen::Matrix2d b;
	// b << 2, 3,
	//         1, 4;
	// std::cout << "Matrix addition:\n" << a + b << std::endl;
	// std::cout << "Matrix subtraction:\n" << a - b << std::endl;
	// std::cout << "Element-wise multiplication:\n" << a.array() * b.array() << std::endl;
	// std::cout << "a.array:\n" << a.array() << std::endl;
	// std::cout << "Matrix multiplication:\n" << a * b << std::endl;
    //
	// Eigen::Matrix2d mat;
	// mat << 1, 2,
	//     3, 4;
	// std::cout << "Inverse matrix:\n" << mat.inverse() << std::endl;
	// std::cout << "Determinant: " << mat.determinant() << std::endl;
	// std::cout << "Trace: " << mat.trace() << std::endl;


	// -----------------------------------------------------------------------
	// Eigen::Matrix3f A;
	// Eigen::Vector3f b;
	// A << 1, 2, 3, 4, 5, 6, 7, 8, 10;
	// b << 3, 3, 4;
	// // Eigen::Vector3f x = A.colPivHouseholderQr().solve(b);
	// Eigen::Matrix3f x = A.colPivHouseholderQr().matrixQ();
	// // std::cout << "The solution is:\n" << x << std::endl;
	// // ColPivHouseholderQR<Matrix3f> dec(A);
	// cout << "Q " << endl << x << endl;
	// Eigen::Matrix3f y = A.colPivHouseholderQr().matrixR();
	// cout << "R " << endl << y << endl;
	// // cout << "R " << endl << dec.matrixR() << endl;

	Eigen::Matrix3f A;
	A << 1, 2, 3,
	  4, 5, 6,
	  7, 8, 9;

	Eigen::ColPivHouseholderQR<Eigen::Matrix3f> qr(A);
	// 获取 Q 和 R
	Eigen::Matrix3f Q = qr.matrixQ(); // type trans
	Eigen::Matrix3f R = qr.matrixR().triangularView<Eigen::Upper>();

	std::cout << "Q:\n" << Q << "\n\n";
	std::cout << "R:\n" << R << "\n\n";

	// 验证 Q * R ≈ A * P（P 是列置换）
	Eigen::Matrix3f AP = A * qr.colsPermutation();
	std::cout << "Q * R (should ≈ AP):\n" << Q * R << std::endl;



	// ---------------------------------------- linear solver ----------------------------------
    /* Eigen::Matrix3d A; */
    /* A << 1, 2, 3, */
    /*   4, 5, 6, */
    /*   7, 8, 10; */
    /* Eigen::Vector3d b(3, 3, 4); */
    /* Eigen::Vector3d x = A.lu().solve(b); */
    /* std::cout << "Solution of the linear system:\n" << x << std::endl; */


	// -------------------------------------- size of matrix ----------------------------------------
	// Eigen::Matrix3d A;
	// cout << "#rows = " << A.rows() << "  #cols = " << A.cols() << endl;
	// A.resize(3,3);
	// cout << "#rows = " << A.rows() << "  #cols = " << A.cols() << endl;


	// -------------------------------------- 








	return 0;


}

		

	


