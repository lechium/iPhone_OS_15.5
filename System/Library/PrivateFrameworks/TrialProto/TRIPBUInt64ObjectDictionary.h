//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBUInt64ObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000003d926
- (void)removeObjectForKey:(unsigned long long)arg1;	// IMP=0x000000000003d8ed
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000003d848
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000003d807
- (id)objectForKey:(unsigned long long)arg1;	// IMP=0x000000000003d7ce
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d73e
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000003d6f3
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000003d57b
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000003d419
- (id)deepCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d324
- (_Bool)isInitialized;	// IMP=0x000000000003d205
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003d163
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000003d10c
- (unsigned long long)hash;	// IMP=0x000000000003d0f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d0a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d06d
- (void)dealloc;	// IMP=0x000000000003cfb9
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003cfa0
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003cf58
- (id)initWithObjects:(const id *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003ce2d
- (id)init;	// IMP=0x000000000003ce14

@end

