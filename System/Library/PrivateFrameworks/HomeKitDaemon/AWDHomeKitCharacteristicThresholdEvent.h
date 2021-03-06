//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCharacteristicThresholdEvent : PBCodable <NSCopying>
{
    _Bool _maxPresent;	// 8 = 0x8
    _Bool _minPresent;	// 9 = 0x9
    struct {
        unsigned int maxPresent:1;
        unsigned int minPresent:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool maxPresent; // @synthesize maxPresent=_maxPresent;
@property(nonatomic) _Bool minPresent; // @synthesize minPresent=_minPresent;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003242cb
- (unsigned long long)hash;	// IMP=0x0000000000324285
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003241b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032413a
- (void)copyTo:(id)arg1;	// IMP=0x00000000003240e0
- (void)writeTo:(id)arg1;	// IMP=0x000000000032406d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000324060
- (id)dictionaryRepresentation;	// IMP=0x0000000000323f67
- (id)description;	// IMP=0x0000000000323eb8
@property(nonatomic) _Bool hasMaxPresent;
@property(nonatomic) _Bool hasMinPresent;

@end

