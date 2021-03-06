//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKLayerDelegate-Protocol.h>

@class CATransformLayer, CKBaseLayer, NSArray, UIImage;
@protocol CKGradientReferenceView;

@interface CKGradientView : UIView <CKLayerDelegate>
{
    UIView<CKGradientReferenceView> *_referenceView;	// 8 = 0x8
    NSArray *_colors;	// 16 = 0x10
    UIImage *_maskImage;	// 24 = 0x18
    CKBaseLayer *_gradientLayer;	// 32 = 0x20
    CATransformLayer *_trackingLayer;	// 40 = 0x28
    struct CGRect _gradientFrame;	// 48 = 0x30
}

+ (id)gradientViews;	// IMP=0x00000000003535b5
- (void).cxx_destruct;	// IMP=0x0000000000353e85
@property(retain, nonatomic) CATransformLayer *trackingLayer; // @synthesize trackingLayer=_trackingLayer;
@property(nonatomic) struct CGRect gradientFrame; // @synthesize gradientFrame=_gradientFrame;
@property(retain, nonatomic) CKBaseLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) __weak UIView<CKGradientReferenceView> *referenceView; // @synthesize referenceView=_referenceView;
@property(readonly, nonatomic) UIImage *gradient;
- (void)updateGradientImage;	// IMP=0x0000000000353889
- (void)updateAnimation;	// IMP=0x0000000000353638
- (void)ckLayerDidBecomeVisible:(_Bool)arg1;	// IMP=0x0000000000353338
- (void)_removeAllAnimations:(_Bool)arg1;	// IMP=0x00000000003532fb
- (void)didMoveToSuperview;	// IMP=0x0000000000353243
- (void)didMoveToWindow;	// IMP=0x000000000035318b
- (void)layoutSubviews;	// IMP=0x0000000000352bbf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000352a0b
- (id)description;	// IMP=0x000000000035295c

@end

