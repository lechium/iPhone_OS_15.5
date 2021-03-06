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
@interface GPBUInt32DoubleDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000140f4
- (void)removeDoubleForKey:(unsigned int)arg1;	// IMP=0x00000000000140bb
- (void)setDouble:(double)arg1 forKey:(unsigned int)arg2;	// IMP=0x0000000000014033
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000013ff2
- (_Bool)getDouble:(double *)arg1 forKey:(unsigned int)arg2;	// IMP=0x0000000000013f84
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013eb9
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x0000000000013e57
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000013cbf
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000013b65
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013aaa
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000013a53
- (unsigned long long)hash;	// IMP=0x0000000000013a3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000139ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000139b4
- (void)dealloc;	// IMP=0x0000000000013979
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000013960
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013918
- (id)initWithDoubles:(const double *)arg1 forKeys:(const unsigned int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000013814
- (id)init;	// IMP=0x00000000000137fb

@end

