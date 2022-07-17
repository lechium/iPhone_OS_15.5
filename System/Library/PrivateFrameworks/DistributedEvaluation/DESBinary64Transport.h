//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@interface DESBinary64Transport : PBCodable <NSCopying>
{
    CDStruct_82f37d05 _datas;	// 8 = 0x8
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000026c8a
- (unsigned long long)hash;	// IMP=0x0000000000026c79
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000026c16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026bbb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000026b0f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026a7e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026a71
- (id)dictionaryRepresentation;	// IMP=0x00000000000267a5
- (id)description;	// IMP=0x00000000000266f6
- (void)setDatas:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000266df
- (double)dataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000026610
- (void)addData:(double)arg1;	// IMP=0x00000000000265ff
- (void)clearDatas;	// IMP=0x00000000000265ee
@property(readonly, nonatomic) double *datas;
@property(readonly, nonatomic) unsigned long long datasCount;
- (void)dealloc;	// IMP=0x000000000002658b

@end
