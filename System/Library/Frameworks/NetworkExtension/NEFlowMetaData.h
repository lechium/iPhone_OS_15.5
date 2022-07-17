//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _fastOpenRequested;	// 8 = 0x8
    _Bool _multipathRequested;	// 9 = 0x9
    NSData *_sourceAppUniqueIdentifier;	// 16 = 0x10
    NSString *_sourceAppSigningIdentifier;	// 24 = 0x18
    NSData *_sourceAppAuditToken;	// 32 = 0x20
    NSUUID *_filterFlowIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000073e0a
- (void).cxx_destruct;	// IMP=0x00000000000741e5
@property(readonly) _Bool multipathRequested; // @synthesize multipathRequested=_multipathRequested;
@property(readonly) _Bool fastOpenRequested; // @synthesize fastOpenRequested=_fastOpenRequested;
@property(readonly) NSUUID *filterFlowIdentifier; // @synthesize filterFlowIdentifier=_filterFlowIdentifier;
@property(readonly) NSData *sourceAppAuditToken; // @synthesize sourceAppAuditToken=_sourceAppAuditToken;
@property(readonly) NSString *sourceAppSigningIdentifier; // @synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier;
@property(readonly) NSData *sourceAppUniqueIdentifier; // @synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007406c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073f54
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073e12
- (id)description;	// IMP=0x0000000000073d77
- (id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2;	// IMP=0x0000000000073caa
- (id)initFromFlow:(struct _NEFlow *)arg1;	// IMP=0x0000000000073b18
- (id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(_Bool)arg3 multipathRequested:(_Bool)arg4 audit_token:(id)arg5 filterFlowID:(id)arg6;	// IMP=0x0000000000073a2e

@end
