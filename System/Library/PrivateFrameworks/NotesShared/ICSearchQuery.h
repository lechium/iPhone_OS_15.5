//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSearchQuery, ICRankingQueriesDefinition, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_semaphore;

@interface ICSearchQuery : NSObject
{
    _Bool _modernResultsOnly;	// 8 = 0x8
    _Bool _wasForceStopped;	// 9 = 0x9
    ICRankingQueriesDefinition *_rankingQueriesDefinition;	// 16 = 0x10
    NSDictionary *_queryResults;	// 24 = 0x18
    NSString *_queryString;	// 32 = 0x20
    NSArray *_externalRankingQueries;	// 40 = 0x28
    CSSearchQuery *_searchQuery;	// 48 = 0x30
    NSObject<OS_dispatch_semaphore> *_synchronousSemaphore;	// 56 = 0x38
}

+ (id)fetchDefaultAttributesForIdentifiers:(id)arg1;	// IMP=0x000000000006fad5
+ (id)fetchModernNoteSearchableItemAttributesFromCoreDataForObjectIDURIs:(id)arg1 context:(id)arg2;	// IMP=0x000000000006f238
+ (id)defaultAttributesToReturnFromCoreSpotlight;	// IMP=0x000000000006e29c
- (void).cxx_destruct;	// IMP=0x0000000000070539
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore; // @synthesize synchronousSemaphore=_synchronousSemaphore;
@property(retain, nonatomic) CSSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) NSArray *externalRankingQueries; // @synthesize externalRankingQueries=_externalRankingQueries;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSDictionary *queryResults; // @synthesize queryResults=_queryResults;
@property(nonatomic) _Bool wasForceStopped; // @synthesize wasForceStopped=_wasForceStopped;
@property(nonatomic) _Bool modernResultsOnly; // @synthesize modernResultsOnly=_modernResultsOnly;
@property(retain, nonatomic) ICRankingQueriesDefinition *rankingQueriesDefinition; // @synthesize rankingQueriesDefinition=_rankingQueriesDefinition;
- (void)cancel;	// IMP=0x000000000006f1e0
- (void)forceStop;	// IMP=0x000000000006f126
- (_Bool)run:(id *)arg1;	// IMP=0x000000000006ece0
- (void)setup;	// IMP=0x000000000006e54c
@property(readonly, nonatomic) NSArray *rankingQueries;
- (id)initWithQueryString:(id)arg1 externalRankingQueries:(id)arg2 modernResultsOnly:(_Bool)arg3;	// IMP=0x000000000006e3f9
- (id)initWithQueryString:(id)arg1 rankingQueriesDefinition:(id)arg2 modernResultsOnly:(_Bool)arg3;	// IMP=0x000000000006e346

@end

