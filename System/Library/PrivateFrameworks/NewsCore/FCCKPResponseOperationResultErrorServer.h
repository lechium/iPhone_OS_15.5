//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface FCCKPResponseOperationResultErrorServer : PBCodable <NSCopying>
{
    int _type;	// 8 = 0x8
    CDStruct_f953fb60 _has;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x000000000028b63a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000028b5a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000028b546
- (void)writeTo:(id)arg1;	// IMP=0x000000000028b51b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000028b50e
- (id)dictionaryRepresentation;	// IMP=0x000000000028b299
- (id)description;	// IMP=0x000000000028b1ea

@end
