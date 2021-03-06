//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/CMFallDetectionClientXPC-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CMFallDetectionClientXPC, OS_dispatch_queue;

@interface CMFallDetectionClient : NSObject <CMFallDetectionClientXPC>
{
    id <CMFallDetectionClientXPC> _delegate;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014616d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <CMFallDetectionClientXPC> delegate; // @synthesize delegate=_delegate;
- (void)appDidFinishProcessingEventWithDuration:(double)arg1;	// IMP=0x0000000000145fa8
- (void)appDidRequestFallDetectionPrompt;	// IMP=0x0000000000145e3c
- (void)didSimulateEventWithResolution:(id)arg1;	// IMP=0x0000000000145dde
- (void)didStartBackgroundSession;	// IMP=0x0000000000145d95
- (void)didHideFallDetectionPrompt;	// IMP=0x0000000000145d4c
- (void)dealloc;	// IMP=0x0000000000145cfd
- (void)_setupConnection;	// IMP=0x00000000001457ec
- (void)reconnect;	// IMP=0x0000000000145782
- (void)_invalidateInternal;	// IMP=0x000000000014569e
- (void)invalidate;	// IMP=0x000000000014563d
- (id)init;	// IMP=0x00000000001455a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

