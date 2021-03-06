//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/APSConnectionDelegate-Protocol.h>
#import <AvatarPersistence/AVTPushNotificationsSupport-Protocol.h>

@class APSConnection, AVTCoreEnvironment, AVTPushNotificationsConnectionFactory, NSString;
@protocol AVTPushNotificationsSupportDelegate, AVTUILogger, OS_dispatch_queue;

@interface AVTPushNotificationsSupport : NSObject <APSConnectionDelegate, AVTPushNotificationsSupport>
{
    id <AVTPushNotificationsSupportDelegate> _delegate;	// 8 = 0x8
    APSConnection *_pushConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    AVTCoreEnvironment *_environment;	// 32 = 0x20
    AVTPushNotificationsConnectionFactory *_connectionFactory;	// 40 = 0x28
    id <AVTUILogger> _logger;	// 48 = 0x30
}

+ (id)topic;	// IMP=0x0000000000031833
- (void).cxx_destruct;	// IMP=0x00000000000318c9
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTPushNotificationsConnectionFactory *connectionFactory; // @synthesize connectionFactory=_connectionFactory;
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(nonatomic) __weak id <AVTPushNotificationsSupportDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopListeningToPushNotifications;	// IMP=0x0000000000031859
- (void)startListeningToPushNotifications;	// IMP=0x0000000000031853
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000000000316f2
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000000003162d
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000000003159b
- (void)setupConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031343
- (void)getAPSEnvironmentString:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031329
- (id)initWithEnvironment:(id)arg1 connectionFactory:(id)arg2;	// IMP=0x000000000003120d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

