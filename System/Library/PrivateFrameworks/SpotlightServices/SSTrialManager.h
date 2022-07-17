//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TRIClient;

@interface SSTrialManager : NSObject
{
    TRIClient *_trialClient;	// 8 = 0x8
    NSString *_namespaceName;	// 16 = 0x10
    NSDictionary *_cachedValuesForFactor;	// 24 = 0x18
    _Bool _hasActiveExperiment;	// 32 = 0x20
    _Bool _hasDefaultValues;	// 33 = 0x21
    _Bool _hasRollout;	// 34 = 0x22
    _Bool _client_exclusive;	// 35 = 0x23
    _Bool _in_allocation;	// 36 = 0x24
    NSString *_spotlightNamespace;	// 40 = 0x28
    NSString *_experimentId;	// 48 = 0x30
    NSString *_rolloutId;	// 56 = 0x38
}

+ (id)getTTRLogs;	// IMP=0x000000000006d1d2
+ (id)sharedTrialClient;	// IMP=0x000000000006c4fb
+ (id)sharedPolicyTrialManager;	// IMP=0x000000000006c48f
+ (id)sharedRankingTrialManager;	// IMP=0x000000000006c420
+ (id)sharedUITrialManager;	// IMP=0x000000000006c3b4
+ (id)sharedModelTrialManager;	// IMP=0x000000000006c348
+ (void)loadFactorsForAllSharedTrialManagers;	// IMP=0x000000000006c22a
+ (id)currentTrialManager;	// IMP=0x000000000006c1f0
- (void).cxx_destruct;	// IMP=0x000000000006d40a
@property(readonly, nonatomic) NSString *rolloutId; // @synthesize rolloutId=_rolloutId;
@property(readonly, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property(readonly, nonatomic) NSString *spotlightNamespace; // @synthesize spotlightNamespace=_spotlightNamespace;
- (id)description;	// IMP=0x000000000006cf74
- (id)getFactorDictionary;	// IMP=0x000000000006cf33
- (_Bool)getInReservedAllocationForExperiment;	// IMP=0x000000000006cf2a
- (_Bool)getClientOnlyExperiment;	// IMP=0x000000000006cf21
- (_Bool)hasActiveRollout;	// IMP=0x000000000006cf18
- (_Bool)hasActiveExperiment;	// IMP=0x000000000006cf0f
- (void)refreshTrackingId;	// IMP=0x000000000006ceeb
- (id)getTreatmentId;	// IMP=0x000000000006cece
- (id)getFilePathForFactor:(id)arg1;	// IMP=0x000000000006ce47
- (_Bool)getBooleanValueForFactor:(id)arg1;	// IMP=0x000000000006cdfa
- (long long)getLongValueForFactor:(id)arg1;	// IMP=0x000000000006cdad
- (double)getDoubleValueForFactor:(id)arg1;	// IMP=0x000000000006cd56
- (id)getStringValueForFactor:(id)arg1;	// IMP=0x000000000006ccfd
- (id)getLevelForFactor:(id)arg1;	// IMP=0x000000000006cc43
- (void)reloadAllFactors;	// IMP=0x000000000006c756
- (id)initWithNameSpace:(unsigned int)arg1 loadDefaultValues:(_Bool)arg2;	// IMP=0x000000000006c565

@end
