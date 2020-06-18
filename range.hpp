#ifndef ITERTOOLS_CFAR_A_RANGE_HPP
#define ITERTOOLS_CFAR_A_RANGE_HPP

namespace itertools {
    struct range{

        int start, last;

        explicit range(int a, int b): start(a), last(b){}



        struct iterator{

            int cur;

            explicit  iterator(int a): cur(a) {};

            iterator& operator ++(){
               // std::cout<<"range++"<<std::endl;
                ++cur;
                return *this;
            }
            int operator *(){
                return cur;
            }

            bool operator !=(const iterator& other) {
               // std::cout<<"range !="<<(cur!= other.cur)<<"-"<<(cur)<<std::endl;
                return (cur != other.cur);
            }
            iterator operator ++(int){
                iterator tmp = *this;
                ++cur;
                return tmp;
            }
            bool operator ==(const iterator& other) {
                return (cur == other.cur);
            }
            iterator& operator=(const iterator& other){
                if(this != &other)
                    this->cur = other.cur;
                return *this;
            };


        };
        iterator begin(){
            return iterator(start);
        }
        iterator end(){
            return iterator(last);
        }


    };

}
#endif //ITERTOOLS_CFAR_A_RANGE_HPP
