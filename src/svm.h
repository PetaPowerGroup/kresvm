#ifndef SVM_H
#define SVM_H
#include "base.h"
#include "tree.h"

class svm {
private:
	node *root;
	kernel *ken;
	int vel_uz;

	double* get_array(const std::string &str);
public :
	svm(kernel *k):ken(k){}
	svm(kernel *k,double ci):ken(k){}
	~svm() {}
	void train(PSamples samples, int num, double c);
	void train(std::istream &in,int vel,double c);
	int classify(const std::string &pat);
	void save(std::ostream &out);
	void load(std::istream &in);
};
#endif