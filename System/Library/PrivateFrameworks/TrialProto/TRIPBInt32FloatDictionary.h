//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt32FloatDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x0000000000035d5c
- (void)removeFloatForKey:(int)arg1;	// IMP=0x0000000000035d23
- (void)setFloat:(float)arg1 forKey:(int)arg2;	// IMP=0x0000000000035c9b
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000035c5a
- (_Bool)getFloat:(float *)arg1 forKey:(int)arg2;	// IMP=0x0000000000035bec
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035b1e
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000035abc
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000035938
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x00000000000357cb
- (void)enumerateKeysAndFloatsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035710
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x00000000000356b9
- (unsigned long long)hash;	// IMP=0x00000000000356a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000035652
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003561a
- (void)dealloc;	// IMP=0x0000000000035566
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003554d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000035505
- (id)initWithFloats:(const float *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000035401
- (id)init;	// IMP=0x00000000000353e8

@end

