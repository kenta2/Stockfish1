#include "types.h"
std::ostream& operator<<(std::ostream &os, const Key x){
  return (os << x.v1);
}
