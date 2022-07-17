//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NSTimer, UIImage, UIImageView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol CAMTransientImageWellDelegate;

@interface CAMTransientImageWell : UIView <UIGestureRecognizerDelegate>
{
    _Bool _autoStashesImages;	// 8 = 0x8
    _Bool __stashed;	// 9 = 0x9
    id <CAMTransientImageWellDelegate> _delegate;	// 16 = 0x10
    long long _orientation;	// 24 = 0x18
    UIImageView *__imageView;	// 32 = 0x20
    NSTimer *__autoStashTimer;	// 40 = 0x28
    UITapGestureRecognizer *__tapGestureRecognizer;	// 48 = 0x30
    UISwipeGestureRecognizer *__unstashGestureRecognizer;	// 56 = 0x38
    UISwipeGestureRecognizer *__stashGestureRecognizer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000f163c
@property(readonly, nonatomic) UISwipeGestureRecognizer *_stashGestureRecognizer; // @synthesize _stashGestureRecognizer=__stashGestureRecognizer;
@property(readonly, nonatomic) UISwipeGestureRecognizer *_unstashGestureRecognizer; // @synthesize _unstashGestureRecognizer=__unstashGestureRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(nonatomic, getter=_isStashed, setter=_setStashed:) _Bool _stashed; // @synthesize _stashed=__stashed;
@property(retain, nonatomic) NSTimer *_autoStashTimer; // @synthesize _autoStashTimer=__autoStashTimer;
@property(retain, nonatomic, setter=_setImageView:) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(nonatomic) _Bool autoStashesImages; // @synthesize autoStashesImages=_autoStashesImages;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <CAMTransientImageWellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool currentImageHidden;
- (void)clearImageAnimated:(_Bool)arg1;	// IMP=0x00000000000f14bf
@property(readonly, nonatomic) struct CGRect imageFrame;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000f0fcd
@property(retain, nonatomic) UIImage *image;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000f0e8b
- (void)_dismissImageView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000f0cea
- (void)_dismissImageAnimated:(_Bool)arg1;	// IMP=0x00000000000f0c3b
- (void)_cancelAutoStashTimer;	// IMP=0x00000000000f0bb1
- (void)_handleAutoStashTimerFired:(id)arg1;	// IMP=0x00000000000f0af7
- (void)_restartAutoStashTimerWithDuration:(double)arg1;	// IMP=0x00000000000f0a80
- (void)_restartAutoStashTimer;	// IMP=0x00000000000f0a66
- (struct CGPoint)_imageViewStashPoint;	// IMP=0x00000000000f0a04
- (struct CGPoint)_imageViewSpawnPoint;	// IMP=0x00000000000f0940
- (struct CGSize)_imageViewSizeForContentSize:(struct CGSize)arg1;	// IMP=0x00000000000f08d4
- (struct CGSize)_imageViewMaxSize;	// IMP=0x00000000000f0878
- (void)_handleStashSwipe:(id)arg1;	// IMP=0x00000000000f07f6
- (void)_handleUnstashSwipe:(id)arg1;	// IMP=0x00000000000f074e
- (void)_handleTap:(id)arg1;	// IMP=0x00000000000f0664
- (struct CGRect)_unorientedFrameForImageView:(id)arg1;	// IMP=0x00000000000f04b3
- (void)layoutSubviews;	// IMP=0x00000000000f03a7
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000f028d
- (void)_setStashed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000f01e4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f001e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
