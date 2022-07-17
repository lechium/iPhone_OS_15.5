//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SFRestrictionsPasscodeController : NSObject
{
}

+ (void)removePasswordForHashAndSaltLegacyRestrictions;	// IMP=0x000000000000edde
+ (id)hashForHashAndSaltLegacyRestrictions;	// IMP=0x000000000000ed79
+ (id)saltForHashAndSaltLegacyRestrictions;	// IMP=0x000000000000ed14
+ (id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2;	// IMP=0x000000000000ec79
+ (id)_generateSalt;	// IMP=0x000000000000ec38
+ (_Bool)legacyRestrictionsInEffect;	// IMP=0x000000000000ebcc
+ (id)pinFromHashAndSaltLegacyPassword;	// IMP=0x000000000000ea8e
+ (_Bool)hasHashAndSaltLegacyPassword;	// IMP=0x000000000000ea54
+ (void)_setKeychainPasswordForRestrictions:(id)arg1;	// IMP=0x000000000000e84b
+ (id)_keychainPasswordForRestrictions;	// IMP=0x000000000000e750
+ (void)_removeKeychainPasswordForRestrictions;	// IMP=0x000000000000e685
+ (_Bool)validatePIN:(id)arg1;	// IMP=0x000000000000e5f9
+ (_Bool)settingEnabled;	// IMP=0x000000000000e590
+ (void)setPIN:(id)arg1;	// IMP=0x000000000000e488
+ (void)migrateRestrictionsPasscode;	// IMP=0x000000000000e2c2
+ (void)_migrateRestrictionsPasscodeIfNeeded;	// IMP=0x000000000000e285

@end
