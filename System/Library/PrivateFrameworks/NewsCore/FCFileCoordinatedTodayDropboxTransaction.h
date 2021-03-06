//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSArray, NSSet;

@interface FCFileCoordinatedTodayDropboxTransaction : NSObject <NSCopying>
{
    unsigned long long _transactionType;	// 8 = 0x8
    NSArray *_insertedOrUpdatedHistoryItems;	// 16 = 0x10
    NSSet *_deletedArticleIDs;	// 24 = 0x18
}

+ (void)_mergeItem:(id)arg1 intoItem:(id)arg2;	// IMP=0x000000000004d1a4
+ (id)collapsedTransactionOfTransactions:(id)arg1;	// IMP=0x000000000004c168
+ (id)transactionToMutateSeenArticlesWithInsertedOrUpdatedHistoryItems:(id)arg1 deletedArticleIDs:(id)arg2;	// IMP=0x000000000004bf3d
+ (id)transactionToClearSeenArticles;	// IMP=0x000000000004bf09
+ (id)transactionOfIdentity;	// IMP=0x000000000004beb6
- (void).cxx_destruct;	// IMP=0x000000000004d43a
@property(copy, nonatomic) NSSet *deletedArticleIDs; // @synthesize deletedArticleIDs=_deletedArticleIDs;
@property(copy, nonatomic) NSArray *insertedOrUpdatedHistoryItems; // @synthesize insertedOrUpdatedHistoryItems=_insertedOrUpdatedHistoryItems;
@property(nonatomic) unsigned long long transactionType; // @synthesize transactionType=_transactionType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d3e9
- (void)_mergeItem:(id)arg1 intoItem:(id)arg2;	// IMP=0x000000000004d141
- (CDUnknownBlockType)todayPrivateDataAccessor;	// IMP=0x000000000004cb05
- (id)initWithTransactionType:(unsigned long long)arg1 insertedOrUpdatedHistoryItems:(id)arg2 deletedArticleIDs:(id)arg3;	// IMP=0x000000000004bdf6
- (id)init;	// IMP=0x000000000004bcb1

@end

