//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/AVTAvatarsDaemon-Protocol.h>
#import <AvatarPersistence/AVTAvatarsDaemonServer-Protocol.h>
#import <AvatarPersistence/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;
@protocol AVTAvatarsDaemonServerDelegate, AVTUILogger;

@interface AVTAvatarsDaemonServer : NSObject <NSXPCListenerDelegate, AVTAvatarsDaemon, AVTAvatarsDaemonServer>
{
    id <AVTAvatarsDaemonServerDelegate> delegate;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    id <AVTUILogger> _logger;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000024304
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <AVTAvatarsDaemonServerDelegate> delegate; // @synthesize delegate;
- (void)checkIn;	// IMP=0x000000000002420c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002414d
- (void)startListening;	// IMP=0x0000000000024110
- (id)initWithListener:(id)arg1 logger:(id)arg2;	// IMP=0x0000000000024063
- (id)initWithLogger:(id)arg1;	// IMP=0x0000000000023fe7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

