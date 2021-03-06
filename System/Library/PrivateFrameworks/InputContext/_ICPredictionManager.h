//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InputContext/_ICFeedbackAccepting-Protocol.h>
#import <InputContext/_ICPredictionManaging-Protocol.h>

@class NSArray, NSString, _ICResultCache;
@protocol OS_dispatch_queue;

@interface _ICPredictionManager : NSObject <_ICPredictionManaging, _ICFeedbackAccepting>
{
    NSArray *_predictionSources;	// 8 = 0x8
    NSString *_lastUsedSource;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    _ICResultCache *_cache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000006cfd
@property(readonly) _ICResultCache *cache; // @synthesize cache=_cache;
- (void)providePredictionFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;	// IMP=0x0000000000006cd7
- (void)propogateMetrics:(id)arg1 data:(id)arg2;	// IMP=0x000000000000697e
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;	// IMP=0x00000000000066ab
- (void)setLastUsedSource:(id)arg1;	// IMP=0x00000000000065b4
- (void)hibernate;	// IMP=0x000000000000644d
- (void)warmUp;	// IMP=0x00000000000062b2
- (id)workLocation;	// IMP=0x00000000000062aa
- (id)searchForMeCardEmailAddresses;	// IMP=0x0000000000005e4a
- (id)searchForMeCardRegions;	// IMP=0x00000000000059e5
- (void)reset;	// IMP=0x00000000000059a8
- (void)predictedItemSelected:(id)arg1;	// IMP=0x00000000000059a2
- (id)_quickTypePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000000507f
- (id)lastCachedResultWithInitialCharacters:(id)arg1;	// IMP=0x0000000000005069
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 isResponseDenyListed:(_Bool)arg5 shouldDisableAutoCaps:(_Bool)arg6 timeoutInMilliseconds:(int)arg7 resultLimit:(int)arg8 error:(id *)arg9;	// IMP=0x000000000000492b
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id *)arg7;	// IMP=0x00000000000048fd
- (id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id *)arg4;	// IMP=0x000000000000461f
- (id)initWithPredictionSources:(id)arg1;	// IMP=0x000000000000447e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

