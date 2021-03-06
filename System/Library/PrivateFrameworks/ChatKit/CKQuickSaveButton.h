//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView;
@protocol CKQuickSaveButtonAnimationDelegate, CKQuickSaveButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKQuickSaveButton : UIView
{
    _Bool _animating;	// 8 = 0x8
    id <CKQuickSaveButtonDelegate> _delegate;	// 16 = 0x10
    id <CKQuickSaveButtonAnimationDelegate> _animationDelegate;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    UIButton *_button;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIView *_backgroundView;	// 56 = 0x38
    CAShapeLayer *_borderLayer;	// 64 = 0x40
    NSString *_currentAnimationIdentifier;	// 72 = 0x48
    NSMutableArray *_deferredAnimationIdentifiers;	// 80 = 0x50
    NSMutableDictionary *_deferredConfigurationStates;	// 88 = 0x58
    struct UIEdgeInsets _contentEdgeInsets;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000002927ae
@property(retain, nonatomic) NSMutableDictionary *deferredConfigurationStates; // @synthesize deferredConfigurationStates=_deferredConfigurationStates;
@property(retain, nonatomic) NSMutableArray *deferredAnimationIdentifiers; // @synthesize deferredAnimationIdentifiers=_deferredAnimationIdentifiers;
@property(retain, nonatomic) NSString *currentAnimationIdentifier; // @synthesize currentAnimationIdentifier=_currentAnimationIdentifier;
@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <CKQuickSaveButtonAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) __weak id <CKQuickSaveButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000029253b
- (void)_buttonTouchUpInside;	// IMP=0x00000000002924ef
- (void)_buttonTouchDown;	// IMP=0x00000000002924d6
- (void)_buttonTouchCanceled;	// IMP=0x00000000002924bd
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000292432
- (void)configureForState:(unsigned long long)arg1 animated:(_Bool)arg2 identifier:(id)arg3 wasDeferred:(_Bool)arg4;	// IMP=0x0000000000290551
- (struct UIEdgeInsets)_contentEdgeInsetsForState:(unsigned long long)arg1;	// IMP=0x00000000002904c0
- (id)_imageForState:(unsigned long long)arg1;	// IMP=0x00000000002903e2
- (void)updateImageViewFrameForContentEdgeInsets;	// IMP=0x000000000029027d
- (void)layoutSubviews;	// IMP=0x0000000000290052
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000029003e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029002a
- (id)init;	// IMP=0x0000000000290016
- (id)initWithInitialState:(unsigned long long)arg1;	// IMP=0x000000000028fd7c

@end

