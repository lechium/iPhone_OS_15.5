//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialProto/NSCopying-Protocol.h>
#import <TrialProto/TRIPBDictionaryInternalsProtocol-Protocol.h>

@class NSMutableDictionary, TRIPBMessage;

@interface TRIPBInt32EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying>
{
    TRIPBMessage *_autocreator;	// 8 = 0x8
    NSMutableDictionary *_dictionary;	// 16 = 0x10
    CDUnknownFunctionPointerType _validationFunc;	// 24 = 0x18
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
- (void)setEnum:(int)arg1 forKey:(int)arg2;	// IMP=0x000000000003729f
- (void)removeAll;	// IMP=0x0000000000037289
- (void)removeEnumForKey:(int)arg1;	// IMP=0x0000000000037250
- (void)setRawValue:(int)arg1 forKey:(int)arg2;	// IMP=0x00000000000371c8
- (void)addRawEntriesFromDictionary:(id)arg1;	// IMP=0x0000000000037187
- (void)enumerateKeysAndEnumsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000370c1
- (_Bool)getRawValue:(int *)arg1 forKey:(int)arg2;	// IMP=0x0000000000037055
- (_Bool)getEnum:(int *)arg1 forKey:(int)arg2;	// IMP=0x0000000000036fd3
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036f21
- (void)setTRIPBGenericValue:(CDUnion_a49d1a5a *)arg1 forTRIPBGenericValueKey:(CDUnion_a49d1a5a *)arg2;	// IMP=0x0000000000036eb8
- (id)serializedDataForUnknownValue:(int)arg1 forKey:(CDUnion_a49d1a5a *)arg2 keyDataType:(unsigned char)arg3;	// IMP=0x0000000000036dff
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;	// IMP=0x0000000000036c7e
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;	// IMP=0x0000000000036b1b
- (void)enumerateKeysAndRawValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000036a6e
@property(readonly, nonatomic) unsigned long long count;
- (id)description;	// IMP=0x0000000000036a17
- (unsigned long long)hash;	// IMP=0x0000000000036a01
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000369b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036978
- (void)dealloc;	// IMP=0x00000000000368c4
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000000368aa
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003683e
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 forKeys:(const int *)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000003672f
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;	// IMP=0x0000000000036715
- (id)init;	// IMP=0x00000000000366f9

@end
