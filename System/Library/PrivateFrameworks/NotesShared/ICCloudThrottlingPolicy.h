//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCloudThrottlingLevel, NSArray, NSDate, NSTimer;

@interface ICCloudThrottlingPolicy : NSObject
{
    NSArray *_throttlingLevels;	// 8 = 0x8
    double _resetInterval;	// 16 = 0x10
    unsigned long long _currentBatchCount;	// 24 = 0x18
    unsigned long long _currentLevelIndex;	// 32 = 0x20
    NSDate *_policyStartDate;	// 40 = 0x28
    NSTimer *_policyResetTimer;	// 48 = 0x30
}

+ (void)resetSavedPolicyState;	// IMP=0x00000000000b56f3
- (void).cxx_destruct;	// IMP=0x00000000000b5b59
@property(retain) NSTimer *policyResetTimer; // @synthesize policyResetTimer=_policyResetTimer;
@property(retain) NSDate *policyStartDate; // @synthesize policyStartDate=_policyStartDate;
@property(nonatomic) unsigned long long currentLevelIndex; // @synthesize currentLevelIndex=_currentLevelIndex;
@property(nonatomic) unsigned long long currentBatchCount; // @synthesize currentBatchCount=_currentBatchCount;
@property double resetInterval; // @synthesize resetInterval=_resetInterval;
@property(retain, nonatomic) NSArray *throttlingLevels; // @synthesize throttlingLevels=_throttlingLevels;
- (void)savePolicyState;	// IMP=0x00000000000b594e
- (void)loadSavedPolicyState;	// IMP=0x00000000000b57b7
- (void)startPolicyResetTimer;	// IMP=0x00000000000b553d
- (void)resetPolicy;	// IMP=0x00000000000b5385
@property(readonly, nonatomic) ICCloudThrottlingLevel *currentLevel;
@property(readonly, nonatomic) double batchInterval;
- (void)changeLevelIfNecessary;	// IMP=0x00000000000b4fb5
- (void)incrementBatchCount;	// IMP=0x00000000000b4ccd
- (void)dealloc;	// IMP=0x00000000000b4bc3
- (id)initWithThrottlingLevels:(id)arg1 resetInterval:(double)arg2;	// IMP=0x00000000000b4a46
- (id)init;	// IMP=0x00000000000b4a38

@end

