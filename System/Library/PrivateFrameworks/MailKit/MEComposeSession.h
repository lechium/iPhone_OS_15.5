//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSCopying-Protocol.h>
#import <MailKit/NSSecureCoding-Protocol.h>

@class MEComposeContext, MEMessage, MERemoteExtension, NSUUID;
@protocol MEComposeSessionHostProtocol_XPC;

@interface MEComposeSession : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_sessionID;	// 8 = 0x8
    MEMessage *_mailMessage;	// 16 = 0x10
    MEComposeContext *_composeContext;	// 24 = 0x18
    MERemoteExtension *_remoteExtension;	// 32 = 0x20
    id <MEComposeSessionHostProtocol_XPC> _remoteHostContext;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000077d0
- (void).cxx_destruct;	// IMP=0x0000000000007c30
@property(retain, nonatomic) id <MEComposeSessionHostProtocol_XPC> remoteHostContext; // @synthesize remoteHostContext=_remoteHostContext;
@property(retain, nonatomic) MERemoteExtension *remoteExtension; // @synthesize remoteExtension=_remoteExtension;
@property(retain, nonatomic) MEComposeContext *composeContext; // @synthesize composeContext=_composeContext;
@property(retain, nonatomic) MEMessage *mailMessage; // @synthesize mailMessage=_mailMessage;
@property(retain, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007b9e
- (unsigned long long)hash;	// IMP=0x0000000000007b83
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007a90
- (void)reloadSession;	// IMP=0x0000000000007a30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007927
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000077d8
- (id)initWithSessionID:(id)arg1 composeContext:(id)arg2 mailMessage:(id)arg3;	// IMP=0x00000000000076f5

@end

