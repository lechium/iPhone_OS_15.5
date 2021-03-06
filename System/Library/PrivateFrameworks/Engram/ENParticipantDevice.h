//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@class NSData;
@protocol ENCypher, ENDevicePublicKey;

@interface ENParticipantDevice : NSObject <NSSecureCoding>
{
    id <ENDevicePublicKey> _devicePublicKey;	// 8 = 0x8
    NSData *_identifier;	// 16 = 0x10
    id <ENCypher> _cypher;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fd91
- (void).cxx_destruct;	// IMP=0x00000000000100be
@property(readonly, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id <ENCypher> cypher; // @synthesize cypher=_cypher;
@property(readonly, nonatomic) id <ENDevicePublicKey> devicePublicKey; // @synthesize devicePublicKey=_devicePublicKey;
- (id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000ff9a
- (id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000000feee
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fe0b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fd99
- (id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3;	// IMP=0x000000000000fcda

@end

