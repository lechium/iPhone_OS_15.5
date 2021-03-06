//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLCameraCaptureTaskConstraintCoordinator;
@protocol OS_dispatch_queue;

@interface PLKeepDaemonAliveAssertionServer : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 8 = 0x8
    PLCameraCaptureTaskConstraintCoordinator *_taskConstraintCoordinator;	// 16 = 0x10
}

+ (void)start;	// IMP=0x0040000000013f5b
- (void).cxx_destruct;	// IMP=0x0020000000013bb3
- (void)_registerNewConnection:(id)arg1;	// IMP=0x0010000000013ab3
- (void)_deactivateCameraSession;	// IMP=0x0010000000013a3c
- (void)_startServer;	// IMP=0x00100000000139b8
- (id)init;	// IMP=0x00100000000138e8

@end

