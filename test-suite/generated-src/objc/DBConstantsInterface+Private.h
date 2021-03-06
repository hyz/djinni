// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#include "constants_interface.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class DBConstantsInterface;

namespace djinni_generated {

class ConstantsInterface
{
public:
    using CppType = std::shared_ptr<::testsuite::ConstantsInterface>;
    using ObjcType = DBConstantsInterface*;

    using Boxed = ConstantsInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

