//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItemPresenter-Protocol.h>
#import <PassKitUI/PKDashboardMessagesViewDelegate-Protocol.h>

@class NSMutableArray, NSString, PKDashboardMessagesView, PKPassGroupView, UIScrollView;

@interface PKDashboardPassMessagePresenter : NSObject <PKDashboardMessagesViewDelegate, PKDashboardItemPresenter>
{
    PKPassGroupView *_groupView;	// 8 = 0x8
    PKDashboardMessagesView *_sampleMessageView;	// 16 = 0x10
    NSMutableArray *_tablesViews;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    unsigned long long _currentIndex;	// 40 = 0x28
    NSString *_currentIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002ab8c9
- (unsigned long long)_indexForIdentifier:(id)arg1 inMessages:(id)arg2;	// IMP=0x00000000002ab79d
- (void)messagesView:(id)arg1 scrolledToMessageWithIdentifier:(id)arg2;	// IMP=0x00000000002ab6f7
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x00000000002ab5fa
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;	// IMP=0x00000000002ab435
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(CDUnknownBlockType)arg5;	// IMP=0x00000000002ab42f
- (struct CGSize)sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002ab354
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;	// IMP=0x00000000002ab342
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000002ab26a
- (id)_identifierForItem:(id)arg1;	// IMP=0x00000000002ab25d
- (id)collectionViewCellClasses;	// IMP=0x00000000002ab1dd
- (Class)itemClass;	// IMP=0x00000000002ab1cc
- (id)initWithPassGroupView:(id)arg1;	// IMP=0x00000000002ab120

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
