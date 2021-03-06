//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDistributedTimestampsVersionVector;

@interface CKDPDistributedTimestampsSiteVersionVectors : PBCodable <NSCopying>
{
    CKDPDistributedTimestampsVersionVector *_contentsVector;	// 8 = 0x8
    CKDPDistributedTimestampsVersionVector *_dependenciesVector;	// 16 = 0x10
    CKDPDistributedTimestampsVersionVector *_previousVector;	// 24 = 0x18
    CKDPDistributedTimestampsVersionVector *_removalsVector;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002bf798
@property(retain, nonatomic) CKDPDistributedTimestampsVersionVector *dependenciesVector; // @synthesize dependenciesVector=_dependenciesVector;
@property(retain, nonatomic) CKDPDistributedTimestampsVersionVector *removalsVector; // @synthesize removalsVector=_removalsVector;
@property(retain, nonatomic) CKDPDistributedTimestampsVersionVector *contentsVector; // @synthesize contentsVector=_contentsVector;
@property(retain, nonatomic) CKDPDistributedTimestampsVersionVector *previousVector; // @synthesize previousVector=_previousVector;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002bf605
- (unsigned long long)hash;	// IMP=0x00000000002bf581
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bf455
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bf36b
- (void)copyTo:(id)arg1;	// IMP=0x00000000002bf2c8
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bf231
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bf224
- (id)dictionaryRepresentation;	// IMP=0x00000000002bee87
- (id)description;	// IMP=0x00000000002bedd8
@property(readonly, nonatomic) _Bool hasDependenciesVector;
@property(readonly, nonatomic) _Bool hasRemovalsVector;
@property(readonly, nonatomic) _Bool hasContentsVector;
@property(readonly, nonatomic) _Bool hasPreviousVector;

@end

