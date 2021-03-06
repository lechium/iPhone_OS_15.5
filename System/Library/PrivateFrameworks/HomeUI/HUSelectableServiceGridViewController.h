//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFMutableSetDiff, HFSetDiff, HUServiceGridItemManager, NSString;

@interface HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>
{
    _Bool _allowsEmptySelection;	// 8 = 0x8
    _Bool _allowsMultipleSelection;	// 9 = 0x9
    HUServiceGridItemManager *_serviceGridItemManager;	// 16 = 0x10
    HFMutableSetDiff *_mutableSelectedItems;	// 24 = 0x18
}

+ (CDUnknownBlockType)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000377bf2
+ (CDUnknownBlockType)transformationBlockWithOptions:(unsigned long long)arg1;	// IMP=0x000000000037782a
+ (id)itemServiceTypesToHide;	// IMP=0x0000000000377811
- (void).cxx_destruct;	// IMP=0x000000000037a90d
@property(retain, nonatomic) HFMutableSetDiff *mutableSelectedItems; // @synthesize mutableSelectedItems=_mutableSelectedItems;
@property(nonatomic) __weak HUServiceGridItemManager *serviceGridItemManager; // @synthesize serviceGridItemManager=_serviceGridItemManager;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) _Bool allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
- (void)_deleteItemFromSelection:(id)arg1;	// IMP=0x000000000037a7f9
- (void)_addItemToSelection:(id)arg1;	// IMP=0x000000000037a777
- (_Bool)_wantsToggleButtonForSection:(unsigned long long)arg1;	// IMP=0x000000000037a76f
- (_Bool)_shouldShowToggleButtonForSection:(long long)arg1;	// IMP=0x000000000037a681
- (void)_updateToggleStateForSection:(long long)arg1 headerViewCell:(id)arg2;	// IMP=0x000000000037a0bf
- (void)_setSelected:(_Bool)arg1 forItemsInSection:(long long)arg2;	// IMP=0x0000000000379cfa
- (void)_updateSelectionState:(_Bool)arg1 forCell:(id)arg2;	// IMP=0x0000000000379c55
- (_Bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;	// IMP=0x0000000000379b39
- (void)addItemToSelection:(id)arg1;	// IMP=0x0000000000379759
- (void)deleteItemFromSelection:(id)arg1;	// IMP=0x00000000003795b1
- (void)didDeselectItem:(id)arg1;	// IMP=0x00000000003795ab
- (void)didSelectItem:(id)arg1;	// IMP=0x00000000003795a5
- (void)didChangeSelection;	// IMP=0x000000000037959f
- (_Bool)canSelectItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000379597
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;	// IMP=0x000000000037958f
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000037944b
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000378f51
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000378c91
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0000000000378c89
- (double)headerViewHeightForSectionIndex:(unsigned long long)arg1;	// IMP=0x0000000000378ba0
- (void)itemManagerDidUpdate:(id)arg1;	// IMP=0x000000000037890d
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000003786d7
- (void)_removeAllServicesInSectionFromButton:(id)arg1;	// IMP=0x00000000003786a1
- (void)_addAllServicesInSectionFromButton:(id)arg1;	// IMP=0x0000000000378668
@property(retain, nonatomic) HFSetDiff *selectedItems;
- (id)initWithItemManager:(id)arg1;	// IMP=0x000000000037800c
- (id)initWithServiceGridItemManager:(id)arg1;	// IMP=0x0000000000377f0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

