//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchDataSourceSectionProvider-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSArray, NSString;
@protocol PXSearchDataSourceSectionProviderChangeObserver;

@interface PXSearchIndexStatusSectionProvider : NSObject <PXSettingsKeyObserver, PXSearchDataSourceSectionProvider>
{
    _Bool _showsIndexingFooter;	// 8 = 0x8
    id <PXSearchDataSourceSectionProviderChangeObserver> changeObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021a601
@property(nonatomic) _Bool showsIndexingFooter; // @synthesize showsIndexingFooter=_showsIndexingFooter;
@property(nonatomic) __weak id <PXSearchDataSourceSectionProviderChangeObserver> changeObserver; // @synthesize changeObserver;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x000000000021a4d8
- (id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x000000000021a1ba
- (void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000021a1b4
- (id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000021a0d2
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x000000000021a047
- (void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;	// IMP=0x0000000000219fbe
- (id)cellReuseIdentifierForItemIdentifier:(id)arg1;	// IMP=0x0000000000219f42
- (void)registerClassesForCellReuseIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x0000000000219f3c
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x0000000000219f2f
@property(readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) unsigned long long type;
- (void)searchIndexStatusDidChange:(id)arg1;	// IMP=0x0000000000219d15
- (void)dealloc;	// IMP=0x0000000000219ca0
- (id)init;	// IMP=0x0000000000219bd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
