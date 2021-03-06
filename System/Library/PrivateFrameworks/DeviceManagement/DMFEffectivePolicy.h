//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface DMFEffectivePolicy : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_type;	// 8 = 0x8
    NSSet *_excludedIdentifiers;	// 16 = 0x10
    NSDictionary *_currentPoliciesByIdentifier;	// 24 = 0x18
    NSDictionary *_prioritiesByIdentifier;	// 32 = 0x20
    long long _defaultPolicy;	// 40 = 0x28
    unsigned long long _defaultPriority;	// 48 = 0x30
}

+ (id)downtimeCategoryIdentifiers;	// IMP=0x000000000001b386
+ (id)systemCategoryIdentifiers;	// IMP=0x000000000001b279
+ (id)unblockableCategoryIdentifiers;	// IMP=0x000000000001b17a
+ (id)unblockableBundleIdentifiers;	// IMP=0x000000000001b0e8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a7b3
- (void).cxx_destruct;	// IMP=0x000000000001bee7
@property(readonly, nonatomic) unsigned long long defaultPriority; // @synthesize defaultPriority=_defaultPriority;
@property(readonly, nonatomic) long long defaultPolicy; // @synthesize defaultPolicy=_defaultPolicy;
@property(readonly, copy, nonatomic) NSDictionary *prioritiesByIdentifier; // @synthesize prioritiesByIdentifier=_prioritiesByIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *currentPoliciesByIdentifier; // @synthesize currentPoliciesByIdentifier=_currentPoliciesByIdentifier;
@property(readonly, copy, nonatomic) NSSet *excludedIdentifiers; // @synthesize excludedIdentifiers=_excludedIdentifiers;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)_valueForMatchingHostName:(id)arg1 inRegisteredHostNames:(id)arg2;	// IMP=0x000000000001bbf0
- (long long)priorityForIdentifier:(id)arg1;	// IMP=0x000000000001bb45
- (long long)policyForIdentifier:(id)arg1 excludableIdentifiers:(id)arg2;	// IMP=0x000000000001b6f0
@property(readonly, nonatomic) _Bool downtimeEnforced;
- (unsigned long long)hash;	// IMP=0x000000000001afca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ab64
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a87f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a7bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a759
- (id)initWithType:(id)arg1 defaultPolicy:(long long)arg2 currentPoliciesByIdentifier:(id)arg3 defaultPriority:(unsigned long long)arg4 prioritiesByIdentifier:(id)arg5 excludedIdentifiers:(id)arg6;	// IMP=0x000000000001a636
- (unsigned long long)priorityForHostName:(id)arg1;	// IMP=0x000000000001bfdd
- (long long)policyForHostName:(id)arg1;	// IMP=0x000000000001bf25

@end

