#include "Set.h"

template<typename Atype>
Set<Atype>::Set(int size) {
	len = size;
	a = new Atype[size];
	for (int i = 0; i < size; i++) {
		a[i] = 0;
	}
}

template<typename Atype>
Set<Atype>::~Set() {
	delete[] a;
}

template<typename Atype>
bool Set<Atype>::Is_Empty() {
	return len == 0;
}

template<typename Atype>
bool Set<Atype>::Is_Full() {
	return len == sizeof(a) / sizeof(a[0]);
}

template<typename Atype>
bool Set<Atype>::Add(Atype T) {
	if (!In_Set(T)) {
		if (!Is_Full()) {
			a[len++] = T;
			return true;
		}
	}
	return false;
}

template<typename Atype>
bool Set<Atype>::In_Set(Atype T) {
	for (int i = 0; i < len; i++) {
		if (a[i] == T) {
			return true;
		}
	}
	return false;
}

template<typename Atype>
Atype Set<Atype>::Get(Atype T) {
	for (int i = 0; i < len; i++) {
		if (a[i] == T) {
			Atype result = a[i];
			for (int j = i; j < len - 1; j++) {
				a[j] = a[j + 1];
			}
			len--;
			return result;
		}
	}
}
