//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CKFullScreenEffect, CKFullScreenEffectManager, CKMomentCollectionViewCell, NSString, NSTimer, UIView;
@protocol CKEffectPreviewCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKEffectPreviewCollectionViewController : UIViewController
{
    _Bool _hideEffects;	// 8 = 0x8
    id <CKEffectPreviewCollectionViewControllerDelegate> _delegate;	// 16 = 0x10
    CKFullScreenEffect *_currentEffect;	// 24 = 0x18
    CKFullScreenEffectManager *_fsem;	// 32 = 0x20
    CKMomentCollectionViewCell *_currentCell;	// 40 = 0x28
    NSString *_resizingSavedIdentifier;	// 48 = 0x30
    NSTimer *_animationTimer;	// 56 = 0x38
    UIView *_cellWrapper;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000355733
@property(retain, nonatomic) UIView *cellWrapper; // @synthesize cellWrapper=_cellWrapper;
@property(nonatomic) _Bool hideEffects; // @synthesize hideEffects=_hideEffects;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NSString *resizingSavedIdentifier; // @synthesize resizingSavedIdentifier=_resizingSavedIdentifier;
@property(retain, nonatomic) CKMomentCollectionViewCell *currentCell; // @synthesize currentCell=_currentCell;
@property(retain, nonatomic) CKFullScreenEffectManager *fsem; // @synthesize fsem=_fsem;
@property(nonatomic) __weak CKFullScreenEffect *currentEffect; // @synthesize currentEffect=_currentEffect;
@property(nonatomic) __weak id <CKEffectPreviewCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000355461
- (void)resumeEffect;	// IMP=0x0000000000355404
- (void)addAnimationTimerForCell:(id)arg1;	// IMP=0x000000000035524b
- (void)displayEffectWithIdentifier:(id)arg1;	// IMP=0x00000000003547f4
- (void)dealloc;	// IMP=0x0000000000354789
- (void)loadView;	// IMP=0x00000000003546f3
- (id)init;	// IMP=0x0000000000354688

@end

