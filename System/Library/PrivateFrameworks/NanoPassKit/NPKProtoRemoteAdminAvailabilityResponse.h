//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoRemoteAdminAvailabilityResponse : PBCodable <NSCopying>
{
    _Bool _isAvailable;	// 8 = 0x8
    CDStruct_08d5340b _has;	// 12 = 0xc
}

@property(nonatomic) _Bool isAvailable; // @synthesize isAvailable=_isAvailable;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d471e
- (unsigned long long)hash;	// IMP=0x00000000000d46f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d4651
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d45ef
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d45cb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d459f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d4592
- (id)dictionaryRepresentation;	// IMP=0x00000000000d4318
- (id)description;	// IMP=0x00000000000d4269
@property(nonatomic) _Bool hasIsAvailable;

@end
