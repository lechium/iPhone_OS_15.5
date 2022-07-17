//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class NSMutableData;

@interface UINibEncoder : NSCoder
{
    struct __CFDictionary *objectsToObjectIDs;	// 8 = 0x8
    struct __CFDictionary *objectIDsToObjects;	// 16 = 0x10
    struct __CFArray *values;	// 24 = 0x18
    struct __CFSet *encodedObjects;	// 32 = 0x20
    NSMutableData *data;	// 40 = 0x28
    struct __CFDictionary *replacements;	// 48 = 0x30
    unsigned int nextObjectID;	// 56 = 0x38
    struct {
        unsigned int currentObjectID;
        unsigned int nextAnonymousKey;
    } recursiveState;	// 60 = 0x3c
    struct __CFSet *objectsReplacedWithNil;	// 72 = 0x48
    id delegate;	// 80 = 0x50
    struct __CFArray *encodedOrderedObjects;	// 88 = 0x58
    struct __CFSet *objectsUniquedByValue;	// 96 = 0x60
}

+ (_Bool)archiveRootObject:(id)arg1 toFile:(id)arg2;	// IMP=0x00000000000d45f4
+ (id)archivedDataWithRootObject:(id)arg1;	// IMP=0x00000000000d4575
@property id delegate; // @synthesize delegate;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x00000000000d56f3
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000d56ae
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;	// IMP=0x00000000000d564e
- (void)encodeValuesOfObjCTypes:(const char *)arg1;	// IMP=0x00000000000d55ee
- (void)encodeConditionalObject:(id)arg1;	// IMP=0x00000000000d55ae
- (void)encodeByrefObject:(id)arg1;	// IMP=0x00000000000d556e
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x00000000000d552e
- (void)encodeRootObject:(id)arg1;	// IMP=0x00000000000d54ee
- (void)encodeObject:(id)arg1;	// IMP=0x00000000000d54ae
- (id)nextGenericKey;	// IMP=0x00000000000d5477
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2;	// IMP=0x00000000000d541e
- (void)encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;	// IMP=0x00000000000d53bd
- (void)encodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x00000000000d5364
- (void)encodeCGSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x00000000000d5311
- (void)encodeCGPoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x00000000000d52be
- (void)encodeArrayOfCGFloats:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d52ac
- (void)encodeArrayOfFloats:(float *)arg1 count:(long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d51da
- (void)encodeArrayOfDoubles:(double *)arg1 count:(long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d5107
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00000000000d50c4
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x00000000000d5082
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x00000000000d5040
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4ffd
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4fba
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4f74
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4f2e
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4eeb
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4d50
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d4b58
- (_Bool)allowsKeyedCoding;	// IMP=0x00000000000d4b50
- (long long)versionForClassName:(id)arg1;	// IMP=0x00000000000d4b22
- (unsigned int)systemVersion;	// IMP=0x00000000000d4b17
- (void)finishEncoding;	// IMP=0x00000000000d462a
- (void)serializeObject:(id)arg1;	// IMP=0x00000000000d44ba
- (void)serializeSet:(id)arg1;	// IMP=0x00000000000d437f
- (void)serializeDictionary:(id)arg1;	// IMP=0x00000000000d41d4
- (void)serializeArray:(id)arg1;	// IMP=0x00000000000d4099
- (id)replacementObjectForObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000d3ec1
- (_Bool)shouldUniqueObjectByValue:(id)arg1;	// IMP=0x00000000000d3e53
- (_Bool)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2;	// IMP=0x00000000000d3dfe
- (_Bool)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2;	// IMP=0x00000000000d3da0
- (id)encodedClassNameForObject:(id)arg1;	// IMP=0x00000000000d3d6f
- (id)encodedClassNameForClass:(Class)arg1;	// IMP=0x00000000000d3d62
- (Class)encodedClassForObject:(id)arg1;	// IMP=0x00000000000d3d2f
- (void)appendValue:(id)arg1;	// IMP=0x00000000000d3d17
- (_Bool)previouslyCodedObject:(id)arg1;	// IMP=0x00000000000d3cfe
- (id)assignObjectIDForObject:(id)arg1;	// IMP=0x00000000000d3c8f
- (id)objectIDForObject:(id)arg1;	// IMP=0x00000000000d3c77
- (void)dealloc;	// IMP=0x00000000000d3bb5
- (id)initForWritingWithMutableData:(id)arg1;	// IMP=0x00000000000d3981

@end
