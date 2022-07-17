//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/GPBDictionaryInternalsProtocol-Protocol.h>
#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBBoolUInt32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;	// 8 = 0x8
    unsigned int _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 24 = 0x18
}

- (void)removeAll;	// IMP=0x000000000002aa50
- (void)removeUInt32ForKey:(_Bool)arg1;	// IMP=0x000000000002aa43
- (void)setUInt32:(unsigned int)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002aa20
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000002a9da
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000002a88b
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000002a7bf
- (void)enumerateKeysAndUInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a768
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a6e2
- (void)setGPBGenericValue:(CDUnion_88782d86 *)arg1 forGPBGenericValueKey:(CDUnion_88782d86 *)arg2;	// IMP=0x000000000002a6ce
- (_Bool)getUInt32:(unsigned int *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000002a6b0
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000002a604
- (unsigned long long)hash;	// IMP=0x000000000002a5f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a583
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a54b
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000002a532
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002a4d8
- (id)initWithUInt32s:(const unsigned int *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000002a470
- (id)init;	// IMP=0x000000000002a457

@end
