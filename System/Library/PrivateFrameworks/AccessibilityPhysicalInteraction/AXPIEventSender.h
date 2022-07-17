//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXPIEventSender : NSObject
{
    struct __IOHIDEventSystemClient *_ioSystemPostBackClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_eventSendingQueue;	// 16 = 0x10
    unsigned long long _senderID;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000001fe0
- (void).cxx_destruct;	// IMP=0x000000000000246e
@property(nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
- (void)sendIOHIDEventRef:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000022d5
- (void)sendEventRepresentation:(id)arg1;	// IMP=0x00000000000020a7
- (id)init;	// IMP=0x0000000000002035

@end
