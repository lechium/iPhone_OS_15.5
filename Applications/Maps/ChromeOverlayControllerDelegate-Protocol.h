//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ChromeOverlayController, UIView;
@protocol ChromeOverlay;

@protocol ChromeOverlayControllerDelegate <NSObject>
- (void)overlayControllerDidUpdateMapInsets:(ChromeOverlayController *)arg1 fromOverlay:(id <ChromeOverlay>)arg2;
- (UIView *)passThroughView;
@end

