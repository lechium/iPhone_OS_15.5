//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSSet, NSString;

@interface ICDAccountManagerState : NSObject
{
    NSSet *_supportedConfigurations;	// 8 = 0x8
    NSSet *_supportedConfigurationsDSIDs;	// 16 = 0x10
    ICConnectionConfiguration *_activeConfiguration;	// 24 = 0x18
    NSString *_activeConfigurationDSID;	// 32 = 0x20
}

+ (id)stateForAccounts:(id)arg1 baseConfiguration:(id)arg2;	// IMP=0x00200000000581e3
+ (id)restoredStatedWithFallbackAccounts:(id)arg1;	// IMP=0x0010000000057e6e
- (void).cxx_destruct;	// IMP=0x0020000000057d0f
@property(copy, nonatomic) NSString *activeConfigurationDSID; // @synthesize activeConfigurationDSID=_activeConfigurationDSID;
@property(copy, nonatomic) ICConnectionConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
@property(copy, nonatomic) NSSet *supportedConfigurationsDSIDs; // @synthesize supportedConfigurationsDSIDs=_supportedConfigurationsDSIDs;
@property(copy, nonatomic) NSSet *supportedConfigurations; // @synthesize supportedConfigurations=_supportedConfigurations;
- (id)_configurationForAccount:(id)arg1 baseConfiguration:(id)arg2;	// IMP=0x0010000000057bee
- (id)_userIdentityForAccount:(id)arg1;	// IMP=0x0010000000057b3a
- (void)_updateSupportedConfigurationsDSIDs;	// IMP=0x0010000000057a15
- (void)_updateSupportedConfigurationsWithAccounts:(id)arg1 activeConfiguration:(id)arg2;	// IMP=0x0010000000057721
- (id)_initWithAccounts:(id)arg1 activeAccount:(id)arg2 baseConfiguration:(id)arg3;	// IMP=0x00100000000575d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000057471
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000057306
- (id)description;	// IMP=0x00100000000570a9
- (void)save;	// IMP=0x0010000000056f35

@end
