#include "SparseMatrix.h"
int main() {
	unsigned int i;
	unsigned int m = 10, n = 15;
	CSparseMatrix<int> sparseMatrix(m, n);
	for (i = 0; i < 13; ++i) {
		if (!sparseMatrix.SetElement(i, i, i)) {
			std::cout << "超過範圍" << std::endl;
		}
	}
	sparseMatrix.ShowList();
	return 0;
}
