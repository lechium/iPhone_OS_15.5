//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoDumpLogsResponse : PBCodable <NSCopying>
{
    _Bool _success;	// 8 = 0x8
    CDStruct_f2ecb737 _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000dc430
- (unsigned long long)hash;	// IMP=0x00000000000dc405
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dc363
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dc301
- (void)copyTo:(id)arg1;	// IMP=0x00000000000dc2dd
- (void)writeTo:(id)arg1;	// IMP=0x00000000000dc2b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000dc2a4
- (id)dictionaryRepresentation;	// IMP=0x00000000000dc02a
- (id)description;	// IMP=0x00000000000dbf7b
@property(nonatomic) _Bool hasSuccess;

@end
