//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UIView;

@interface CAMImageWell : UIButton <UIGestureRecognizerDelegate>
{
    _Bool _scaledForInteraction;	// 8 = 0x8
    _Bool _thumbnailImageHidden;	// 9 = 0x9
    long long _layoutStyle;	// 16 = 0x10
    long long _cameraOrientation;	// 24 = 0x18
    UIView *__containerView;	// 32 = 0x20
    UIImageView *__thumbnailImageView;	// 40 = 0x28
    NSMutableArray *__dimmingViewQueue;	// 48 = 0x30
    UIImage *__thumbnailImage;	// 56 = 0x38
    UIImage *__placeholderImage;	// 64 = 0x40
    NSString *__uuid;	// 72 = 0x48
    struct UIEdgeInsets _tappableEdgeInsets;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000e6a0f
@property(retain, nonatomic, setter=_setUuid:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property(retain, nonatomic, setter=_setPlaceholderImage:) UIImage *_placeholderImage; // @synthesize _placeholderImage=__placeholderImage;
@property(retain, nonatomic, setter=_setThumbnailImage:) UIImage *_thumbnailImage; // @synthesize _thumbnailImage=__thumbnailImage;
@property(readonly, nonatomic) NSMutableArray *_dimmingViewQueue; // @synthesize _dimmingViewQueue=__dimmingViewQueue;
@property(readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic, getter=isThumbnailImageHidden) _Bool thumbnailImageHidden; // @synthesize thumbnailImageHidden=_thumbnailImageHidden;
@property(nonatomic, getter=isScaledForInteraction) _Bool scaledForInteraction; // @synthesize scaledForInteraction=_scaledForInteraction;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (double)_cornerRadiusForLayoutStyle:(long long)arg1;	// IMP=0x0000000000017388
- (id)_placeholderImageForLayoutStyle:(long long)arg1;	// IMP=0x00000000000172b0
- (void)_updateForLayoutStyle;	// IMP=0x00000000000171cd
- (void)_removeFirstDimmingView;	// IMP=0x0000000000061434
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000005b5bb
- (struct CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1;	// IMP=0x000000000005ba16
- (void)_updateThumbnailTransformFromCameraOrientation;	// IMP=0x000000000002c09b
- (void)_updateThumbnailImageAnimated:(_Bool)arg1;	// IMP=0x000000000002f6c6
- (void)recoverFromFailedThumbnailUpdate;	// IMP=0x00000000000e6948
- (void)prepareForThumbnailUpdateFromCapture;	// IMP=0x00000000000579ee
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000002f588
- (void)setThumbnailImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e6909
- (void)setCameraOrientation:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002bfdb
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 scaledForInteraction:(_Bool)arg2;	// IMP=0x00000000000e6801
- (void)setScaledForInteraction:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e64fc
- (void)layoutSubviews;	// IMP=0x000000000003c58e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000e646d
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x000000000003a7d2
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000003a764
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6408
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e63a4
- (id)initWithLayoutStyle:(long long)arg1;	// IMP=0x0000000000016fad
- (void)_commonCAMImageWellInitializationWithLayoutStyle:(long long)arg1;	// IMP=0x000000000001702c
@property(readonly, nonatomic) UIImage *thumbnailImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
