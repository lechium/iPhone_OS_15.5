//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/FCKeyedOperationQueueDelegate-Protocol.h>
#import <NewsUI/NUArticlePrefetcherType-Protocol.h>

@class FCKeyedOperationQueue, NSCountedSet, NSMutableDictionary, NSString, NSTimer;
@protocol NUArticleDataProviderFactory, NUArticleFactory, OS_dispatch_queue;

@interface NUArticlePrefetcher : NSObject <FCKeyedOperationQueueDelegate, NUArticlePrefetcherType>
{
    id <NUArticleFactory> _articleFactory;	// 8 = 0x8
    id <NUArticleDataProviderFactory> _articleDataProviderFactory;	// 16 = 0x10
    FCKeyedOperationQueue *_prefetchQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSMutableDictionary *_articleDataProviderCache;	// 40 = 0x28
    NSCountedSet *_interestedArticleIDs;	// 48 = 0x30
    NSMutableDictionary *_headlinesForArticles;	// 56 = 0x38
    NSMutableDictionary *_interestModificationDates;	// 64 = 0x40
    unsigned long long _highWaterMark;	// 72 = 0x48
    NSTimer *_reprocessTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000003d114
@property(retain, nonatomic) NSTimer *reprocessTimer; // @synthesize reprocessTimer=_reprocessTimer;
@property(nonatomic) unsigned long long highWaterMark; // @synthesize highWaterMark=_highWaterMark;
@property(retain, nonatomic) NSMutableDictionary *interestModificationDates; // @synthesize interestModificationDates=_interestModificationDates;
@property(retain, nonatomic) NSMutableDictionary *headlinesForArticles; // @synthesize headlinesForArticles=_headlinesForArticles;
@property(retain, nonatomic) NSCountedSet *interestedArticleIDs; // @synthesize interestedArticleIDs=_interestedArticleIDs;
@property(retain, nonatomic) NSMutableDictionary *articleDataProviderCache; // @synthesize articleDataProviderCache=_articleDataProviderCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) FCKeyedOperationQueue *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
@property(retain, nonatomic) id <NUArticleDataProviderFactory> articleDataProviderFactory; // @synthesize articleDataProviderFactory=_articleDataProviderFactory;
@property(retain, nonatomic) id <NUArticleFactory> articleFactory; // @synthesize articleFactory=_articleFactory;
- (void)_revisitSuspendedState;	// IMP=0x000000000003cf27
- (void)_flushUnusedDataProvidersIfNeeded;	// IMP=0x000000000003ca51
- (void)_flushDataProviderIfNeededForHeadline:(id)arg1;	// IMP=0x000000000003c8ab
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003bf4b
- (void)_reprocessInterestedArticleIDs;	// IMP=0x000000000003bdb6
- (void)_didChangeInterestedArticleIDs;	// IMP=0x000000000003bd09
- (id)prefetchedArticleDataProviderForArticleID:(id)arg1;	// IMP=0x000000000003bc72
- (void)removePrefetchInterestInArticleID:(id)arg1;	// IMP=0x000000000003baa4
- (void)addPrefetchInterestInArticleID:(id)arg1 headline:(id)arg2;	// IMP=0x000000000003b882
- (id)init;	// IMP=0x000000000003b73d
- (id)initWithArticleFactory:(id)arg1 articleDataProviderFactory:(id)arg2;	// IMP=0x000000000003b537

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

