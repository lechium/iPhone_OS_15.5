//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKit/NSCopying-Protocol.h>

@class CKDPRecordIdentifier;

@interface CKDPRecordReference : PBCodable <NSCopying>
{
    CKDPRecordIdentifier *_recordIdentifier;	// 8 = 0x8
    int _type;	// 16 = 0x10
    CDStruct_f953fb60 _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000038fdd
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000038f3e
- (unsigned long long)hash;	// IMP=0x0000000000038ef1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000038e2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000038d9c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000038d39
- (void)writeTo:(id)arg1;	// IMP=0x0000000000038cd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000038cc8
- (id)dictionaryRepresentation;	// IMP=0x000000000003894e
- (id)description;	// IMP=0x000000000003889f
@property(readonly, nonatomic) _Bool hasRecordIdentifier;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000387ed
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000038786
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

