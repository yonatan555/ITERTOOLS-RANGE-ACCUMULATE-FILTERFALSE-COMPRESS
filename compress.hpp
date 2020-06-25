//
// Created by yonatan on 16/06/2020.
//

#ifndef ITERTOOLS_CFAR_A_COMPRESS_HPP
#define ITERTOOLS_CFAR_A_COMPRESS_HPP

#include <vector>
#include <iostream>
namespace itertools{

    template< typename T,typename  BOOL>

    struct compress{
        T list ;
        BOOL booleans;

        explicit compress(T l , BOOL b):list(l),booleans(b){};
        struct iterator{
            typename T::iterator st;
            typename T::iterator last;
            typename BOOL::iterator bools;

            explicit iterator(typename T::iterator s,typename T::iterator l,typename BOOL::iterator b):
            st(s),last(l),bools(b){
                while(st!=last && !(*bools)){
                    ++st;
                    ++ bools;
                }
            };
            bool operator!=(iterator o){
                return (st!=o.st);
            }
            iterator& operator++(){
            ++st;
            ++bools;
                    while(st!=last && !(*bools)){
                        ++st;
                        ++ bools;
                    }
                return *this;
            }
            auto operator*(){
                return *st;
            }
        };

        iterator begin(){
            return iterator(list.begin(),list.end(),booleans.begin());
        }
        iterator end(){
            return iterator(list.end(),list.end(),booleans.end());
        }

    };
}

#endif //ITERTOOLS_CFAR_A_COMPRESS_HPP
