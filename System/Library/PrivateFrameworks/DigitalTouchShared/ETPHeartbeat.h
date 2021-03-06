//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DigitalTouchShared/NSCopying-Protocol.h>

@interface ETPHeartbeat : PBCodable <NSCopying>
{
    float _beatsPerMinute;	// 8 = 0x8
    unsigned int _duration;	// 12 = 0xc
    float _heartbreakTime;	// 16 = 0x10
    float _normalizedCenterX;	// 20 = 0x14
    float _normalizedCenterY;	// 24 = 0x18
    float _rotation;	// 28 = 0x1c
    struct {
        unsigned int beatsPerMinute:1;
        unsigned int duration:1;
        unsigned int heartbreakTime:1;
        unsigned int normalizedCenterX:1;
        unsigned int normalizedCenterY:1;
        unsigned int rotation:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) float heartbreakTime; // @synthesize heartbreakTime=_heartbreakTime;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float normalizedCenterY; // @synthesize normalizedCenterY=_normalizedCenterY;
@property(nonatomic) float normalizedCenterX; // @synthesize normalizedCenterX=_normalizedCenterX;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) float beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000948a
- (unsigned long long)hash;	// IMP=0x0000000000008f4a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008dd9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008ce4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000008bed
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000008be0
- (id)dictionaryRepresentation;	// IMP=0x00000000000085b7
- (id)description;	// IMP=0x0000000000008508
@property(nonatomic) _Bool hasHeartbreakTime;
@property(nonatomic) _Bool hasRotation;
@property(nonatomic) _Bool hasNormalizedCenterY;
@property(nonatomic) _Bool hasNormalizedCenterX;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasBeatsPerMinute;

@end

