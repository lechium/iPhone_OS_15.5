//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

#import <DocumentCamera/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol ICDocCamThumbnailViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamReorderingThumbnailCollectionViewLayout : UICollectionViewLayout <UICollectionViewDelegate>
{
    _Bool _movingItem;	// 8 = 0x8
    _Bool _isScrollingBetweenPages;	// 9 = 0x9
    _Bool _isScrubbing;	// 10 = 0xa
    _Bool _isUndergoingOrientationChange;	// 11 = 0xb
    _Bool _layoutCacheIsValid;	// 12 = 0xc
    id <ICDocCamThumbnailViewLayoutDelegate> _delegate;	// 16 = 0x10
    double _itemSpacing;	// 24 = 0x18
    double _topBottomMargins;	// 32 = 0x20
    double _leftMargin;	// 40 = 0x28
    double _rightMargin;	// 48 = 0x30
    double _itemHeight;	// 56 = 0x38
    NSArray *_itemAttributes;	// 64 = 0x40
    NSMutableArray *_imageSizeCache;	// 72 = 0x48
    unsigned long long _currentItem;	// 80 = 0x50
    double _currentInterPageScrollPosition;	// 88 = 0x58
    NSMutableArray *_deleteIndexPaths;	// 96 = 0x60
    NSMutableArray *_insertIndexPaths;	// 104 = 0x68
    struct CGSize _cachedContentSize;	// 112 = 0x70
}

+ (double)effectiveAspectRatioForSize:(struct CGSize)arg1;	// IMP=0x0000000000024337
- (void).cxx_destruct;	// IMP=0x0000000000026828
@property(retain, nonatomic) NSMutableArray *insertIndexPaths; // @synthesize insertIndexPaths=_insertIndexPaths;
@property(retain, nonatomic) NSMutableArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(nonatomic) double currentInterPageScrollPosition; // @synthesize currentInterPageScrollPosition=_currentInterPageScrollPosition;
@property(nonatomic) unsigned long long currentItem; // @synthesize currentItem=_currentItem;
@property(retain, nonatomic) NSMutableArray *imageSizeCache; // @synthesize imageSizeCache=_imageSizeCache;
@property(copy, nonatomic) NSArray *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(nonatomic) struct CGSize cachedContentSize; // @synthesize cachedContentSize=_cachedContentSize;
@property(nonatomic) _Bool layoutCacheIsValid; // @synthesize layoutCacheIsValid=_layoutCacheIsValid;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double topBottomMargins; // @synthesize topBottomMargins=_topBottomMargins;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) _Bool isUndergoingOrientationChange; // @synthesize isUndergoingOrientationChange=_isUndergoingOrientationChange;
@property(nonatomic) _Bool isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(nonatomic) _Bool isScrollingBetweenPages; // @synthesize isScrollingBetweenPages=_isScrollingBetweenPages;
@property(nonatomic) _Bool movingItem; // @synthesize movingItem=_movingItem;
@property(readonly, nonatomic) __weak id <ICDocCamThumbnailViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x00000000000264ee
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x0000000000026408
- (void)finalizeCollectionViewUpdates;	// IMP=0x00000000000263ae
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x00000000000260d5
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000000260cd
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000025f13
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000025e23
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000000025df5
- (void)updateLayoutCacheIfNecessary;	// IMP=0x00000000000255a6
- (void)prepareLayout;	// IMP=0x0000000000025594
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000000002534f
- (void)setCurrentItem:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002515a
- (void)setContentOffsetForItem:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002505e
- (double)horizontalContentOffsetForItem:(unsigned long long)arg1;	// IMP=0x0000000000024f3f
- (double)horizontalContentOffsetAdjustmentForItem:(unsigned long long)arg1;	// IMP=0x0000000000024dae
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x0000000000024a10
- (void)setInterPageScrollPosition:(double)arg1;	// IMP=0x000000000002459f
@property(readonly, nonatomic) double extraSpacingForCurrentItem;
- (struct CGSize)itemSizeForImageSize:(struct CGSize)arg1;	// IMP=0x000000000002436f
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000024264

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

