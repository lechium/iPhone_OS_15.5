//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DigitalTouchShared/NSCopying-Protocol.h>

@class NSData;

@interface ETPDoodle : PBCodable <NSCopying>
{
    NSData *_colorData;	// 8 = 0x8
    unsigned int _doodleCount;	// 16 = 0x10
    NSData *_doodleData;	// 24 = 0x18
    NSData *_pointTimeDeltaData;	// 32 = 0x20
    struct {
        unsigned int doodleCount:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001f77f
@property(retain, nonatomic) NSData *pointTimeDeltaData; // @synthesize pointTimeDeltaData=_pointTimeDeltaData;
@property(retain, nonatomic) NSData *colorData; // @synthesize colorData=_colorData;
@property(retain, nonatomic) NSData *doodleData; // @synthesize doodleData=_doodleData;
@property(nonatomic) unsigned int doodleCount; // @synthesize doodleCount=_doodleCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001f65d
- (unsigned long long)hash;	// IMP=0x000000000001f5c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f496
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f3af
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f311
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f304
- (id)dictionaryRepresentation;	// IMP=0x000000000001ef93
- (id)description;	// IMP=0x000000000001eee4
@property(readonly, nonatomic) _Bool hasPointTimeDeltaData;
@property(readonly, nonatomic) _Bool hasColorData;
@property(readonly, nonatomic) _Bool hasDoodleData;
@property(nonatomic) _Bool hasDoodleCount;

@end
