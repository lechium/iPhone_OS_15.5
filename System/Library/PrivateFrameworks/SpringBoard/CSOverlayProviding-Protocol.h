//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling;

@protocol CSOverlayProviding <NSObject>
@property(readonly, nonatomic) _Bool wantsHomeScreenOverlay;
- (_Bool)dismissModalContentIfVisibleAnimated:(_Bool)arg1;
- (id <SBFOverlayControlling><CSExternalBehaviorProviding><CSExternalEventHandling>)newOverlayController;
@end

