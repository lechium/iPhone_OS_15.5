//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class BCSLiveViewController;

@protocol BCSLiveViewControllerDelegate <NSObject>
- (void)liveViewController:(BCSLiveViewController *)arg1 torchModeChangedTo:(_Bool)arg2;
- (_Bool)liveViewControllerTorchModeSupported:(BCSLiveViewController *)arg1;
- (void)liveViewController:(BCSLiveViewController *)arg1 didTapAtDevicePoint:(struct CGPoint)arg2;
- (void)liveViewControllerDidResetCapture:(BCSLiveViewController *)arg1;
- (void)liveViewControllerWillPerformAction:(BCSLiveViewController *)arg1;
@end

