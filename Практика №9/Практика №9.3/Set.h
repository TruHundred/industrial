#ifndef SET_H
#define SET_H

template<typename Atype>
class Set {
private:
	Atype* a;
	int len;
public:
	Set(int size);
	~Set();
	bool Is_Empty();
	bool Is_Full();
	bool Add(Atype T);
	bool In_Set(Atype T);
	Atype Get(Atype T);
};

#endif
