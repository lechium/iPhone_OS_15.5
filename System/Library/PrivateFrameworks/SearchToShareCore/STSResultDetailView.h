//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, STSAnimatedImageInfo, STSResultDetailFooter, UIImage, UIImageView, UIVisualEffectView;
@protocol STSResultDetailViewDelegate;

@interface STSResultDetailView : UIView
{
    UIVisualEffectView *_backgroundView;	// 8 = 0x8
    UIImageView *_thumbnailView;	// 16 = 0x10
    STSResultDetailFooter *_footer;	// 24 = 0x18
    _Bool _isFullscreen;	// 32 = 0x20
    _Bool _useBackgroundBlur;	// 33 = 0x21
    id <STSResultDetailViewDelegate> _delegate;	// 40 = 0x28
    UIView *_customContentView;	// 48 = 0x30
    UIImage *_thumbnail;	// 56 = 0x38
    STSAnimatedImageInfo *_thumbnailInfo;	// 64 = 0x40
    struct CGSize _contentSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000352a3
@property(nonatomic) _Bool useBackgroundBlur; // @synthesize useBackgroundBlur=_useBackgroundBlur;
@property(nonatomic) _Bool isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(readonly, nonatomic) STSAnimatedImageInfo *thumbnailInfo; // @synthesize thumbnailInfo=_thumbnailInfo;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) __weak id <STSResultDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *providerName;
@property(retain, nonatomic) UIImage *providerIcon;
@property(nonatomic) struct CGSize providerIconSize;
- (struct CGRect)contentFrameForBounds:(struct CGRect)arg1 traitCollection:(id)arg2;	// IMP=0x0000000000034e98
- (void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2;	// IMP=0x0000000000034c45
- (void)_didTapSend:(id)arg1;	// IMP=0x0000000000034ae3
- (void)_didTapProvider:(id)arg1;	// IMP=0x0000000000034a97
- (struct UIEdgeInsets)layoutMargins;	// IMP=0x0000000000034a6d
- (void)_calculateFramesForBounds:(struct CGRect)arg1 traitCollection:(id)arg2 andSetFrames:(_Bool)arg3 contentFrame:(struct CGRect *)arg4;	// IMP=0x0000000000034609
- (void)layoutSubviews;	// IMP=0x0000000000034582
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000343e2

@end
