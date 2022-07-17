//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPaymentHeroImageControllerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, PKImageSequenceView, PKPaymentHeroImageController, UIImageView;

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate>
{
    long long _context;	// 8 = 0x8
    struct CGSize _aspectSize;	// 16 = 0x10
    _Bool _imageDownloadFailed;	// 32 = 0x20
    UIView *_backgroundView;	// 40 = 0x28
    UIView *_bottomDividerView;	// 48 = 0x30
    UIView *_heroDeviceView;	// 56 = 0x38
    PKImageSequenceView *_cardCarouselView;	// 64 = 0x40
    PKPaymentHeroImageController *_heroImageController;	// 72 = 0x48
    UIImageView *_faceIDGlyphView;	// 80 = 0x50
    NSMutableArray *_heroImageIdentifiers;	// 88 = 0x58
    NSMutableDictionary *_heroImagesDictionary;	// 96 = 0x60
}

+ (id)assetBackgroundColor;	// IMP=0x0000000000046d9d
- (void).cxx_destruct;	// IMP=0x00000000000493fb
- (double)_phoneCardHeightInset;	// IMP=0x00000000000493a0
- (double)_phoneTopPadding;	// IMP=0x000000000004937e
- (void)_promptTapToRadarWithTitle:(id)arg1 description:(id)arg2;	// IMP=0x0000000000048fe1
- (void)_imageFailedToDownload:(id)arg1;	// IMP=0x0000000000048e0a
- (_Bool)_isSmallPhone;	// IMP=0x0000000000048df9
- (double)_instructionFontSizeForContext:(long long)arg1;	// IMP=0x0000000000048dd8
- (struct CGRect)_watchCardViewFrameForBounds:(struct CGRect)arg1;	// IMP=0x0000000000048c77
- (struct CGSize)_watchCardCarouselSizeForSize:(struct CGSize)arg1;	// IMP=0x0000000000048aca
- (void)_createSubviews;	// IMP=0x0000000000048628
- (void)_configureHeroCardsFromHeroImages:(id)arg1;	// IMP=0x0000000000048038
- (id)_heroImages;	// IMP=0x0000000000047e7c
- (void)heroImageController:(id)arg1 didFinishDownloadingImageData:(id)arg2 forImage:(id)arg3 error:(id)arg4;	// IMP=0x0000000000047c0d
- (void)stopAnimation;	// IMP=0x0000000000047bf0
- (void)startAnimation;	// IMP=0x0000000000047bd3
- (void)layoutSubviews;	// IMP=0x0000000000047439
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000472c8
- (id)initWithContext:(long long)arg1 heroImageController:(id)arg2 heroImages:(id)arg3 product:(id)arg4;	// IMP=0x0000000000046dbc
- (id)initWithContext:(long long)arg1 heroImageController:(id)arg2 heroImages:(id)arg3;	// IMP=0x0000000000046da7
- (id)pk_childrenForAppearance;	// IMP=0x00000000000105eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
