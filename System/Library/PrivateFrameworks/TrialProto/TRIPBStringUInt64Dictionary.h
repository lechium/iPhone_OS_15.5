//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBStringUInt64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000044fc7
- (void)removeUInt64ForKey:(id)arg1;	// IMP=0x0000000000044fb1
- (void)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000044f0c
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000044ecb
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(id)arg2;	// IMP=0x0000000000044e82
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044df2
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000044da7
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000044c2a
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000044ac8
- (void)enumerateKeysAndUInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044a2e
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000449d7
- (unsigned long long)hash;	// IMP=0x00000000000449c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000044970
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000044938
- (void)dealloc;	// IMP=0x0000000000044884
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000004486b
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000044823
- (id)initWithUInt64s:(const unsigned long long *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000044705
- (id)init;	// IMP=0x00000000000446ec

@end

