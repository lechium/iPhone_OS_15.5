//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitHomeSharing : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _errorCode;	// 16 = 0x10
    int _responseType;	// 20 = 0x14
    int _stage;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int responseType:1;
        unsigned int stage:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000546c1a
- (unsigned long long)hash;	// IMP=0x0000000000546b9b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000546aa4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005469f3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000546965
- (void)writeTo:(id)arg1;	// IMP=0x00000000005468b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005468a8
- (id)dictionaryRepresentation;	// IMP=0x000000000054663c
- (id)description;	// IMP=0x000000000054658d
- (int)StringAsStage:(id)arg1;	// IMP=0x0000000000546498
- (id)stageAsString:(int)arg1;	// IMP=0x0000000000546400
@property(nonatomic) _Bool hasStage;
@property(nonatomic) int stage; // @synthesize stage=_stage;
- (int)StringAsResponseType:(id)arg1;	// IMP=0x00000000005462e4
- (id)responseTypeAsString:(int)arg1;	// IMP=0x0000000000546265
@property(nonatomic) _Bool hasResponseType;
@property(nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

