//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol OS_dispatch_queue, PSIGroupResultDelegate;

@interface PSIGroupResult : NSObject <NSCopying>
{
    id <PSIGroupResultDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_owningContentString;	// 24 = 0x18
    NSMutableArray *_assetUUIDs;	// 32 = 0x20
    NSMutableArray *_collectionResults;	// 40 = 0x28
    _Bool _didFetchOwningContentString;	// 48 = 0x30
    NSMutableSet *_sceneGroupsIds;	// 56 = 0x38
    short _dedupingSkippedCategory;	// 64 = 0x40
    float _score;	// 68 = 0x44
    NSString *_transientToken;	// 72 = 0x48
    NSArray *_groups;	// 80 = 0x50
    const struct __CFArray *_assetIds;	// 88 = 0x58
    const struct __CFArray *_collectionIds;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000005a99f8
@property(nonatomic) __weak id <PSIGroupResultDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) short dedupingSkippedCategory; // @synthesize dedupingSkippedCategory=_dedupingSkippedCategory;
@property(retain, nonatomic) const struct __CFArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) const struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *transientToken; // @synthesize transientToken=_transientToken;
- (void)resolveObjectsWithAssetCache:(id)arg1 collectionCache:(id)arg2;	// IMP=0x00000000005a9524
- (void)fetchNextAssetUUIDs:(_Bool)arg1 collectionResults:(_Bool)arg2 assetCountLimit:(unsigned long long)arg3 collectionCountLimit:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005a9394
- (void)fetchNextAssetUUIDs:(_Bool)arg1 collectionResults:(_Bool)arg2 count:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005a9372
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005a9346
- (id)_prepareForFetchWithAssetCountLimit:(unsigned long long)arg1 collectionCountLimit:(unsigned long long)arg2 outAssetRange:(struct _NSRange *)arg3 outCollectionRange:(struct _NSRange *)arg4 outFetchOwningContentString:(_Bool *)arg5;	// IMP=0x00000000005a924f
@property(readonly) __weak NSArray *collectionResults;
@property(readonly) __weak NSArray *assetUUIDs;
@property(readonly) __weak NSString *owningContentString;
@property(readonly, nonatomic) _Bool hasDateFilterFromImplicitToken;
@property(readonly, nonatomic) _Bool isDateFilterPartiallyFromFullSearchText;
- (id)dateFilterGroupSnapshot;	// IMP=0x00000000005a8dd8
- (id)firstSearchTextGroupSnapshot;	// IMP=0x00000000005a8b61
- (id)fullSearchTextGroupSnapshot;	// IMP=0x00000000005a872e
- (id)lookupIdentifiersForSearchIndexCategories:(id)arg1;	// IMP=0x00000000005a8401
- (_Bool)isMatchedByIdentifierAtIndex:(long long)arg1;	// IMP=0x00000000005a8344
- (_Bool)isContentStringTextSearchableAtIndex:(long long)arg1;	// IMP=0x00000000005a8289
- (long long)categoryAtIndex:(long long)arg1;	// IMP=0x00000000005a8240
- (id)normalizedStringAtIndex:(long long)arg1;	// IMP=0x00000000005a81ec
- (id)contentStringAtIndex:(long long)arg1;	// IMP=0x00000000005a8198
- (id)groupRangesAtIndex:(long long)arg1;	// IMP=0x00000000005a8144
- (id)matchRangesAtIndex:(long long)arg1;	// IMP=0x00000000005a80f0
- (id)tokensAtIndex:(long long)arg1;	// IMP=0x00000000005a809c
- (unsigned long long)groupCount;	// IMP=0x00000000005a8086
@property(readonly, nonatomic) NSArray *groupsMatchRanges;
@property(readonly, nonatomic) NSArray *lookupIdentifiers;
@property(readonly, nonatomic) NSArray *contentStrings;
@property(readonly, nonatomic) NSArray *groupsSearchTokens;
@property(readonly, nonatomic) unsigned long long matchCount;
@property(readonly, nonatomic) _Bool containsFilterSearchTokens;
@property(readonly, nonatomic) unsigned long long collectionMatchCount;
@property(readonly, nonatomic) unsigned long long assetMatchCount;
@property(readonly) NSMutableSet *sceneGroupsIds;
- (id)normalizedUnitTestDescription;	// IMP=0x00000000005a70c6
- (id)unitTestDescription;	// IMP=0x00000000005a65c7
- (id)debugDescription;	// IMP=0x00000000005a65b5
- (id)description;	// IMP=0x00000000005a6507
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005a6442
- (void)dealloc;	// IMP=0x00000000005a63f5
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000005a6366

@end

