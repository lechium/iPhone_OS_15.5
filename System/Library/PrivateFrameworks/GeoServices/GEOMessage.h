//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOPeer, NSDictionary, NSString;
@protocol OS_xpc_object;

@interface GEOMessage : NSObject
{
    NSObject<OS_xpc_object> *_xpcMessage;	// 8 = 0x8
    NSString *_messageName;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    GEOPeer *_peer;	// 32 = 0x20
    GEOApplicationAuditToken *_preferredAuditToken;	// 40 = 0x28
    GEODataRequestThrottlerToken *_throttleToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000012c568b
@property(readonly, nonatomic) GEODataRequestThrottlerToken *throttleToken; // @synthesize throttleToken=_throttleToken;
@property(readonly, nonatomic) GEOApplicationAuditToken *preferredAuditToken; // @synthesize preferredAuditToken=_preferredAuditToken;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) GEOPeer *peer; // @synthesize peer=_peer;
- (void)sendReplyWithXPCUserInfo:(id)arg1;	// IMP=0x00000000012c5500
- (void)sendReply:(id)arg1;	// IMP=0x00000000012c5398
- (id)initWithXPCMessage:(id)arg1 peer:(id)arg2;	// IMP=0x00000000012c4f43
- (id)init;	// IMP=0x00000000012c4f19

@end
