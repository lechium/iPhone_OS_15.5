//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AVKit/PGPictureInPictureViewController-Protocol.h>

@class AVPictureInPicturePlayerLayerView, AVPlayerController, NSString;
@protocol AVPictureInPictureViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureViewController : UIViewController <PGPictureInPictureViewController>
{
    _Bool _shouldShowAlternateActionButtonImage;	// 8 = 0x8
    AVPictureInPicturePlayerLayerView *_pictureInPicturePlayerLayerView;	// 16 = 0x10
    AVPlayerController *_playerController;	// 24 = 0x18
    id <AVPictureInPictureViewControllerDelegate> _delegate;	// 32 = 0x20
    AVPictureInPictureViewController *_contentViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000057179
@property(retain, nonatomic) AVPictureInPictureViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) __weak id <AVPictureInPictureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowAlternateActionButtonImage; // @synthesize shouldShowAlternateActionButtonImage=_shouldShowAlternateActionButtonImage;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView; // @synthesize pictureInPicturePlayerLayerView=_pictureInPicturePlayerLayerView;
- (void)loadView;	// IMP=0x0000000000056dfe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056d79
- (void)dealloc;	// IMP=0x0000000000056cac
- (id)initWithPictureInPicturePlayerLayerView:(id)arg1;	// IMP=0x0000000000056b80
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000056b6c
- (id)init;	// IMP=0x0000000000056b58
- (void)didAnimatePictureInPictureStop;	// IMP=0x0000000000057216
- (void)willAnimatePictureInPictureStart;	// IMP=0x00000000000571ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldShowLoadingIndicator;
@property(readonly) Class superclass;

@end

