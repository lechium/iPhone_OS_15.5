//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBUInt64UInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000003880b
- (void)removeUInt32ForKey:(unsigned long long)arg1;	// IMP=0x00000000000387d2
- (void)setUInt32:(unsigned int)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000003874a
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000038709
- (_Bool)getUInt32:(unsigned int *)arg1 forKey:(unsigned long long)arg2;	// IMP=0x000000000003869c
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000000000385d8
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000038578
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x00000000000383e3
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000003826e
- (void)enumerateKeysAndUInt32sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000381af
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000038158
- (unsigned long long)hash;	// IMP=0x0000000000038142
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000380f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000380b9
- (void)dealloc;	// IMP=0x0000000000038005
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000037fec
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000037fa4
- (id)initWithUInt32s:(const unsigned int *)arg1 forKeys:(const unsigned long long *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000037ea2
- (id)init;	// IMP=0x0000000000037e89

@end
