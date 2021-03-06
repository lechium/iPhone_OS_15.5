//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAtomBatch, CKDPDistributedValueIdentifier;

@interface CKDPAtomBatchSaveRequest : PBRequest <NSCopying>
{
    CKDPAtomBatch *_atomBatch;	// 8 = 0x8
    CKDPDistributedValueIdentifier *_identifier;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00000000002070c1
- (void).cxx_destruct;	// IMP=0x000000000020782d
@property(retain, nonatomic) CKDPAtomBatch *atomBatch; // @synthesize atomBatch=_atomBatch;
@property(retain, nonatomic) CKDPDistributedValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000207752
- (unsigned long long)hash;	// IMP=0x0000000000207705
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020763d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020759f
- (void)copyTo:(id)arg1;	// IMP=0x000000000020753c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002074df
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002074d2
- (id)dictionaryRepresentation;	// IMP=0x00000000002071ea
- (id)description;	// IMP=0x000000000020713b
@property(readonly, nonatomic) _Bool hasAtomBatch;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

