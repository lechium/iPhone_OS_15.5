//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt64UInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000003e2be
- (void)removeUInt32ForKey:(long long)arg1;	// IMP=0x000000000003e285
- (void)setUInt32:(unsigned int)arg1 forKey:(long long)arg2;	// IMP=0x000000000003e1fd
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000003e1bc
- (_Bool)getUInt32:(unsigned int *)arg1 forKey:(long long)arg2;	// IMP=0x000000000003e14f
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000003e08b
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000003e02b
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000003de96
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000003dd21
- (void)enumerateKeysAndUInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003dc62
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000003dc0b
- (unsigned long long)hash;	// IMP=0x000000000003dbf5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003dba4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003db6c
- (void)dealloc;	// IMP=0x000000000003dab8
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003da9f
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003da57
- (id)initWithUInt32s:(const unsigned int *)arg1 forKeys:(const long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003d955
- (id)init;	// IMP=0x000000000003d93c

@end
