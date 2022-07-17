//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFUserNotificationServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFUserNotificationProvider : NSObject <AFUserNotificationServiceDelegate>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSMutableDictionary *_responseHandlersByNotificationID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000043105
- (void)receivedNotificationResponse:(id)arg1;	// IMP=0x0000000000043002
- (id)_connection;	// IMP=0x0000000000042d33
- (void)withdrawNotificationRequestWithIdentifier:(id)arg1;	// IMP=0x0000000000042c0a
- (void)postNotificationRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004270c
- (id)init;	// IMP=0x000000000004266c

@end
