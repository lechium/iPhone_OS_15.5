//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PromotedContentPrediction/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADFeature : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _doubleValues;	// 8 = 0x8
    NSString *_name;	// 32 = 0x20
    NSMutableArray *_stringValues;	// 40 = 0x28
    NSString *_version;	// 48 = 0x30
}

+ (Class)stringValueType;	// IMP=0x000000000001ee71
- (void).cxx_destruct;	// IMP=0x000000000001fcc0
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *stringValues; // @synthesize stringValues=_stringValues;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001fa47
- (unsigned long long)hash;	// IMP=0x000000000001f9c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f8af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f685
- (void)copyTo:(id)arg1;	// IMP=0x000000000001f4f3
- (void)writeTo:(id)arg1;	// IMP=0x000000000001f33d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001f330
- (id)dictionaryRepresentation;	// IMP=0x000000000001ef46
- (id)description;	// IMP=0x000000000001ee97
@property(readonly, nonatomic) _Bool hasName;
- (id)stringValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001ee54
- (unsigned long long)stringValuesCount;	// IMP=0x000000000001ee37
- (void)addStringValue:(id)arg1;	// IMP=0x000000000001edcd
- (void)clearStringValues;	// IMP=0x000000000001edb0
- (void)setDoubleValues:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001ed99
- (double)doubleValueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001ecca
- (void)addDoubleValue:(double)arg1;	// IMP=0x000000000001ecb9
- (void)clearDoubleValues;	// IMP=0x000000000001eca8
@property(readonly, nonatomic) double *doubleValues;
@property(readonly, nonatomic) unsigned long long doubleValuesCount;
@property(readonly, nonatomic) _Bool hasVersion;
- (void)dealloc;	// IMP=0x000000000001ec30

@end

