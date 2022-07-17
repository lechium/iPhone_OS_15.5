//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUAssetSharedViewModelChangeObserver-Protocol.h>

@class NSString, PLRoundProgressView, PUAssetSharedViewModel, PUOperationStatus, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PURenderIndicatorTileViewController <PUAssetSharedViewModelChangeObserver>
{
    _Bool _needsUpdateStatus;	// 8 = 0x8
    _Bool _needsUpdateSizeClass;	// 9 = 0x9
    _Bool _needsUpdateStatusViews;	// 10 = 0xa
    _Bool _isProgressViewVisible;	// 11 = 0xb
    _Bool _willShowProgressAfterDelay;	// 12 = 0xc
    PUAssetSharedViewModel *_assetSharedViewModel;	// 16 = 0x10
    PUOperationStatus *_status;	// 24 = 0x18
    long long _sizeClass;	// 32 = 0x20
    UIView *_roundedBackgroundView;	// 40 = 0x28
    UILabel *_renderingLabel;	// 48 = 0x30
    PLRoundProgressView *_progressView;	// 56 = 0x38
    UIButton *_errorButton;	// 64 = 0x40
    double _renderLabelTextWidth;	// 72 = 0x48
    struct CGSize _progressIndicatorSize;	// 80 = 0x50
}

+ (_Bool)wantsRenderViewForTypeOfProcessingNeeded:(unsigned short)arg1;	// IMP=0x000000000018b5ac
+ (id)_loadErrorIconForSizeClass:(long long)arg1;	// IMP=0x000000000018b4bb
+ (struct CGSize)renderIndicatorTileSizeForSizeClass:(long long)arg1;	// IMP=0x000000000018b498
+ (struct CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1;	// IMP=0x000000000018b487
- (void).cxx_destruct;	// IMP=0x000000000018b117
@property(nonatomic) _Bool willShowProgressAfterDelay; // @synthesize willShowProgressAfterDelay=_willShowProgressAfterDelay;
@property(nonatomic) double renderLabelTextWidth; // @synthesize renderLabelTextWidth=_renderLabelTextWidth;
@property(retain, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(nonatomic) _Bool isProgressViewVisible; // @synthesize isProgressViewVisible=_isProgressViewVisible;
@property(retain, nonatomic) PLRoundProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *renderingLabel; // @synthesize renderingLabel=_renderingLabel;
@property(retain, nonatomic) UIView *roundedBackgroundView; // @synthesize roundedBackgroundView=_roundedBackgroundView;
@property(nonatomic) struct CGSize progressIndicatorSize; // @synthesize progressIndicatorSize=_progressIndicatorSize;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(copy, nonatomic) PUOperationStatus *status; // @synthesize status=_status;
@property(nonatomic) _Bool needsUpdateStatusViews; // @synthesize needsUpdateStatusViews=_needsUpdateStatusViews;
@property(nonatomic) _Bool needsUpdateSizeClass; // @synthesize needsUpdateSizeClass=_needsUpdateSizeClass;
@property(nonatomic) _Bool needsUpdateStatus; // @synthesize needsUpdateStatus=_needsUpdateStatus;
@property(retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // @synthesize assetSharedViewModel=_assetSharedViewModel;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000018aeb3
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000018ae2e
- (void)_updateSubviewOrdering;	// IMP=0x000000000018ad88
- (void)_updateStatusViewsIfNeeded;	// IMP=0x000000000018a428
- (void)_invalidateStatusViews;	// IMP=0x000000000018a3f5
- (void)_updateSizeClassIfNeeded;	// IMP=0x000000000018a2ee
- (void)_invalidateSizeClass;	// IMP=0x000000000018a2bb
- (void)_updateStatusIfNeeded;	// IMP=0x000000000018a211
- (void)_invalidateStatus;	// IMP=0x000000000018a18a
- (void)_setNeedsUpdate;	// IMP=0x000000000018a184
- (_Bool)_needsUpdate;	// IMP=0x000000000018a137
- (void)_updateIfNeeded;	// IMP=0x000000000018a054
- (void)_handleErrorButtonTap:(id)arg1;	// IMP=0x0000000000189fbf
- (void)setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000189c13
- (void)setProgressViewVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000189bfe
- (void)setProgressViewVisible:(_Bool)arg1;	// IMP=0x0000000000189bea
- (void)_updateViewFramesForCollapseState:(_Bool)arg1;	// IMP=0x0000000000189867
- (struct CGRect)_expandedBackgroundViewFrame;	// IMP=0x00000000001897db
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x00000000001896a3
- (void)becomeReusable;	// IMP=0x000000000018953d
- (void)viewDidLoad;	// IMP=0x00000000001894da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
