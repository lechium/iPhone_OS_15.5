//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapKit/UICollectionViewDelegate-Protocol.h>
#import <MapKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSIndexPath, NSLayoutConstraint, NSString, UICollectionView, UICollectionViewDiffableDataSource;
@protocol MKTransitSystemFilterViewDelegate;

__attribute__((visibility("hidden")))
@interface MKTransitSystemFilterView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;	// 8 = 0x8
    UICollectionViewDiffableDataSource *_dataSource;	// 16 = 0x10
    NSIndexPath *_selectedIndexPath;	// 24 = 0x18
    NSLayoutConstraint *_heightConstraint;	// 32 = 0x20
    double _cachedHeight;	// 40 = 0x28
    NSArray *_transitSystems;	// 48 = 0x30
    id <MKTransitSystemFilterViewDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001cc1ee
@property(nonatomic) __weak id <MKTransitSystemFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *transitSystems; // @synthesize transitSystems=_transitSystems;
- (void)_contentSizeDidChange;	// IMP=0x00000000001cc0de
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x00000000001cc0b4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001cbed7
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001cbddb
- (void)_updateAppearance;	// IMP=0x00000000001cbd3b
- (void)_setupConstraints;	// IMP=0x00000000001cb978
- (void)_setupCollectionView;	// IMP=0x00000000001cb6b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001cb642

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

