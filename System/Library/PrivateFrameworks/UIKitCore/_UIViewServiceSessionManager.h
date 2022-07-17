//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener;
@protocol _UIViewServiceSessionManagerDelegate;

@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMutableArray *_sessions;	// 24 = 0x18
    int _connectionNotificationToken;	// 32 = 0x20
    id <_UIViewServiceSessionManagerDelegate> _delegate;	// 40 = 0x28
}

+ (id)__serviceSessionManager;	// IMP=0x00000000011549db
+ (_Bool)hasActiveSessions;	// IMP=0x00000000011549c2
+ (void)startViewServiceSessionWithDelegate:(id)arg1;	// IMP=0x00000000011548c6
+ (void)startViewServiceSessionManagerAsPlugin:(_Bool)arg1;	// IMP=0x0000000001154809
- (void).cxx_destruct;	// IMP=0x0000000001155545
@property(readonly) id <_UIViewServiceSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_startOrStopSystemsForBackgroundRunning;	// IMP=0x0000000001155457
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000115543f
- (void)_configureSessionForConnection:(id)arg1;	// IMP=0x0000000001155281
- (_Bool)_hasActiveSessions;	// IMP=0x0000000001155245
- (void)_registerSessionForDefaultDeputies:(id)arg1;	// IMP=0x0000000001154f5d
- (void)_startListenerWithName:(id)arg1;	// IMP=0x0000000001154ebd
- (void)_startListener;	// IMP=0x0000000001154e5b
- (id)_initAsPlugIn:(_Bool)arg1;	// IMP=0x0000000001154c73
- (id)_initWithDelegate:(id)arg1;	// IMP=0x0000000001154a4e
- (void)dealloc;	// IMP=0x00000000011549ec
- (id)init;	// IMP=0x0000000001154795

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
