//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveML/NSCopying-Protocol.h>

@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying>
{
    CDStruct_62a50c50 _indices;	// 8 = 0x8
    CDStruct_fae3dc92 _values;	// 32 = 0x20
    unsigned long long _length;	// 56 = 0x38
    struct {
        unsigned int length:1;
    } _has;	// 64 = 0x40
}

+ (id)sparseFloatVectorFromSparseVector:(id)arg1;	// IMP=0x0000000000027069
+ (id)sparseFloatVectorFromModelWeights:(id)arg1;	// IMP=0x0000000000026f65
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000116b0
- (unsigned long long)hash;	// IMP=0x0000000000011658
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011596
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011505
- (void)copyTo:(id)arg1;	// IMP=0x00000000000113bb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000011309
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000112fc
- (id)dictionaryRepresentation;	// IMP=0x00000000000111e0
- (id)description;	// IMP=0x0000000000011131
@property(nonatomic) _Bool hasLength;
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000110d4
- (float)valuesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011005
- (void)addValues:(float)arg1;	// IMP=0x0000000000010ff4
- (void)clearValues;	// IMP=0x0000000000010fe3
@property(readonly, nonatomic) float *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
- (void)setIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000010fa9
- (unsigned long long)indicesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010edc
- (void)addIndices:(unsigned long long)arg1;	// IMP=0x0000000000010ec8
- (void)clearIndices;	// IMP=0x0000000000010eb7
@property(readonly, nonatomic) unsigned long long *indices;
@property(readonly, nonatomic) unsigned long long indicesCount;
- (void)dealloc;	// IMP=0x0000000000010e45
- (float)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000026edf

@end
