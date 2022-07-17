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
@interface GPBInt32ObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000001af89
- (void)removeObjectForKey:(int)arg1;	// IMP=0x000000000001af50
- (void)setObject:(id)arg1 forKey:(int)arg2;	// IMP=0x000000000001aeab
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000001ae6a
- (id)objectForKey:(int)arg1;	// IMP=0x000000000001ae31
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ada2
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000001ad58
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000001abbd
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000001aa5c
- (id)deepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a967
- (_Bool)isInitialized;	// IMP=0x000000000001a848
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a7a7
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000001a750
- (unsigned long long)hash;	// IMP=0x000000000001a73a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001a6e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a6b1
- (void)dealloc;	// IMP=0x000000000001a676
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000001a65d
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001a615
- (id)initWithObjects:(const id *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001a4ea
- (id)init;	// IMP=0x000000000001a4d1

@end
