//
// Created by yonatan on 16/06/2020.
//

#ifndef ITERTOOLS_CFAR_A_ACCUMULATE_HPP
#define ITERTOOLS_CFAR_A_ACCUMULATE_HPP
#include "range.hpp"

namespace itertools {

    typedef struct {
        template <typename T>
        T operator()(T x,T y){
            return  x+y;
        }
    }add;

    template  <typename T,typename FUN = add>
    struct accumulate {
        T array;
        FUN fonction;

        explicit  accumulate(T data,FUN f=add() ):array(data), fonction(f){};



        struct iterator{
            decltype(*(array.begin())) rslt;
            typename T::iterator st;
            typename T::iterator last;
            FUN fonc;

            explicit  iterator(typename T::iterator start ,typename T::iterator end ,FUN f ):
                         rslt(*start),st(start),last(end),fonc(f){};

            iterator& operator ++(){
            //std::cout<<"acc++"<<std::endl;
            ++st;
            if(st!= last){
                rslt =fonc(*st ,rslt);
              //  std::cout << rslt;
            }
            return *this;
            }


            bool operator !=(const iterator& other) {
                //std::cout<<"acc!="<< (st != other.st)<<std::endl;
                return (st != other.st);
            }

            auto operator *(){
                return rslt;
            }

            iterator(const iterator& other) = default;

            iterator operator ++(int){
                iterator tmp = *this;
                ++(*this);
                return tmp;
            }
            iterator& operator=(const iterator& other){
                if(this != &other) {
                    this->rslt = other.rslt;
                    this->st = other.st;
                    this->last= other.last;
                    this->fonc = other.fonc;
                }
                return *this;
            };
            bool operator ==(const iterator& other) {
                return (st == other.st);
            }

        };
        iterator begin(){
            return iterator(array.begin(),array.end(),fonction);
        }
        iterator end(){
            return iterator(array.end(),array.end(),fonction);
        }

    };
}
#endif //ITERTOOLS_CFAR_A_ACCUMULATE_HPP
