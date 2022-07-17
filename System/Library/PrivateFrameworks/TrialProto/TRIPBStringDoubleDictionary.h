//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBStringDoubleDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
}

- (void)removeAll;	// IMP=0x000000000004732a
- (void)removeDoubleForKey:(id)arg1;	// IMP=0x0000000000047314
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000047270
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000004722f
- (_Bool)getDouble:(double *)arg1 forKey:(id)arg2;	// IMP=0x00000000000471e4
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047152
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000047106
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000046f9f
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000046e45
- (void)enumerateKeysAndDoublesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046dae
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000046d57
- (unsigned long long)hash;	// IMP=0x0000000000046d41
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046cf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046cb8
- (void)dealloc;	// IMP=0x0000000000046c04
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000046beb
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000046ba3
- (id)initWithDoubles:(const double *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000046a83
- (id)init;	// IMP=0x0000000000046a6a

@end
