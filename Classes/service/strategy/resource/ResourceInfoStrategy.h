//======================================================================
// Project Name    : cofcofc
//
// Copyright © 2016 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef ResourceInfoStrategy_h
#define ResourceInfoStrategy_h
// service
#include "BaseStrategy.h"
class ResourceInfoStrategy : public BaseStrategy {
   public:
    ResourceInfoStrategy();
    virtual ~ResourceInfoStrategy();
    Response get(Parameter* parameter = NULL) override;
};
#endif
