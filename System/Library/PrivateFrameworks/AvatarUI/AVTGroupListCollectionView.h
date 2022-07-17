//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AvatarUI/AVTGroupPicker-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class CALayer, NSArray, NSString, UICollectionView;
@protocol AVTGroupPickerDelegate;

@interface AVTGroupListCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTGroupPicker>
{
    id <AVTGroupPickerDelegate> delegate;	// 8 = 0x8
    NSArray *_groupItems;	// 16 = 0x10
    long long selectedGroupIndex;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    CALayer *_border;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000057f25
@property(retain, nonatomic) CALayer *border; // @synthesize border=_border;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long selectedGroupIndex; // @synthesize selectedGroupIndex;
@property(readonly, nonatomic) NSArray *groupItems; // @synthesize groupItems=_groupItems;
@property(nonatomic) __weak id <AVTGroupPickerDelegate> delegate; // @synthesize delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000057e04
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000057d7f
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000057bd1
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000057b8d
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000057b82
- (void)setSelectedGroupIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000057aff
- (void)reloadData;	// IMP=0x0000000000057ac2
- (void)updateCollectionLayoutItemSize:(id)arg1;	// IMP=0x00000000000579d0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000578a1
- (void)layoutSubviews;	// IMP=0x0000000000057673
- (double)borderWidth;	// IMP=0x0000000000057661
- (void)setupView;	// IMP=0x0000000000057478
- (void)setupBorder;	// IMP=0x00000000000573a5
- (id)initWithGroupItems:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000572ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
