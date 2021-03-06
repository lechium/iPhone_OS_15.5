//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchDataSourceSectionProvider-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol PXSearchDataSourceSectionProviderChangeObserver;

@interface PXSearchSuggestionsSectionProvider : NSObject <PXSearchDataSourceSectionProvider>
{
    _Bool _showsSuggestedSearchesHeader;	// 8 = 0x8
    id <PXSearchDataSourceSectionProviderChangeObserver> changeObserver;	// 16 = 0x10
    NSDictionary *_identifierToSuggestionMap;	// 24 = 0x18
    NSArray *_sortedItemIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000047faaf
@property(nonatomic) _Bool showsSuggestedSearchesHeader; // @synthesize showsSuggestedSearchesHeader=_showsSuggestedSearchesHeader;
@property(copy, nonatomic) NSArray *sortedItemIdentifiers; // @synthesize sortedItemIdentifiers=_sortedItemIdentifiers;
@property(copy, nonatomic) NSDictionary *identifierToSuggestionMap; // @synthesize identifierToSuggestionMap=_identifierToSuggestionMap;
@property(nonatomic) __weak id <PXSearchDataSourceSectionProviderChangeObserver> changeObserver; // @synthesize changeObserver;
- (id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x000000000047f8a4
- (void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000047f89e
- (id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000047f7a7
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x000000000047f6f5
- (void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x000000000047f447
- (id)cellReuseIdentifierForItemIdentifier:(id)arg1;	// IMP=0x000000000047f42e
- (void)registerClassesForCellReuseIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x000000000047f3b9
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x000000000047f322
@property(readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) unsigned long long type;
- (id)searchSuggestionForIdentifier:(id)arg1;	// IMP=0x000000000047f1e5
- (void)_setSearchSuggestions:(id)arg1 showsSuggestedSearchesHeader:(_Bool)arg2;	// IMP=0x000000000047eefe
- (void)setSearchQueryResult:(id)arg1;	// IMP=0x000000000047eda0
- (id)init;	// IMP=0x000000000047ed4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

