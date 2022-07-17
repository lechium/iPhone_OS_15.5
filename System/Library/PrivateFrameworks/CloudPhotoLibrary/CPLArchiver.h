//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface CPLArchiver : NSCoder
{
    id _archive;	// 8 = 0x8
    id _archiveCursor;	// 16 = 0x10
    id _rootObject;	// 24 = 0x18
    _Bool _forDisplay;	// 32 = 0x20
}

+ (id)displayableDictionaryForDictionary:(id)arg1;	// IMP=0x0000000000062280
+ (id)_displayableObjectForObject:(id)arg1;	// IMP=0x00000000000621c5
+ (id)_displayableArrayForArray:(id)arg1;	// IMP=0x0000000000061fe3
+ (id)unarchiveObjectWithData:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0000000000061e7e
+ (id)fullDescriptionForObject:(id)arg1;	// IMP=0x0000000000061db6
+ (id)displayablePropertyListWithRootObject:(id)arg1;	// IMP=0x0000000000061d3a
+ (id)unarchivedObjectWithPropertyList:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0000000000061cb4
+ (id)archivedDataWithRootObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061b56
+ (id)archivedPropertyListWithRootObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000061abd
+ (id)archivedPropertyListWithRootObject:(id)arg1;	// IMP=0x0000000000061a44
+ (id)archivedDataWithRootObject:(id)arg1;	// IMP=0x00000000000618ec
+ (void)_initializeSmallKeyMapping;	// IMP=0x00000000000618cc
- (void).cxx_destruct;	// IMP=0x000000000006159c
@property(retain, nonatomic) id archiveCursor; // @synthesize archiveCursor=_archiveCursor;
@property(readonly, nonatomic) _Bool forDisplay; // @synthesize forDisplay=_forDisplay;
- (struct CGRect)decodeRectForKey:(id)arg1;	// IMP=0x00000000000610fa
- (struct CGSize)decodeSizeForKey:(id)arg1;	// IMP=0x0000000000060d36
- (struct CGPoint)decodePointForKey:(id)arg1;	// IMP=0x0000000000060972
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x00000000000606a5
- (void)encodeSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x0000000000060474
- (void)encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x0000000000060243
- (id)decodePropertyListForKey:(id)arg1;	// IMP=0x0000000000060095
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005f924
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;	// IMP=0x000000000005f78e
- (long long)decodeIntegerForKey:(id)arg1;	// IMP=0x000000000005f672
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000005f569
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;	// IMP=0x000000000005f3bb
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x000000000005f29b
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x000000000005f17b
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x000000000005f05f
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x000000000005ef45
- (int)decodeIntForKey:(id)arg1;	// IMP=0x000000000005ee2b
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x000000000005ed11
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x000000000005eb63
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x000000000005eb25
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x000000000005e9cb
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000005e8af
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x000000000005e796
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000005e68d
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000005e584
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000005e47b
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000005e370
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005e20c
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000005e0cf
- (id)decodePropertyList;	// IMP=0x000000000005e000
- (void)encodePropertyList:(id)arg1;	// IMP=0x000000000005df26
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x000000000005de57
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void *)arg3;	// IMP=0x000000000005dd88
- (void)decodeValuesOfObjCTypes:(const char *)arg1;	// IMP=0x000000000005dcb9
- (id)decodeObject;	// IMP=0x000000000005dbea
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000005db1b
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;	// IMP=0x000000000005da4c
- (void)encodeValuesOfObjCTypes:(const char *)arg1;	// IMP=0x000000000005d97d
- (void)encodeConditionalObject:(id)arg1;	// IMP=0x000000000005d8a3
- (void)encodeByrefObject:(id)arg1;	// IMP=0x000000000005d7c9
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x000000000005d6ef
- (void)encodeRootObject:(id)arg1;	// IMP=0x000000000005d615
- (void)encodeObject:(id)arg1;	// IMP=0x000000000005d53b
- (id)initWithArchive:(id)arg1 rootClass:(Class)arg2;	// IMP=0x000000000005d1b1
- (id)rootObject;	// IMP=0x000000000005d19c
- (id)initWithRootObject:(id)arg1 forDisplay:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cfe9
- (id)initWithRootObject:(id)arg1 forDisplay:(_Bool)arg2;	// IMP=0x000000000005ce77
- (id)archivedPropertyList;	// IMP=0x000000000005ce62
- (_Bool)allowsKeyedCoding;	// IMP=0x000000000005ce5a
- (id)_decodeKey:(id)arg1 class:(Class)arg2 inDictionary:(id)arg3;	// IMP=0x000000000005cd0b
- (id)_encodeKey:(id)arg1;	// IMP=0x000000000005cc6a

@end
