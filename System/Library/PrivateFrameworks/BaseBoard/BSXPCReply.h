//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface BSXPCReply : NSObject
{
    NSObject<OS_xpc_object> *_reply;	// 8 = 0x8
    int _sent;	// 16 = 0x10
}

+ (id)messageWithReply:(id)arg1;	// IMP=0x000000000003e68c
+ (id)replyForMessage:(id)arg1;	// IMP=0x000000000003e3d2
- (void).cxx_destruct;	// IMP=0x000000000003e757
- (id)message;	// IMP=0x000000000003e74f
- (long long)messageKind;	// IMP=0x000000000003e742
- (id)initWithReply:(id)arg1;	// IMP=0x000000000003e6e9
- (void)sendReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e5ef
- (id)initForMessage:(id)arg1;	// IMP=0x000000000003e4df

@end

