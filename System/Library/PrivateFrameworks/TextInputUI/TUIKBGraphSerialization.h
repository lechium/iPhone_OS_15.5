//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMapTable, NSMutableData, NSMutableDictionary;

@interface TUIKBGraphSerialization : NSObject
{
    NSMapTable *_serializedOffsets;	// 8 = 0x8
    NSDictionary *_keyboardOffsets;	// 16 = 0x10
    NSData *_keyboardOffsetsData;	// 24 = 0x18
    NSData *_graphData;	// 32 = 0x20
    NSData *_serializedData;	// 40 = 0x28
    NSMutableDictionary *_minEdgeWidths;	// 48 = 0x30
    NSMutableDictionary *_maxEdgeWidths;	// 56 = 0x38
    NSMutableDictionary *_referenceCount;	// 64 = 0x40
    _Bool _disableOffsets;	// 72 = 0x48
    NSMutableDictionary *_deserializationCache;	// 80 = 0x50
}

+ (id)separatorCharacterSet;	// IMP=0x0000000000056c2c
@property(retain, nonatomic) NSMutableDictionary *deserializationCache; // @synthesize deserializationCache=_deserializationCache;
- (id)keyboardPrefixForWidth:(float)arg1 andEdge:(_Bool)arg2;	// IMP=0x0000000000056597
- (void)addKeyboardPrefix:(id)arg1 forWidth:(float)arg2 minEdge:(_Bool)arg3;	// IMP=0x0000000000056548
- (id)objectForOffset:(int *)arg1;	// IMP=0x00000000000562cd
- (id)_UIKBTreeForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x000000000005618c
- (id)UIKBTreeForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000056136
- (id)mergeActionForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000056060
- (id)shapeForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000055f46
- (struct CGRect)CGRectForOffset:(int *)arg1;	// IMP=0x0000000000055e90
- (id)geometryForOffset:(int *)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000055d1d
- (CDStruct_cdff19b3)UIKBValueForOffset:(int *)arg1;	// IMP=0x0000000000055cb0
- (id)dictionaryForOffset:(int *)arg1 nonEmpty:(_Bool)arg2;	// IMP=0x0000000000055c2c
- (id)setForOffset:(int *)arg1 nonEmpty:(_Bool)arg2;	// IMP=0x0000000000055bdc
- (id)relativeRefArrayForOffset:(int *)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000055b03
- (id)refArrayForOffset:(int *)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000055a5e
- (id)arrayForOffset:(int *)arg1 withCount:(unsigned long long)arg2;	// IMP=0x00000000000559dd
- (id)stringConcatForOffset:(int *)arg1 withComponentCount:(unsigned long long)arg2;	// IMP=0x0000000000055913
- (id)simpleStringForOffset:(int *)arg1 withUTF8Length:(unsigned long long)arg2;	// IMP=0x00000000000558ae
- (float)floatValueForOffset:(int *)arg1;	// IMP=0x000000000005589c
- (float)compressedFloatForOffset:(int *)arg1 withKind:(unsigned char)arg2;	// IMP=0x000000000005580a
- (float)bareFloatForOffset:(int *)arg1;	// IMP=0x00000000000557dc
- (int)intValueForOffset:(int *)arg1;	// IMP=0x00000000000557ca
- (unsigned char)flagsForOffset:(int *)arg1;	// IMP=0x00000000000557b4
- (unsigned long long)compressedUIntForOffset:(int *)arg1;	// IMP=0x0000000000055767
- (unsigned long long)compressedIntForOffset:(int *)arg1;	// IMP=0x00000000000556f5
- (id)keyboardForName:(id)arg1;	// IMP=0x00000000000555f1
@property(retain, nonatomic) NSData *serializedData;
- (unsigned long long)serializedObjectCount;	// IMP=0x00000000000550d7
- (void)preheatWithStatistics:(id)arg1;	// IMP=0x0000000000054f33
- (id)statistics;	// IMP=0x0000000000054f1c
- (void)serializeObject:(id)arg1;	// IMP=0x0000000000054e3e
- (id)_objectAtSerializedOffset:(int)arg1;	// IMP=0x0000000000054e1a
- (int)_serializedOffsetForObject:(id)arg1;	// IMP=0x0000000000054de3
- (void)persistData:(id)arg1 forObject:(id)arg2;	// IMP=0x0000000000054cc3
- (id)dataForObject:(id)arg1;	// IMP=0x0000000000054b1d
- (id)dataForOffsetObject:(id)arg1;	// IMP=0x0000000000054ac7
- (id)dataForUIKBTree:(id)arg1;	// IMP=0x0000000000054583
- (id)dataForMergeAction:(id)arg1;	// IMP=0x0000000000054405
- (id)dataForShape:(id)arg1;	// IMP=0x0000000000054278
- (id)dataForCGRect:(struct CGRect)arg1;	// IMP=0x0000000000054137
- (id)dataForGeometry:(id)arg1;	// IMP=0x0000000000053f3b
- (id)dataForUIKBValue:(CDStruct_cdff19b3)arg1;	// IMP=0x0000000000053e7a
- (id)dataForDictionary:(id)arg1;	// IMP=0x0000000000053c7d
- (id)sanitizedDictionary:(id)arg1;	// IMP=0x0000000000053bef
- (id)dataForSet:(id)arg1;	// IMP=0x0000000000053b43
- (id)dataForArray:(id)arg1;	// IMP=0x000000000005364d
- (id)dataForString:(id)arg1;	// IMP=0x0000000000053609
- (id)dataForSimpleString:(id)arg1;	// IMP=0x0000000000053570
- (id)dataForStringConcat:(id)arg1;	// IMP=0x000000000005337a
- (_Bool)stringIsSimple:(id)arg1;	// IMP=0x00000000000532ee
- (id)stringsBySplittingString:(id)arg1 afterCharactersInSet:(id)arg2;	// IMP=0x00000000000531f4
- (id)dataForReference:(int)arg1;	// IMP=0x00000000000531a1
- (id)dataForFloat:(float)arg1;	// IMP=0x0000000000053146
- (id)dataForBareFloat:(float)arg1;	// IMP=0x0000000000053117
- (id)dataForInt:(int)arg1;	// IMP=0x00000000000530c1
- (id)dataForFlags:(unsigned char)arg1;	// IMP=0x00000000000530ad
- (id)dataForCompressedFloat:(float)arg1 kind:(unsigned char *)arg2;	// IMP=0x0000000000052fb2
- (id)dataForCompressedUInt:(unsigned long long)arg1;	// IMP=0x0000000000052f2b
- (id)dataForCompressedInt:(long long)arg1;	// IMP=0x0000000000052e6e
- (id)mutableDataForObjectType:(unsigned char)arg1 withSize:(unsigned long long)arg2;	// IMP=0x0000000000052dce
- (id)mutableDataForObjectType:(unsigned char)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000052dbc
- (id)mutableDataForObjectType:(unsigned char)arg1;	// IMP=0x0000000000052da8
@property(readonly, nonatomic) NSMutableDictionary *keyboardOffsets;
@property(readonly, nonatomic) NSMutableData *graphData;
- (void)reset;	// IMP=0x0000000000052cd7
- (void)dealloc;	// IMP=0x0000000000052c5c
- (id)init;	// IMP=0x0000000000052b61

@end

