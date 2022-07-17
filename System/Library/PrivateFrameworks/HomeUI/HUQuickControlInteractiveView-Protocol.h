//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUQuickControlControllableView-Protocol.h>

@class UIGestureRecognizer;
@protocol HUQuickControlViewInteractionDelegate;

@protocol HUQuickControlInteractiveView <HUQuickControlControllableView>
@property(readonly, nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(UIGestureRecognizer *)arg1;
@end
