//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCharacteristicEvent : PBCodable <NSCopying>
{
    _Bool _containsValue;	// 8 = 0x8
    struct {
        unsigned int containsValue:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool containsValue; // @synthesize containsValue=_containsValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002a7536
- (unsigned long long)hash;	// IMP=0x00000000002a750b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a7469
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a7407
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a73e3
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a73b7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a73aa
- (id)dictionaryRepresentation;	// IMP=0x00000000002a7311
- (id)description;	// IMP=0x00000000002a7262
@property(nonatomic) _Bool hasContainsValue;

@end
