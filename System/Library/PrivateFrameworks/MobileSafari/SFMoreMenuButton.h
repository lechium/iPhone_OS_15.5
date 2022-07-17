//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFDeferrableUpdateView-Protocol.h>

@class SFProgressView, UIColor, UIView;

@interface SFMoreMenuButton <SFDeferrableUpdateView>
{
    double _downloadProgress;	// 8 = 0x8
    SFProgressView *_progressView;	// 16 = 0x10
    double _movedToWindowTime;	// 24 = 0x18
    _Bool _isShowingArrowDown;	// 32 = 0x20
    _Bool _iconFilled;	// 33 = 0x21
    UIColor *_progressTintColor;	// 40 = 0x28
    CDStruct_4e0a34f2 _deferrableUpdateViewState;	// 48 = 0x30
    UIView *_viewPendingPulse;	// 72 = 0x48
    long long _progressStyle;	// 80 = 0x50
    long long _symbolScale;	// 88 = 0x58
    struct NSDirectionalEdgeInsets _contentInsets;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000088df6
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long symbolScale; // @synthesize symbolScale=_symbolScale;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) long long progressStyle; // @synthesize progressStyle=_progressStyle;
- (void)updateContents;	// IMP=0x0000000000088d8b
- (CDStruct_4e0a34f2 *)deferrableUpdateViewState;	// IMP=0x0000000000088d7b
- (double)_progressViewTrackWidth;	// IMP=0x0000000000088d50
- (double)_progressViewRadius;	// IMP=0x0000000000088c51
- (void)_updateProgressViewMetrics;	// IMP=0x0000000000088bf7
- (void)_setShowsProgressView:(_Bool)arg1;	// IMP=0x0000000000088ad7
- (_Bool)_shouldShowProgressView;	// IMP=0x0000000000088ab4
- (void)_updateImageAllowingDissolve:(_Bool)arg1;	// IMP=0x00000000000884d2
- (void)_updateImage;	// IMP=0x00000000000884bb
- (void)_updateContentsAnimated:(_Bool)arg1;	// IMP=0x00000000000883ae
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000882bb
- (void)tintColorDidChange;	// IMP=0x0000000000088266
- (void)didMoveToWindow;	// IMP=0x000000000008820d
- (void)layoutSubviews;	// IMP=0x00000000000880b1
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000088053
@property(retain, nonatomic) UIColor *progressTintColor;
@property(nonatomic, getter=isIconFilled) _Bool iconFilled;
- (void)setNeedsPulseOnView:(id)arg1;	// IMP=0x0000000000087e4b
- (void)setDownloadProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000087e1b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000087cc3

@end
