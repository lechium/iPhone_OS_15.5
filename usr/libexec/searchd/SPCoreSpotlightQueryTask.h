//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PRSRankingConfiguration, SDSearchQuery, SFStartLocalSearchFeedback, SPCoreSpotlightDatastore, SPCoreSpotlightTask;
@protocol OS_dispatch_queue;

@interface SPCoreSpotlightQueryTask : NSObject
{
    SFStartLocalSearchFeedback *_feedback;	// 8 = 0x8
    _Bool _done;	// 16 = 0x10
    _Bool _live;	// 17 = 0x11
    _Bool _canceled;	// 18 = 0x12
    SPCoreSpotlightTask *_job;	// 24 = 0x18
    SPCoreSpotlightDatastore *_store;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    SDSearchQuery *_resultPipe;	// 48 = 0x30
    unsigned long long _type;	// 56 = 0x38
    PRSRankingConfiguration *_rankingInfo;	// 64 = 0x40
    NSArray *_suggestionResults;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000003e277
@property _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool live; // @synthesize live=_live;
@property _Bool done; // @synthesize done=_done;
@property(retain, nonatomic) NSArray *suggestionResults; // @synthesize suggestionResults=_suggestionResults;
@property(retain) PRSRankingConfiguration *rankingInfo; // @synthesize rankingInfo=_rankingInfo;
@property unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak SDSearchQuery *resultPipe; // @synthesize resultPipe=_resultPipe;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) SPCoreSpotlightDatastore *store; // @synthesize store=_store;
@property(retain, nonatomic) SPCoreSpotlightTask *job; // @synthesize job=_job;
- (void)finish;	// IMP=0x001000000003e173
- (void)finishWithSections:(id)arg1 suggestionResults:(id)arg2;	// IMP=0x001000000003dc77
- (void)sendCompletions:(id)arg1;	// IMP=0x001000000003da73
- (void)beginQuery:(id)arg1;	// IMP=0x001000000003d584
- (void)cancel;	// IMP=0x001000000003d2af
- (void)reset;	// IMP=0x001000000003d256
- (id)initWithStore:(id)arg1 resultPipe:(id)arg2;	// IMP=0x001000000003d160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
