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
@interface GPBInt32FloatDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000018f66
- (void)removeFloatForKey:(int)arg1;	// IMP=0x0000000000018f2d
- (void)setFloat:(float)arg1 forKey:(int)arg2;	// IMP=0x0000000000018ea5
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000018e64
- (_Bool)getFloat:(float *)arg1 forKey:(int)arg2;	// IMP=0x0000000000018df6
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018d28
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000018cc6
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000018b13
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000189b9
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000188fe
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000188a7
- (unsigned long long)hash;	// IMP=0x0000000000018891
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018840
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018808
- (void)dealloc;	// IMP=0x00000000000187cd
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000000187b4
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001876c
- (id)initWithFloats:(const float *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000018668
- (id)init;	// IMP=0x000000000001864f

@end

