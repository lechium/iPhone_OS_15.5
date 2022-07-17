//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AMSFeatureFlag : NSObject
{
    _Bool _defaultEnabled;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    _Bool _userEnabled;	// 10 = 0xa
    _Bool _hidden;	// 11 = 0xb
    NSString *_associatedGroup;	// 16 = 0x10
    long long _developmentPhase;	// 24 = 0x18
    NSString *_feature;	// 32 = 0x20
    NSDictionary *_flagData;	// 40 = 0x28
    NSString *_displayName;	// 48 = 0x30
    NSString *_domain;	// 56 = 0x38
    NSString *_featureDescription;	// 64 = 0x40
    NSString *_flagGroup;	// 72 = 0x48
    NSArray *_itfes;	// 80 = 0x50
}

+ (void)disableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001318ed
+ (void)enableFlagForFeature:(id)arg1 domain:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013181d
+ (id)flagForFeature:(id)arg1 domain:(id)arg2 searchDirectory:(id)arg3;	// IMP=0x0000000000131410
+ (id)flagForFeature:(id)arg1 domain:(id)arg2;	// IMP=0x00000000001313fb
+ (void)disableFlagGroup:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000133422
+ (void)enableFlagGroup:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000133409
+ (id)flagGroupWithName:(id)arg1;	// IMP=0x00000000001333b2
+ (id)allFlagGroups;	// IMP=0x00000000001332b4
- (void).cxx_destruct;	// IMP=0x00000000001330dd
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isUserEnabled) _Bool userEnabled; // @synthesize userEnabled=_userEnabled;
@property(retain, nonatomic) NSArray *itfes; // @synthesize itfes=_itfes;
@property(copy, nonatomic) NSString *flagGroup; // @synthesize flagGroup=_flagGroup;
@property(copy, nonatomic) NSString *featureDescription; // @synthesize featureDescription=_featureDescription;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSDictionary *flagData; // @synthesize flagData=_flagData;
@property(copy, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long developmentPhase; // @synthesize developmentPhase=_developmentPhase;
@property(nonatomic, getter=isDefaultEnabled) _Bool defaultEnabled; // @synthesize defaultEnabled=_defaultEnabled;
@property(copy, nonatomic) NSString *associatedGroup; // @synthesize associatedGroup=_associatedGroup;
- (id)itfesFromString:(id)arg1 mutableFeatures:(id)arg2 profileFeatures:(id)arg3;	// IMP=0x0000000000132c99
- (void)_disableITFEs;	// IMP=0x0000000000132b6a
- (void)_enableITFEs;	// IMP=0x0000000000132a38
- (_Bool)hasITFEWithName:(id)arg1;	// IMP=0x0000000000132883
- (_Bool)hasITFEs;	// IMP=0x000000000013283b
- (void)activateITFEs;	// IMP=0x00000000001327e4
- (long long)groupType;	// IMP=0x000000000013279b
- (void)_updateUserEnabled:(_Bool)arg1;	// IMP=0x0000000000132792
- (long long)_developmentPhaseFromGroupType:(long long)arg1;	// IMP=0x0000000000132778
- (void)_updateDevelopmentPhase;	// IMP=0x000000000013251a
- (void)_updateInternalEnabledState;	// IMP=0x00000000001322c2
- (void)_activateFlag;	// IMP=0x0000000000131a40
@property(readonly, nonatomic, getter=isRemote) _Bool remote;
- (id)initWithFlagData:(id)arg1 mutableFeatures:(id)arg2 profileFeatures:(id)arg3 feature:(id)arg4 domain:(id)arg5;	// IMP=0x0000000000131041
@property(nonatomic, getter=isCodeComplete) _Bool codeComplete;
@property(nonatomic, getter=isTestable) _Bool testable;
@property(copy, nonatomic) NSString *ITFE;

@end
