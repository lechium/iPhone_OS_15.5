//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDatabaseTransactionContext, HDProfile, _HKFilter;

@interface HDActivitySummaryBuilder : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    _HKFilter *_filter;	// 16 = 0x10
    _Bool _shouldIncludePrivateProperties;	// 24 = 0x18
    _Bool _shouldIncludeStatistics;	// 25 = 0x19
    _Bool _orderByDateAscending;	// 26 = 0x1a
    unsigned long long _limit;	// 32 = 0x20
    HDDatabaseTransactionContext *_databaseTransactionContext;	// 40 = 0x28
    long long _enumeratedSummaryCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000044bba
@property(readonly, nonatomic) long long enumeratedSummaryCount; // @synthesize enumeratedSummaryCount=_enumeratedSummaryCount;
@property(copy, nonatomic) HDDatabaseTransactionContext *databaseTransactionContext; // @synthesize databaseTransactionContext=_databaseTransactionContext;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(nonatomic) _Bool orderByDateAscending; // @synthesize orderByDateAscending=_orderByDateAscending;
@property(nonatomic) _Bool shouldIncludeStatistics; // @synthesize shouldIncludeStatistics=_shouldIncludeStatistics;
@property(nonatomic) _Bool shouldIncludePrivateProperties; // @synthesize shouldIncludePrivateProperties=_shouldIncludePrivateProperties;
- (void)batchedActivitySummariesWithPredicate:(id)arg1 maxBatchSize:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000027e717
- (void)activitySummariesWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000446c3
- (_Bool)enumerateActivitySummariesWithPredicate:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000027e0d4
- (id)initWithProfile:(id)arg1 filter:(id)arg2;	// IMP=0x000000000027e030
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000044601
- (id)init;	// IMP=0x000000000027dfb6

@end
