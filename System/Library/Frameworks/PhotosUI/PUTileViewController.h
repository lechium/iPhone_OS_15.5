//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSTimer, UIView;

@interface PUTileViewController
{
    _Bool _contentViewEnabled;	// 8 = 0x8
    _Bool __loadingView;	// 9 = 0x9
    _Bool __edgeAntialiasingEnabled;	// 10 = 0xa
    _Bool _isReadyForDisplay;	// 11 = 0xb
    UIView *_contentView;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
    UIView *_loadedView;	// 32 = 0x20
    UIView *__tintView;	// 40 = 0x28
    UIView *__visibleRectView;	// 48 = 0x30
    CDUnknownBlockType __onReadyToDisplayBlock;	// 56 = 0x38
    NSTimer *__readinessTimer;	// 64 = 0x40
    UIView *__maskView;	// 72 = 0x48
    NSArray *_gestureRecognizers;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000043f16d
@property(nonatomic, setter=_setReadyForDisplay:) _Bool isReadyForDisplay; // @synthesize isReadyForDisplay=_isReadyForDisplay;
@property(retain, nonatomic, setter=_setGestureRecognizers:) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic, setter=_setMaskView:) UIView *_maskView; // @synthesize _maskView=__maskView;
@property(nonatomic, setter=_setEdgeAntialiasingEnabled:) _Bool _edgeAntialiasingEnabled; // @synthesize _edgeAntialiasingEnabled=__edgeAntialiasingEnabled;
@property(retain, nonatomic, setter=_setReadinessTimer:) NSTimer *_readinessTimer; // @synthesize _readinessTimer=__readinessTimer;
@property(copy, nonatomic, setter=_setOnReadyToDisplayBlock:) CDUnknownBlockType _onReadyToDisplayBlock; // @synthesize _onReadyToDisplayBlock=__onReadyToDisplayBlock;
@property(retain, nonatomic, setter=_setVisibleRectView:) UIView *_visibleRectView; // @synthesize _visibleRectView=__visibleRectView;
@property(retain, nonatomic, setter=_setTintView:) UIView *_tintView; // @synthesize _tintView=__tintView;
@property(nonatomic, getter=_isLoadingView, setter=_setLoadingView:) _Bool _loadingView; // @synthesize _loadingView=__loadingView;
@property(retain, nonatomic, setter=_setLoadedView:) UIView *loadedView; // @synthesize loadedView=_loadedView;
@property(retain, nonatomic, setter=_setView:) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic, setter=_setContentView:) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isContentViewEnabled) _Bool contentViewEnabled; // @synthesize contentViewEnabled=_contentViewEnabled;
- (void)_handleReadinessForced:(_Bool)arg1;	// IMP=0x000000000043eeb8
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000043ed6e
- (void)_updateVisibleRectView;	// IMP=0x000000000043eaae
- (void)_invalidateTintView;	// IMP=0x000000000043ea54
- (void)_updateTintView;	// IMP=0x000000000043e7de
- (void)_updateDynamicStateDebugging;	// IMP=0x000000000043e639
- (void)didChangeVisibleRect;	// IMP=0x000000000043e5f8
- (_Bool)wantsVisibleRectChanges;	// IMP=0x000000000043e518
- (struct CGRect)visibleRect;	// IMP=0x000000000043e39a
- (void)removeAllAnimations;	// IMP=0x000000000043e316
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x000000000043dad3
- (_Bool)isPresentationActive;	// IMP=0x000000000043da52
- (id)presentationLayoutInfo;	// IMP=0x000000000043d584
- (void)prepareForReuse;	// IMP=0x000000000043d4f5
- (void)becomeReusable;	// IMP=0x000000000043d457
@property(readonly, nonatomic) _Bool isViewLoaded;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;	// IMP=0x000000000043d3f4
- (void)viewDidLoad;	// IMP=0x000000000043d3ee
@property(readonly, nonatomic) UIView *originalView;
- (id)loadView;	// IMP=0x000000000043cb93
- (void)addToTilingView:(id)arg1;	// IMP=0x000000000043ca0d
- (void)dealloc;	// IMP=0x000000000043c906

@end
