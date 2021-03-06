//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFCameraPlaybackEngineObserver-Protocol.h>

@class HFCameraPlaybackEngine, HUCameraMicrophoneControl, HUCameraView, NSString;

@interface HUCameraPlayerLiveContentViewController : UIViewController <HFCameraPlaybackEngineObserver>
{
    HFCameraPlaybackEngine *_playbackEngine;	// 8 = 0x8
    double _cornerRadius;	// 16 = 0x10
    HUCameraView *_cameraView;	// 24 = 0x18
    HUCameraMicrophoneControl *_microphoneControl;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000020f27e
@property(retain, nonatomic) HUCameraMicrophoneControl *microphoneControl; // @synthesize microphoneControl=_microphoneControl;
@property(retain, nonatomic) HUCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) HFCameraPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_updateCameraCornerRadius;	// IMP=0x000000000020f0d7
- (void)playbackEngine:(id)arg1 didUpdateLiveCameraSource:(id)arg2;	// IMP=0x000000000020ef12
- (void)viewDidLoad;	// IMP=0x000000000020ec7e
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000020ebbe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020eb09
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000020ea54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

