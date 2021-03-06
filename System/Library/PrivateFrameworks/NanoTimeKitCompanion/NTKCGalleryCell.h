//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <NanoTimeKitCompanion/UICollectionViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, NTKGalleryCollection, UICollectionView, UICollectionViewFlowLayout, UILabel, UIStackView, _NTKCAddNewFace;
@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _allSnapshotsLoaded;	// 8 = 0x8
    _Bool _showFooterInCollectionView;	// 9 = 0x9
    NTKGalleryCollection *_collection;	// 16 = 0x10
    id <NTKCGalleryCellDelegate> _delegate;	// 24 = 0x18
    long long _selectedIndex;	// 32 = 0x20
    UILabel *_title;	// 40 = 0x28
    UICollectionView *_collectionView;	// 48 = 0x30
    UICollectionViewFlowLayout *_layout;	// 56 = 0x38
    NSLayoutConstraint *_cvHeightConstraint;	// 64 = 0x40
    UIStackView *_contentStack;	// 72 = 0x48
    UIStackView *_titleStack;	// 80 = 0x50
    UIStackView *_footerStack;	// 88 = 0x58
    UILabel *_footer;	// 96 = 0x60
    NSArray *_snapshotRequests;	// 104 = 0x68
    _NTKCAddNewFace *_addNewFace;	// 112 = 0x70
}

+ (id)reuseIdentifier;	// IMP=0x000000000013634b
- (void).cxx_destruct;	// IMP=0x000000000013953b
@property(nonatomic) _Bool showFooterInCollectionView; // @synthesize showFooterInCollectionView=_showFooterInCollectionView;
@property(nonatomic) _Bool allSnapshotsLoaded; // @synthesize allSnapshotsLoaded=_allSnapshotsLoaded;
@property(retain, nonatomic) _NTKCAddNewFace *addNewFace; // @synthesize addNewFace=_addNewFace;
@property(copy, nonatomic) NSArray *snapshotRequests; // @synthesize snapshotRequests=_snapshotRequests;
@property(retain, nonatomic) UILabel *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIStackView *footerStack; // @synthesize footerStack=_footerStack;
@property(retain, nonatomic) UIStackView *titleStack; // @synthesize titleStack=_titleStack;
@property(retain, nonatomic) UIStackView *contentStack; // @synthesize contentStack=_contentStack;
@property(retain, nonatomic) NSLayoutConstraint *cvHeightConstraint; // @synthesize cvHeightConstraint=_cvHeightConstraint;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <NTKCGalleryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NTKGalleryCollection *collection; // @synthesize collection=_collection;
- (void)_fontSizeDidChange;	// IMP=0x00000000001391de
- (_Bool)_shouldShowAddNewFace;	// IMP=0x00000000001391c1
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0000000000139025
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000138e86
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000000138d82
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000138abb
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000138904
- (id)containerViewForFace:(id)arg1;	// IMP=0x0000000000138858
- (id)faceForLocation:(struct CGPoint)arg1;	// IMP=0x00000000001387be
- (void)clearSelectedFaces;	// IMP=0x0000000000138670
- (void)selectFace:(id)arg1;	// IMP=0x00000000001385ae
- (void)updateFaceAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001384f4
- (struct CGPoint)_contentInsetPoint;	// IMP=0x0000000000138465
@property(nonatomic) struct CGPoint contentOffset;
- (void)layoutSubviews;	// IMP=0x0000000000137850
- (void)dealloc;	// IMP=0x00000000001377ce
- (void)_resetSnapshotRequests;	// IMP=0x00000000001375b0
- (void)prepareForReuse;	// IMP=0x00000000001374fd
- (void)_configureViews;	// IMP=0x0000000000136ef7
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001363c1
- (id)init;	// IMP=0x0000000000136364

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

