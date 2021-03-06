//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchResultItem-Protocol.h>
#import <PhotosUICore/PXSearchResultsValueSorting-Protocol.h>

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSMutableDictionary, NSString, PHPerson, PLSearchResult, PSIDate;
@protocol OS_dispatch_queue, PXSearchResultsValueDelegate;

@interface PXSearchResultsValue : NSObject <PXSearchResultsValueSorting, PXSearchResultItem>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    double _score;	// 16 = 0x10
    unsigned long long _searchCategories;	// 24 = 0x18
    NSAttributedString *_attributedDisplayTitle;	// 32 = 0x20
    NSString *_displaySubtitle;	// 40 = 0x28
    PSIDate *_startDate;	// 48 = 0x30
    PSIDate *_endDate;	// 56 = 0x38
    NSString *_collectionSubtitle;	// 64 = 0x40
    NSString *_transientToken;	// 72 = 0x48
    NSArray *_assetUUIDs;	// 80 = 0x50
    unsigned long long _collectionType;	// 88 = 0x58
    NSString *_collectionUUID;	// 96 = 0x60
    NSString *_collectionTitle;	// 104 = 0x68
    unsigned long long _approximateCount;	// 112 = 0x70
    PHPerson *_person;	// 120 = 0x78
    NSString *_selectedDisplayTitle;	// 128 = 0x80
    NSMutableDictionary *_uuidToAssetMap;	// 136 = 0x88
    id <PXSearchResultsValueDelegate> _delegate;	// 144 = 0x90
    PLSearchResult *_searchResult;	// 152 = 0x98
    NSDate *_date;	// 160 = 0xa0
    NSString *_dateFilterString;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000027ccfb
@property(retain, setter=_setDateFilterString:) NSString *dateFilterString; // @synthesize dateFilterString=_dateFilterString;
@property(retain, nonatomic, setter=_setDate:) NSDate *date; // @synthesize date=_date;
@property(retain, setter=_setSearchResult:) PLSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak id <PXSearchResultsValueDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSMutableDictionary *uuidToAssetMap; // @synthesize uuidToAssetMap=_uuidToAssetMap;
@property(retain, setter=_setSelectedDisplayTitle:) NSString *selectedDisplayTitle; // @synthesize selectedDisplayTitle=_selectedDisplayTitle;
@property(retain, nonatomic, setter=_setPerson:) PHPerson *person; // @synthesize person=_person;
@property(setter=_setApproximateCount:) unsigned long long approximateCount; // @synthesize approximateCount=_approximateCount;
@property(readonly) NSString *collectionTitle; // @synthesize collectionTitle=_collectionTitle;
@property(readonly) NSString *collectionUUID; // @synthesize collectionUUID=_collectionUUID;
@property(readonly) unsigned long long collectionType; // @synthesize collectionType=_collectionType;
@property(retain, setter=_setAssetUUIDs:) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(copy, nonatomic) NSString *transientToken; // @synthesize transientToken=_transientToken;
@property(readonly, nonatomic) unsigned long long itemType;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x000000000027cb29
@property(readonly) NSString *collectionSubtitle; // @synthesize collectionSubtitle=_collectionSubtitle;
@property(readonly, copy) NSString *description;
@property(readonly) NSDictionary *debugDictionary;
- (void)enumerateSearchIndexCategoriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000027c57a
- (id)groupsMatchRanges;	// IMP=0x000000000027c52a
- (unsigned long long)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x000000000027c4d7
@property(readonly) unsigned long long searchCategories;
@property(readonly, copy) NSArray *assets;
- (void)_setAsset:(id)arg1 forUUID:(id)arg2;	// IMP=0x000000000027c21b
- (id)assetLocalIdentifiersForPreview;	// IMP=0x000000000027bfe5
- (long long)compare:(id)arg1;	// IMP=0x000000000027bfbd
- (id)_startDateForAssetCollection:(id)arg1;	// IMP=0x000000000027be34
@property(readonly, nonatomic) unsigned long long numberOfAssets;
- (void)_computeScoreWithMaxGroupedResultsCount:(unsigned long long)arg1;	// IMP=0x000000000027b813
- (void)fetchAllUUIDs:(CDUnknownBlockType)arg1;	// IMP=0x000000000027b6d4
- (void)fetchRemainingUUIDs:(CDUnknownBlockType)arg1;	// IMP=0x000000000027b52f
@property(readonly, nonatomic) _Bool isSingletonPersonResult;
- (_Bool)isAssetResult;	// IMP=0x000000000027b468
@property(readonly, copy) NSString *displaySubtitle;
@property(readonly, copy) NSString *displayTitle;
- (id)displayTitleWithDefaultAttributes:(id)arg1 dimmedAttributes:(id)arg2 selectedDisplayTitle:(id *)arg3;	// IMP=0x000000000027a751
- (_Bool)isFinished;	// IMP=0x000000000027a6fe
@property(readonly) double score;
@property(readonly, nonatomic) NSArray *searchTokens;
@property(readonly, copy) NSString *searchString;
- (void)_setCollectionType:(unsigned long long)arg1 uuid:(id)arg2 title:(id)arg3 subtitle:(id)arg4;	// IMP=0x000000000027a54c
- (id)init;	// IMP=0x000000000027a4f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

