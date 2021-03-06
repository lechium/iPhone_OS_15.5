//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>
#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBStringFloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000290da
- (void)removeFloatForKey:(id)arg1;	// IMP=0x00000000000290c4
- (void)setFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x0000000000029020
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000028fdf
- (_Bool)getFloat:(float *)arg1 forKey:(id)arg2;	// IMP=0x0000000000028f94
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028efe
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000028eb2
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000028d52
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000028c1d
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028b86
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000028b2f
- (unsigned long long)hash;	// IMP=0x0000000000028b19
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028ac8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028a90
- (void)dealloc;	// IMP=0x0000000000028a55
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000028a3c
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000289f4
- (id)initWithFloats:(const float *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000288d4
- (id)init;	// IMP=0x00000000000288bb

@end

