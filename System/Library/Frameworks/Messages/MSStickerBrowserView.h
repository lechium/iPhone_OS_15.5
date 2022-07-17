//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Messages/UICollectionViewDataSource-Protocol.h>
#import <Messages/UICollectionViewDataSourcePrefetching-Protocol.h>
#import <Messages/UICollectionViewDelegate-Protocol.h>

@class CKDispatchQueue, MSStickerBrowserViewLayoutSpec, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout;
@protocol MSStickerBrowserViewDataSource, MSStickerBrowserViewDisplayDelegate;

@interface MSStickerBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>
{
    _Bool _isRestoringContentOffset;	// 8 = 0x8
    _Bool _animating;	// 9 = 0x9
    long long _stickerSize;	// 16 = 0x10
    id <MSStickerBrowserViewDataSource> _dataSource;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    UICollectionViewFlowLayout *_flowLayout;	// 40 = 0x28
    MSStickerBrowserViewLayoutSpec *_layoutSpec;	// 48 = 0x30
    NSMutableArray *_cellsToAnimate;	// 56 = 0x38
    NSTimer *_animationTimer;	// 64 = 0x40
    unsigned long long _currentlyAnimatingIndex;	// 72 = 0x48
    NSMutableDictionary *_stickerCache;	// 80 = 0x50
    CKDispatchQueue *_stickerCacheQueue;	// 88 = 0x58
    id <MSStickerBrowserViewDisplayDelegate> _displayDelegate;	// 96 = 0x60
    struct CGPoint _restoredContentOffset;	// 104 = 0x68
    struct CGSize _browserSizeToRestoreFrom;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000010e64
@property(nonatomic) id <MSStickerBrowserViewDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(retain, nonatomic) CKDispatchQueue *stickerCacheQueue; // @synthesize stickerCacheQueue=_stickerCacheQueue;
@property(retain, nonatomic) NSMutableDictionary *stickerCache; // @synthesize stickerCache=_stickerCache;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool isRestoringContentOffset; // @synthesize isRestoringContentOffset=_isRestoringContentOffset;
@property(nonatomic) struct CGSize browserSizeToRestoreFrom; // @synthesize browserSizeToRestoreFrom=_browserSizeToRestoreFrom;
@property(nonatomic) struct CGPoint restoredContentOffset; // @synthesize restoredContentOffset=_restoredContentOffset;
@property(nonatomic) unsigned long long currentlyAnimatingIndex; // @synthesize currentlyAnimatingIndex=_currentlyAnimatingIndex;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NSMutableArray *cellsToAnimate; // @synthesize cellsToAnimate=_cellsToAnimate;
@property(retain, nonatomic) MSStickerBrowserViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MSStickerBrowserViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;
- (void)_stopAnimating;	// IMP=0x0000000000010b03
- (void)_startAnimating;	// IMP=0x00000000000109ad
- (void)invalidateFlowLayout;	// IMP=0x0000000000010970
- (void)restoreFromState:(id)arg1;	// IMP=0x00000000000107ea
@property(readonly, nonatomic) NSDictionary *stateRestorationInfo;
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x0000000000010593
- (void)prepareForSnapshotting;	// IMP=0x00000000000103be
- (void)_updateCollectionViewSpecIfNeeded;	// IMP=0x00000000000101a8
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x000000000000fdf6
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000000fdb4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000000fc64
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000000fbd8
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000000fb52
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000000fb47
- (void)didMoveToWindow;	// IMP=0x000000000000fa8b
- (void)layoutSubviews;	// IMP=0x000000000000f650
- (id)_stickerAtIndexPath:(id)arg1;	// IMP=0x000000000000f596
- (void)_reloadStickersAtIndexes:(id)arg1;	// IMP=0x000000000000f422
- (void)reloadData;	// IMP=0x000000000000f34e
- (void)animateNextCell;	// IMP=0x000000000000ef0a
- (void)configureStickerView;	// IMP=0x000000000000ec95
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000ec32
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) struct CGPoint contentOffset;
- (void)dealloc;	// IMP=0x000000000000e9f7
- (id)initWithFrame:(struct CGRect)arg1 stickerSize:(long long)arg2;	// IMP=0x000000000000e988
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e92d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000e8c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
