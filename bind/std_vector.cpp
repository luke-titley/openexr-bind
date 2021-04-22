#include <string>
#include <vector>

// CPPMM_ macro definitions etc automatically inserted in this virtual header
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace std {

template <class T> class vector {
public:
    // This allows us to see through to the type in Imath
    using BoundType = ::std::vector<T>;

    vector();
    ~vector();

} CPPMM_OPAQUEBYTES CPPMM_IGNORE_UNBOUND;

// explicit instantiation
template class vector<::std::string>;
template class vector<float>;

using vector_string = ::std::vector<::std::string>;
using vector_float = ::std::vector<float>;

} // namespace std

} // namespace cppmm_bind

template class std::vector<std::string>;
template class std::vector<float>;