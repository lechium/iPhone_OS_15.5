//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPArchiveRecordsResponse : PBCodable <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000be676
- (unsigned long long)hash;	// IMP=0x00000000000be66e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000be629
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000be5f0
- (void)copyTo:(id)arg1;	// IMP=0x00000000000be5ea
- (void)writeTo:(id)arg1;	// IMP=0x00000000000be5e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000be5d7
- (id)dictionaryRepresentation;	// IMP=0x00000000000be4b0
- (id)description;	// IMP=0x00000000000be401

@end
