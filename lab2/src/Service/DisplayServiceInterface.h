//
// Created by мария баженова on 27.03.2023.
//

#ifndef LAB2_DISPLAYSERVICEINTERFACE_H
#define LAB2_DISPLAYSERVICEINTERFACE_H
namespace Service{
    class DisplayServiceInterface{
    public:
        virtual void displayOpeningError() = 0;
        virtual void displayClosingError() = 0;
    };
}
#endif //LAB2_DISPLAYSERVICEINTERFACE_H
