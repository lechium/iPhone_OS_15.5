//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBStringInt64Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x00000000000458b8
- (void)removeInt64ForKey:(id)arg1;	// IMP=0x00000000000458a2
- (void)setInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000000457fd
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x00000000000457bc
- (_Bool)getInt64:(long long *)arg1 forKey:(id)arg2;	// IMP=0x0000000000045773
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x00000000000456e3
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000045698
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000004551b
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000453b9
- (void)enumerateKeysAndInt64sUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004531f
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000452c8
- (unsigned long long)hash;	// IMP=0x00000000000452b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000045261
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045229
- (void)dealloc;	// IMP=0x0000000000045175
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000004515c
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000045114
- (id)initWithInt64s:(const long long *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000044ff6
- (id)init;	// IMP=0x0000000000044fdd

@end
