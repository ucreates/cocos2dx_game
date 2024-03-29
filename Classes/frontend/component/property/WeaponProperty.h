//======================================================================
// Project Name    : cofcofc
//
// Copyright © 2016 U-CREATES. All rights reserved.
//
// This source code is the property of U-CREATES.
// If such findings are accepted at any time.
// We hope the tips and helpful in developing.
//======================================================================
#ifndef WeaponProperty_h
#define WeaponProperty_h
#include "BaseProperty.h"
class WeaponProperty : public BaseProperty {
   public:
    WeaponProperty(std::string name, int id, int ownerId, bool isEnemy);
    virtual ~WeaponProperty();
    bool isEnemy();
    int getOwnerId();
   private:
    bool isEnemyWeapon;
    int ownerId;
};
#endif
