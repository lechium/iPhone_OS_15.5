//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/AVPlayerViewController.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI32SessionMediaPlayerViewController : AVPlayerViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *transportBarControlsCoordinator;	// 16 = 0x10
    MISSING_TYPE *airplayAndSettingsControlsView;	// 24 = 0x18
    MISSING_TYPE *settingsControlItem;	// 32 = 0x20
    MISSING_TYPE *gymKitResumeMachineView;	// 40 = 0x28
    MISSING_TYPE *settingsPopoverSourceView;	// 48 = 0x30
    MISSING_TYPE *overlayView;	// 56 = 0x38
    MISSING_TYPE *tapGestureRecognizer;	// 64 = 0x40
    MISSING_TYPE *videoBoundsObserver;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000041f1b0
- (id)initWithPlayerLayerView:(id)arg1;	// IMP=0x000000000041f150
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000041f120
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000041f0e0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000041eff0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041ee40
@property(nonatomic, readonly) NSArray *keyCommands;

@end

