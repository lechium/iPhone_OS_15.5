//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/CEKSliderDelegate-Protocol.h>
#import <PhotosUI/PUPhotoEditBaseAdjustmentCellDelegate-Protocol.h>
#import <PhotosUI/UICollectionViewDataSource-Protocol.h>
#import <PhotosUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class CEKSlider, NSIndexPath, NSString, PUAdjustmentInfo, PUAdjustmentsViewFlowLayout, PUPhotoEditAutoAdjustmentCell, PUSelectionFeedbackGenerator, PXUISnappingController, UICollectionView, UIImage;
@protocol PUAdjustmentViewControllerDelegate, PUAdjustmentsViewDataSource;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate, PUPhotoEditBaseAdjustmentCellDelegate, CEKSliderDelegate>
{
    struct CGPoint _lastOffset;	// 8 = 0x8
    double _previousTimeStamp;	// 24 = 0x18
    UIImage *_selectedItemBackgroundImage;	// 32 = 0x20
    UIImage *_itemBackgroundImage;	// 40 = 0x28
    _Bool _sliderIsScrubbing;	// 48 = 0x30
    PUPhotoEditAutoAdjustmentCell *_autoEnhanceCell;	// 56 = 0x38
    PXUISnappingController *_snappingController;	// 64 = 0x40
    _Bool _shouldDisplayControlValues;	// 72 = 0x48
    _Bool _shouldDisplayMappedValues;	// 73 = 0x49
    _Bool _didSetupControls;	// 74 = 0x4a
    _Bool _isAnimatingScroll;	// 75 = 0x4b
    _Bool _didPerformHapticFeedback;	// 76 = 0x4c
    id <PUAdjustmentsViewDataSource> _dataSource;	// 80 = 0x50
    id <PUAdjustmentViewControllerDelegate> _delegate;	// 88 = 0x58
    long long _layoutDirection;	// 96 = 0x60
    PUAdjustmentInfo *_selectedAdjustmentInfo;	// 104 = 0x68
    UICollectionView *_collectionView;	// 112 = 0x70
    PUAdjustmentsViewFlowLayout *_collectionViewLayout;	// 120 = 0x78
    CEKSlider *_slider;	// 128 = 0x80
    NSIndexPath *_selectedIndexPath;	// 136 = 0x88
    PUSelectionFeedbackGenerator *_selectionFeedbackGenerator;	// 144 = 0x90
    struct CGSize _controlSize;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000546f8
@property(nonatomic) _Bool didPerformHapticFeedback; // @synthesize didPerformHapticFeedback=_didPerformHapticFeedback;
@property(retain, nonatomic) PUSelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property(nonatomic) _Bool isAnimatingScroll; // @synthesize isAnimatingScroll=_isAnimatingScroll;
@property(nonatomic) _Bool didSetupControls; // @synthesize didSetupControls=_didSetupControls;
@property(nonatomic) struct CGSize controlSize; // @synthesize controlSize=_controlSize;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) CEKSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) PUAdjustmentsViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) PUAdjustmentInfo *selectedAdjustmentInfo; // @synthesize selectedAdjustmentInfo=_selectedAdjustmentInfo;
@property(nonatomic) _Bool shouldDisplayMappedValues; // @synthesize shouldDisplayMappedValues=_shouldDisplayMappedValues;
@property(nonatomic) _Bool shouldDisplayControlValues; // @synthesize shouldDisplayControlValues=_shouldDisplayControlValues;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) __weak id <PUAdjustmentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUAdjustmentsViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000544bb
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000543ea
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000054304
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000054201
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000053ec3
- (void)_performFeedbackIfNeeded;	// IMP=0x0000000000053e47
- (void)sliderDidEndScrolling:(id)arg1;	// IMP=0x0000000000053e35
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000000053e15
- (void)_sliderDidEndScrolling;	// IMP=0x0000000000053d64
- (void)slider:(id)arg1 willUpdateValue:(double *)arg2 withVelocity:(double)arg3;	// IMP=0x0000000000053d38
- (void)sliderWillBeginScrolling:(id)arg1;	// IMP=0x0000000000053c87
- (void)sliderValueChanged:(id)arg1;	// IMP=0x0000000000053ae5
- (void)toggleAutoEnhance;	// IMP=0x0000000000053ac8
- (void)decreaseAdjustmentValue:(_Bool)arg1;	// IMP=0x0000000000053a5e
- (void)increaseAdjustmentValue:(_Bool)arg1;	// IMP=0x00000000000539f7
- (void)resetControls;	// IMP=0x000000000005373d
- (void)updateControls;	// IMP=0x0000000000053493
- (void)_updateCell:(id)arg1 withInfo:(id)arg2;	// IMP=0x0000000000053352
- (id)_backgroundImageForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000532cf
- (void)_setupCellBackgroundImagesIfNeeded;	// IMP=0x000000000005316b
- (id)_circularImageWithSize:(struct CGSize)arg1 color:(id)arg2;	// IMP=0x000000000005307b
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x0000000000053073
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000052fbe
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000052dd8
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000052d5d
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000052cd3
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000052b2a
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000052a44
- (void)didToggleCell:(id)arg1;	// IMP=0x0000000000052915
- (_Bool)canToggleCell:(id)arg1;	// IMP=0x000000000005285c
- (void)_resetControlsAtIndexPath:(id)arg1;	// IMP=0x000000000005279c
- (void)_updateSelectedInfo;	// IMP=0x00000000000525cc
- (void)_updateCollectionViewLayoutDirection:(long long)arg1;	// IMP=0x000000000005251a
- (void)_updateSliderForControlAtIndexPath:(id)arg1;	// IMP=0x0000000000052143
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000052039
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000051d97
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000051d56
- (void)_updateViewLayout;	// IMP=0x00000000000517ae
- (long long)preferredUserInterfaceStyle;	// IMP=0x00000000000517a3
- (void)viewDidLoad;	// IMP=0x000000000005114c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000051102

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

