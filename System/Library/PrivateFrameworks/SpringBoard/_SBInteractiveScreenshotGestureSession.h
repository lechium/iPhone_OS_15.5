//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, SBInteractiveScreenshotGestureHostRootViewController, SBInteractiveScreenshotGestureHostWindow, SBInteractiveScreenshotGestureRootViewController, SBInteractiveScreenshotGestureRootWindow;

@interface _SBInteractiveScreenshotGestureSession : NSObject
{
    NSUUID *_sessionID;	// 8 = 0x8
    SBInteractiveScreenshotGestureRootWindow *_rootWindow;	// 16 = 0x10
    SBInteractiveScreenshotGestureHostWindow *_hostWindow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005036b4
@property(retain, nonatomic) SBInteractiveScreenshotGestureHostWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) SBInteractiveScreenshotGestureRootWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
@property(readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) SBInteractiveScreenshotGestureRootViewController *rootViewController;
@property(readonly, nonatomic) SBInteractiveScreenshotGestureHostRootViewController *hostRootViewController;
- (id)initWithSessionID:(id)arg1;	// IMP=0x00000000005035d5

@end
