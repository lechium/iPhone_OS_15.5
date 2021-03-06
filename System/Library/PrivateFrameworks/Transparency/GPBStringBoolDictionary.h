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
@interface GPBStringBoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000288a5
- (void)removeBoolForKey:(id)arg1;	// IMP=0x000000000002888f
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000000287f8
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000287b7
- (_Bool)getBool:(_Bool *)arg1 forKey:(id)arg2;	// IMP=0x000000000002876e
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000000000286f9
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x00000000000286ae
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000028550
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000028418
- (void)enumerateKeysAndBoolsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002837e
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000028327
- (unsigned long long)hash;	// IMP=0x0000000000028311
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000282c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028288
- (void)dealloc;	// IMP=0x000000000002824d
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000028234
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000281ec
- (id)initWithBools:(const _Bool *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000280cd
- (id)init;	// IMP=0x00000000000280b4

@end

