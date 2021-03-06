//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/NSObject-Protocol.h>

@class AXDragSession, _DUIAccessibilityDragStatus;

@protocol AXDragSessionDelegate <NSObject>
- (void)dragSessionWasTerminated:(AXDragSession *)arg1;
- (void)dragSessionChanged:(AXDragSession *)arg1 toStatus:(_DUIAccessibilityDragStatus *)arg2;
- (void)dragSessionEnded:(AXDragSession *)arg1 withOperation:(unsigned long long)arg2;

@optional
- (void)dragSession:(AXDragSession *)arg1 movedToPoint:(struct CGPoint)arg2 byRequestor:(id)arg3;
@end

