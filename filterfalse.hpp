//
// Created by yonatan on 16/06/2020.
//

#ifndef ITERTOOLS_CFAR_A_FILTERFALSE_HPP
#define ITERTOOLS_CFAR_A_FILTERFALSE_HPP

namespace itertools{

    template <typename FUN , typename T>

    struct filterfalse{
      FUN fonction;
          T list;

        explicit filterfalse(FUN f, T l):fonction(f),list(l){};

        struct iterator{

            typename T::iterator st;
            typename T::iterator last;
            FUN fonc;

            explicit iterator(typename T::iterator first, typename T::iterator lst,  FUN f)
            :st(first),last(lst),fonc(f){

                while(st != last && fonc(*st)==true){
                    ++st;

                }
            };

            bool operator!=(iterator& o){
                return (st != o.st);
            }

            auto operator*(){

                return *st;
            }
            iterator&operator++(){

                ++st;

                    while(st != last && fonc(*st)==true){
                        ++st;

                            }

                    return *this;

            }


        };

        iterator begin(){
            return iterator(list.begin(),list.end(),fonction);
        } iterator end(){
            return iterator(list.end(),list.end(),fonction);
        }




    };


}

#endif //ITERTOOLS_CFAR_A_FILTERFALSE_HPP
