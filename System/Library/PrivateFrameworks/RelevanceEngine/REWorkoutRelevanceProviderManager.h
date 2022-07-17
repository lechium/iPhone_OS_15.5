//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REPredictorObserver-Protocol.h>
#import <RelevanceEngine/REWorkoutRelevanceProviderManagerProperties-Protocol.h>

@class NSDate, NSString;

@interface REWorkoutRelevanceProviderManager <REPredictorObserver, REWorkoutRelevanceProviderManagerProperties>
{
    unsigned long long _state;	// 8 = 0x8
    NSDate *_lastWorkoutDate;	// 16 = 0x10
}

+ (_Bool)_wantsSeperateRelevanceQueue;	// IMP=0x0000000000049887
+ (Class)_relevanceProviderClass;	// IMP=0x0000000000049876
+ (id)_features;	// IMP=0x00000000000497e4
- (void).cxx_destruct;	// IMP=0x0000000000049bd1
@property(readonly, nonatomic) unsigned long long state;
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x0000000000049aa1
- (void)_prepareForUpdate;	// IMP=0x00000000000499ed
- (void)pause;	// IMP=0x000000000004999a
- (void)resume;	// IMP=0x0000000000049947
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;	// IMP=0x000000000004988f
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000497a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
