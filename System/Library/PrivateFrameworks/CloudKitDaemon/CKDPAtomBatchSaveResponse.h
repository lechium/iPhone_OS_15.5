//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPAtomBatchSaveResponse : PBCodable <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000f45d0
- (unsigned long long)hash;	// IMP=0x00000000000f45c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f4583
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f454a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000f4544
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f453e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f4531
- (id)dictionaryRepresentation;	// IMP=0x00000000000f440a
- (id)description;	// IMP=0x00000000000f435b

@end
