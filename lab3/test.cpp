#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ComplexNumber.h"

using testing::Eq;

namespace{
    class ClassDeclaration : public testing::Test{
    public:
        ComplexNumber obj = ComplexNumber(0, 0);
        ClassDeclaration(){
        }
    };
}
TEST_F(ClassDeclaration, nameOfTheTest1){
    ComplexNumber obj(2, 4);
    ComplexNumber c = obj.operator*=(0.5);
    ASSERT_EQ(1, c.Reresult());
    ASSERT_EQ(2, c.Imresult());
}