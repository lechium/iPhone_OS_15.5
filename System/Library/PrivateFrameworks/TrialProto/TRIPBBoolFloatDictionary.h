//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class TRIPBMessage;

@interface TRIPBBoolFloatDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    float _values[2];	// 16 = 0x10
    _Bool _valueSet[2];	// 24 = 0x18
}

- (void)removeAll;	// IMP=0x000000000004a6c9
- (void)removeFloatForKey:(_Bool)arg1;	// IMP=0x000000000004a6bc
- (void)setFloat:(float)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004a697
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000004a64d
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x000000000004a532
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x000000000004a45b
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a400
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a369
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x000000000004a351
- (_Bool)getFloat:(float *)arg1 forKey:(_Bool)arg2;	// IMP=0x000000000004a32f
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x000000000004a27c
- (unsigned long long)hash;	// IMP=0x000000000004a26b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004a1f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004a1b9
- (void)dealloc;	// IMP=0x000000000004a10f
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000004a0f6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004a098
- (id)initWithFloats:(const float *)arg1 forKeys:(const _Bool *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000004a02c
- (id)init;	// IMP=0x000000000004a013

@end

