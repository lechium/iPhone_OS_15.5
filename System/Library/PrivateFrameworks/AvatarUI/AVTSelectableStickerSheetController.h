//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/AVTObjectViewController-Protocol.h>
#import <AvatarUI/AVTStickerCollectionViewCellDelegate-Protocol.h>
#import <AvatarUI/AVTStickerSheetController-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTStickerSheetModel, AVTUIStickerItem, NSArray, NSIndexPath, NSString, UICollectionView, UIImage, UIView;
@protocol AVTAvatarRecord, AVTPresenterDelegate, AVTStickerDisclosureValidationDelegate, AVTStickerSheetControllerDelegate, AVTStickerSheetDelegate, AVTStickerTaskScheduler, AVTStickerViewControllerImageDelegate;

@interface AVTSelectableStickerSheetController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTNotifyingContainerViewDelegate, AVTStickerCollectionViewCellDelegate, AVTObjectViewController, AVTStickerSheetController>
{
    _Bool _showCellSelectionLayer;	// 8 = 0x8
    _Bool _isPageVisible;	// 9 = 0x9
    _Bool _areAllStickersRendered;	// 10 = 0xa
    _Bool _showPrereleaseSticker;	// 11 = 0xb
    _Bool _allowsPoseCapture;	// 12 = 0xc
    id <AVTPresenterDelegate> presenterDelegate;	// 16 = 0x10
    id <AVTStickerSheetControllerDelegate> delegate;	// 24 = 0x18
    id <AVTStickerDisclosureValidationDelegate> _disclosureValidationDelegate;	// 32 = 0x20
    id <AVTStickerViewControllerImageDelegate> _imageDelegate;	// 40 = 0x28
    id <AVTStickerSheetDelegate> _stickerSheetDelegate;	// 48 = 0x30
    UIView *_view;	// 56 = 0x38
    UICollectionView *_collectionView;	// 64 = 0x40
    AVTStickerSheetModel *_model;	// 72 = 0x48
    UIImage *_placeholderImage;	// 80 = 0x50
    id <AVTStickerTaskScheduler> _taskScheduler;	// 88 = 0x58
    NSArray *_stickerItems;	// 96 = 0x60
    NSIndexPath *_selectedIndexPath;	// 104 = 0x68
    AVTUIStickerItem *_cameraStickerItem;	// 112 = 0x70
    struct UIEdgeInsets _sectionInsets;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000007ce35
@property(nonatomic) __weak AVTUIStickerItem *cameraStickerItem; // @synthesize cameraStickerItem=_cameraStickerItem;
@property(nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSArray *stickerItems; // @synthesize stickerItems=_stickerItems;
@property(nonatomic) _Bool allowsPoseCapture; // @synthesize allowsPoseCapture=_allowsPoseCapture;
@property(nonatomic) _Bool showPrereleaseSticker; // @synthesize showPrereleaseSticker=_showPrereleaseSticker;
@property(readonly, nonatomic) id <AVTStickerTaskScheduler> taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) AVTStickerSheetModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool areAllStickersRendered; // @synthesize areAllStickersRendered=_areAllStickersRendered;
@property(nonatomic) _Bool isPageVisible; // @synthesize isPageVisible=_isPageVisible;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool showCellSelectionLayer; // @synthesize showCellSelectionLayer=_showCellSelectionLayer;
@property(nonatomic) __weak id <AVTStickerSheetDelegate> stickerSheetDelegate; // @synthesize stickerSheetDelegate=_stickerSheetDelegate;
@property(nonatomic) __weak id <AVTStickerViewControllerImageDelegate> imageDelegate; // @synthesize imageDelegate=_imageDelegate;
@property(nonatomic) __weak id <AVTStickerDisclosureValidationDelegate> disclosureValidationDelegate; // @synthesize disclosureValidationDelegate=_disclosureValidationDelegate;
@property(nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(nonatomic) __weak id <AVTStickerSheetControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
- (_Bool)isCameraItem:(id)arg1;	// IMP=0x000000000007cbe6
- (void)clearStickerSelection;	// IMP=0x000000000007cb23
- (void)selectStickerWithIdentifier:(id)arg1;	// IMP=0x000000000007c947
- (unsigned long long)stickerIndexInModelforIndexPath:(id)arg1;	// IMP=0x000000000007c859
- (void)didInteractWithStickerAtIndexPath:(id)arg1 byPeeling:(_Bool)arg2;	// IMP=0x000000000007c74c
- (void)updateCell:(id)arg1 withImage:(id)arg2 sticker:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000007c69c
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;	// IMP=0x000000000007c696
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;	// IMP=0x000000000007c5f0
- (void)stickerCellDidPeelSticker:(id)arg1;	// IMP=0x000000000007c555
- (void)stickerCellDidTapSticker:(id)arg1;	// IMP=0x000000000007c4bd
- (void)scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007c3d9
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000007c33a
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000007c299
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000007c0f5
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x000000000007bf87
- (id)cellForStickerItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000007b321
- (id)cellForCameraItemAtIndexPath:(id)arg1;	// IMP=0x000000000007b219
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000007afd9
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000007af43
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000007ae30
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000007adec
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000007ade1
- (CDUnknownBlockType)placeholderProvider;	// IMP=0x000000000007aa5d
- (void)reloadCollectionViewItemForStickerItem:(id)arg1;	// IMP=0x000000000007a833
- (void)updateItem:(id)arg1 withStickerResource:(id)arg2 reloadCell:(_Bool)arg3;	// IMP=0x000000000007a5fd
- (double)numberOfItemsPerRow;	// IMP=0x000000000007a56f
- (void)clearStickerRendererIfNeeded;	// IMP=0x000000000007a4e1
- (void)discardStickerItems;	// IMP=0x000000000007a1c2
- (id)firstStickerView;	// IMP=0x000000000007a10d
- (void)scheduleSheetStickerTask:(CDUnknownBlockType)arg1 withIndexPath:(id)arg2;	// IMP=0x0000000000079fcb
- (void)scheduleSheetPlaceholderTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000079ea5
- (void)startAllSchedulerTasksExcludingVisibleIndexPaths:(id)arg1;	// IMP=0x0000000000079a31
- (void)startAllSchedulerTasks;	// IMP=0x0000000000079a1d
- (void)sheetWillAppear;	// IMP=0x0000000000079871
- (void)sheetDidDisappear;	// IMP=0x00000000000795cd
@property(readonly, nonatomic) id <AVTAvatarRecord> avatarRecord;
- (void)loadView;	// IMP=0x000000000007920b
- (struct CGPoint)maxedContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000000790d2
- (struct CGSize)minimumContentSizeForSize:(struct CGSize)arg1;	// IMP=0x000000000007905f
- (double)topPadding;	// IMP=0x0000000000078f6b
- (void)dealloc;	// IMP=0x0000000000078ea9
- (id)initWithStickerSheetModel:(id)arg1 taskScheduler:(id)arg2 allowsPoseCapture:(_Bool)arg3;	// IMP=0x0000000000078cc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

