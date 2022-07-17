//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying>
{
    unsigned long long _payloadSize;	// 8 = 0x8
    unsigned long long _timestamp;	// 16 = 0x10
    int _direction;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_messageName;	// 40 = 0x28
    int _messageType;	// 48 = 0x30
    NSString *_transactionID;	// 56 = 0x38
    int _transport;	// 64 = 0x40
    _Bool _isSecure;	// 68 = 0x44
    struct {
        unsigned int payloadSize:1;
        unsigned int timestamp:1;
        unsigned int direction:1;
        unsigned int messageType:1;
        unsigned int transport:1;
        unsigned int isSecure:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000004a127c
@property(retain, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(nonatomic) _Bool isSecure; // @synthesize isSecure=_isSecure;
@property(retain, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004a10a4
- (unsigned long long)hash;	// IMP=0x00000000004a0f69
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004a0d66
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004a0be7
- (void)copyTo:(id)arg1;	// IMP=0x00000000004a0ab0
- (void)writeTo:(id)arg1;	// IMP=0x00000000004a0969
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004a095c
- (id)dictionaryRepresentation;	// IMP=0x00000000004a05a0
- (id)description;	// IMP=0x00000000004a04f1
@property(readonly, nonatomic) _Bool hasMessageName;
- (int)StringAsDirection:(id)arg1;	// IMP=0x00000000004a047a
- (id)directionAsString:(int)arg1;	// IMP=0x00000000004a0425
@property(nonatomic) _Bool hasDirection;
@property(nonatomic) int direction; // @synthesize direction=_direction;
- (int)StringAsTransport:(id)arg1;	// IMP=0x00000000004a02a4
- (id)transportAsString:(int)arg1;	// IMP=0x00000000004a01fd
@property(nonatomic) _Bool hasTransport;
@property(nonatomic) int transport; // @synthesize transport=_transport;
- (int)StringAsMessageType:(id)arg1;	// IMP=0x00000000004a00e4
- (id)messageTypeAsString:(int)arg1;	// IMP=0x00000000004a0065
@property(nonatomic) _Bool hasMessageType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(nonatomic) _Bool hasIsSecure;
@property(readonly, nonatomic) _Bool hasTransactionID;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasPayloadSize;
@property(nonatomic) _Bool hasTimestamp;

@end
