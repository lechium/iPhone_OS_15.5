//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKEffectPickerViewControllerProtocol-Protocol.h>
#import <ChatKit/CKEffectPreviewCollectionViewControllerDelegate-Protocol.h>
#import <ChatKit/CKEffectSelectionViewControllerDelegate-Protocol.h>

@class CKBalloonView, CKChatControllerDummyAnimator, CKComposition, CKEffectPreviewCollectionViewController, CKEffectSelectionViewController, CKFullScreenEffectManager, NSLayoutConstraint, UIButton, UILabel, UIVibrancyEffect, UIView, UIVisualEffectView;
@protocol CKEffectPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKEffectPickerMacViewController : UIViewController <CKEffectPreviewCollectionViewControllerDelegate, CKEffectSelectionViewControllerDelegate, CKEffectPickerViewControllerProtocol>
{
    BOOL _color;	// 8 = 0x8
    _Bool _hasSelectedDefaultEffect;	// 9 = 0x9
    _Bool _showingInStandAloneWindow;	// 10 = 0xa
    id <CKEffectPickerViewControllerDelegate> _delegate;	// 16 = 0x10
    CKBalloonView *_balloonView;	// 24 = 0x18
    CKEffectPreviewCollectionViewController *_effectCollectionViewController;	// 32 = 0x20
    CKEffectSelectionViewController *_selectionViewController;	// 40 = 0x28
    CKChatControllerDummyAnimator *_dummyAnimator;	// 48 = 0x30
    UIView *_balloonContainer;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UIVisualEffectView *_titleContainerView;	// 72 = 0x48
    UIVibrancyEffect *_titleVibrancyEffect;	// 80 = 0x50
    UIButton *_sendButton;	// 88 = 0x58
    UIButton *_closeButton;	// 96 = 0x60
    CKComposition *_composition;	// 104 = 0x68
    NSLayoutConstraint *_heightConstraint;	// 112 = 0x70
    CKFullScreenEffectManager *_fsem;	// 120 = 0x78
    UIView *_contentView;	// 128 = 0x80
    struct CGPoint _balloonViewOrigin;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000002cf2aa
@property(nonatomic) _Bool showingInStandAloneWindow; // @synthesize showingInStandAloneWindow=_showingInStandAloneWindow;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CKFullScreenEffectManager *fsem; // @synthesize fsem=_fsem;
@property(nonatomic) _Bool hasSelectedDefaultEffect; // @synthesize hasSelectedDefaultEffect=_hasSelectedDefaultEffect;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) BOOL color; // @synthesize color=_color;
@property(nonatomic) struct CGPoint balloonViewOrigin; // @synthesize balloonViewOrigin=_balloonViewOrigin;
@property(retain, nonatomic) CKComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIVibrancyEffect *titleVibrancyEffect; // @synthesize titleVibrancyEffect=_titleVibrancyEffect;
@property(retain, nonatomic) UIVisualEffectView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *balloonContainer; // @synthesize balloonContainer=_balloonContainer;
@property(retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator; // @synthesize dummyAnimator=_dummyAnimator;
@property(retain, nonatomic) CKEffectSelectionViewController *selectionViewController; // @synthesize selectionViewController=_selectionViewController;
@property(retain, nonatomic) CKEffectPreviewCollectionViewController *effectCollectionViewController; // @synthesize effectCollectionViewController=_effectCollectionViewController;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(nonatomic) id <CKEffectPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startAnimationPreviewForIdentifier:(id)arg1;	// IMP=0x00000000002cecb4
- (id)_defaultSendAnimationContextForAnimationPreview;	// IMP=0x00000000002cec6a
- (void)handleTouchMoved:(struct CGPoint)arg1;	// IMP=0x00000000002cec64
- (void)handleTouchUp:(struct CGPoint)arg1;	// IMP=0x00000000002cec5e
- (void)updateHintTransition:(double)arg1;	// IMP=0x00000000002cec58
- (void)updateColor:(BOOL)arg1;	// IMP=0x00000000002cec52
- (void)setCloseButtonYPosition:(double)arg1;	// IMP=0x00000000002cec4c
- (void)presentPicker;	// IMP=0x00000000002cec46
- (void)effectCollectionViewController:(id)arg1 willDisplayEffect:(id)arg2;	// IMP=0x00000000002cec40
- (_Bool)effectShouldDisplayOverBalloon:(id)arg1;	// IMP=0x00000000002ceb67
- (void)effectSelectionViewController:(id)arg1 didSelectEffectWithIdentifier:(id)arg2;	// IMP=0x00000000002ce494
- (void)closeButtonPressed:(id)arg1;	// IMP=0x00000000002ce448
- (void)touchUpInsideSendButton:(id)arg1;	// IMP=0x00000000002ce3af
- (void)keyCommandReturn:(id)arg1;	// IMP=0x00000000002ce39a
- (id)keyCommands;	// IMP=0x00000000002ce2ad
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002ce20c
- (void)viewDidLoad;	// IMP=0x00000000002cc996
- (id)initWithComposition:(id)arg1 balloonViewOrigin:(struct CGPoint)arg2 color:(BOOL)arg3;	// IMP=0x00000000002cc8b2

@end

