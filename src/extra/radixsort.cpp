///*
// * radixsort.cpp
// *
// *  Created on: 18 abr. 2018
// *      Author: mad18
// */
//
//#include "radixsort.hpp"
//
//#include<iostream>
//using namespace std;
//
//// A utility function to get maximum value in arr[]
//template <class Clave>
//Clave RadixSort<Clave>::getMax(Vector<Clave>& X, int n){
//	Clave mx = X.get_clave(0);
//    for (int i = 1; i < n; i++)
//        if (X.get_clave(i) > mx)
//        	mx.set_clave(X.get_clave(i), 0);
//    return mx;
//}
//
//// A function to do counting sort of arr[] according to
//// the digit represented by exp.
//template <class Clave>
//void RadixSort<Clave>::countSort(Vector<Clave>& X, int n, int exp){
//	Vector<Clave>& output(n); // output array
//    int i; Vector<Clave>& count[10] = {0};
//
//    // Store count of occurrences in count[]
//    for (i = 0; i < n; i++)
//        count[ (X.get_clave(i)/exp)%10 ]++;
//
//    // Change count[i] so that count[i] now contains actual
//    //  position of this digit in output[]
//    for (i = 1; i < 10; i++)
//    	count.set_clave(count.get_clave(i - 1), i);
//
//    // Build the output array
//    for (i = n - 1; i >= 0; i--){
//        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
//        count[ (arr[i]/exp)%10 ]--;
//    }
//
//    // Copy the output array to arr[], so that arr[] now
//    // contains sorted numbers according to current digit
//    for (i = 0; i < n; i++)
//        arr[i] = output[i];
//}
//
//// The main function to that sorts arr[] of size n using
//// Radix Sort
//template <class Clave>
//unsigned int RadixSort<Clave>::metodord(Vector<Clave>& X, unsigned int nCeldas, int p){
//    // Find the maximum number to know number of digits
//    int m = getMax(X, nCeldas);
//
//    // Do counting sort for every digit. Note that instead
//    // of passing digit number, exp is passed. exp is 10^i
//    // where i is current digit number
//    for (int exp = 1; m/exp > 0; exp *= 10)
//        countSort(X, nCeldas, exp);
//}
//
//template class RadixSort<class DNI>;
