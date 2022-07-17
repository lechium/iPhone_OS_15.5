//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class MSPDroppedPin, NSString, PBUnknownFields;

@interface MSPPinStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    double _position;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    MSPDroppedPin *_droppedPin;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    int _type;	// 48 = 0x30
    CDStruct_dd13975a _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000000623c5
@property(retain, nonatomic) MSPDroppedPin *droppedPin; // @synthesize droppedPin=_droppedPin;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000062268
- (unsigned long long)hash;	// IMP=0x0000000000061fe3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000061e98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000061d81
- (void)copyTo:(id)arg1;	// IMP=0x0000000000061cbe
- (void)writeTo:(id)arg1;	// IMP=0x0000000000061bd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000061bc8
- (id)dictionaryRepresentation;	// IMP=0x00000000000615cb
- (id)description;	// IMP=0x000000000006151c
@property(readonly, nonatomic) _Bool hasDroppedPin;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000614e5
- (id)typeAsString:(int)arg1;	// IMP=0x00000000000614a0
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
