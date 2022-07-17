//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/NSSecureCoding-Protocol.h>

@class NSString;

@interface OTJoiningConfiguration : NSObject <NSSecureCoding>
{
    _Bool _isInitiator;	// 8 = 0x8
    NSString *_protocolType;	// 16 = 0x10
    NSString *_uniqueDeviceID;	// 24 = 0x18
    NSString *_uniqueClientID;	// 32 = 0x20
    NSString *_containerName;	// 40 = 0x28
    NSString *_contextID;	// 48 = 0x30
    NSString *_pairingUUID;	// 56 = 0x38
    unsigned long long _epoch;	// 64 = 0x40
    long long _timeout;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d241
- (void).cxx_destruct;	// IMP=0x000000000000d1ed
@property long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property(nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
@property(retain, nonatomic) NSString *pairingUUID; // @synthesize pairingUUID=_pairingUUID;
@property(retain, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain, nonatomic) NSString *uniqueClientID; // @synthesize uniqueClientID=_uniqueClientID;
@property(retain, nonatomic) NSString *uniqueDeviceID; // @synthesize uniqueDeviceID=_uniqueDeviceID;
@property(retain, nonatomic) NSString *protocolType; // @synthesize protocolType=_protocolType;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cf25
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ce20
- (id)initWithProtocolType:(id)arg1 uniqueDeviceID:(id)arg2 uniqueClientID:(id)arg3 pairingUUID:(id)arg4 containerName:(id)arg5 contextID:(id)arg6 epoch:(unsigned long long)arg7 isInitiator:(_Bool)arg8;	// IMP=0x000000000000ccbc

@end
