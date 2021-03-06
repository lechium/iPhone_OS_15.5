//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PMQueryNode : PBCodable
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _keys;	// 8 = 0x8
    double _doubleValue;	// 32 = 0x20
    long long _intValue;	// 40 = 0x28
    NSMutableArray *_childs;	// 48 = 0x30
    float _floatValue;	// 56 = 0x38
    int _mergeOp;	// 60 = 0x3c
    int _op;	// 64 = 0x40
    NSString *_stringValue;	// 72 = 0x48
    _Bool _boolValue;	// 80 = 0x50
    struct {
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int floatValue:1;
        unsigned int mergeOp:1;
        unsigned int op:1;
        unsigned int boolValue:1;
    } _has;	// 84 = 0x54
}

+ (Class)childType;	// IMP=0x002000000006b230
- (void).cxx_destruct;	// IMP=0x002000000006eb90
@property(retain, nonatomic) NSMutableArray *childs; // @synthesize childs=_childs;
@property(nonatomic) _Bool boolValue; // @synthesize boolValue=_boolValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) float floatValue; // @synthesize floatValue=_floatValue;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006e7a0
- (unsigned long long)hash;	// IMP=0x001000000006e4a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006e2a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006df70
- (void)copyTo:(id)arg1;	// IMP=0x001000000006dd00
- (void)writeTo:(id)arg1;	// IMP=0x001000000006da30
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006da20
- (id)dictionaryRepresentation;	// IMP=0x001000000006b300
- (id)description;	// IMP=0x001000000006b250
- (id)childAtIndex:(unsigned long long)arg1;	// IMP=0x001000000006b210
- (unsigned long long)childsCount;	// IMP=0x001000000006b1f0
- (void)addChild:(id)arg1;	// IMP=0x001000000006b180
- (void)clearChilds;	// IMP=0x001000000006b160
- (int)StringAsMergeOp:(id)arg1;	// IMP=0x001000000006b0c0
- (id)mergeOpAsString:(int)arg1;	// IMP=0x001000000006b050
@property(nonatomic) _Bool hasMergeOp;
@property(nonatomic) int mergeOp; // @synthesize mergeOp=_mergeOp;
- (int)StringAsOp:(id)arg1;	// IMP=0x001000000006ad60
- (id)opAsString:(int)arg1;	// IMP=0x001000000006abe0
@property(nonatomic) _Bool hasOp;
@property(nonatomic) int op; // @synthesize op=_op;
@property(nonatomic) _Bool hasBoolValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasFloatValue;
@property(nonatomic) _Bool hasIntValue;
@property(readonly, nonatomic) _Bool hasStringValue;
- (int)StringAsKeys:(id)arg1;	// IMP=0x001000000006a110
- (id)keysAsString:(int)arg1;	// IMP=0x0010000000069aa0
- (void)setKeys:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000069a80
- (int)keyAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000699b0
- (void)addKey:(int)arg1;	// IMP=0x0010000000069990
- (void)clearKeys;	// IMP=0x0010000000069970
@property(readonly, nonatomic) int *keys;
@property(readonly, nonatomic) unsigned long long keysCount;
- (void)dealloc;	// IMP=0x00100000000698e0

@end

