//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DMCUtilities/NSCopying-Protocol.h>
#import <DMCUtilities/NSSecureCoding-Protocol.h>

@class NSSet;

@interface DMCModelPayloadBase : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_unknownPayloadKeys;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d0bf
+ (id)loadData:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;	// IMP=0x000000000001a6da
+ (id)load:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;	// IMP=0x000000000001a65b
- (void).cxx_destruct;	// IMP=0x000000000001d34d
@property(copy, nonatomic) NSSet *unknownPayloadKeys; // @synthesize unknownPayloadKeys=_unknownPayloadKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d322
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d142
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d0c7
- (void)serializeDictionaryIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 dictSerializer:(CDUnknownBlockType)arg4 isRequired:(_Bool)arg5 defaultValue:(id)arg6;	// IMP=0x000000000001cfe0
- (void)serializeArrayIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 itemSerializer:(CDUnknownBlockType)arg4 isRequired:(_Bool)arg5 defaultValue:(id)arg6;	// IMP=0x000000000001cd63
- (void)serializeDataIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6;	// IMP=0x000000000001cc52
- (void)serializeDateIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6;	// IMP=0x000000000001cb16
- (void)serializeBooleanIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;	// IMP=0x000000000001ca0e
- (void)serializeFloatIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;	// IMP=0x000000000001c909
- (void)serializeIntegerIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;	// IMP=0x000000000001c801
- (void)serializeStringIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5;	// IMP=0x000000000001c758
- (void)_serializeItemIntoDictionary:(id)arg1 usingKey:(id)arg2 value:(id)arg3 isRequired:(_Bool)arg4 isDefaultValue:(_Bool)arg5;	// IMP=0x000000000001c6c8
- (_Bool)getModelObjectFromDictionary:(id)arg1 usingKey:(id)arg2 classType:(Class)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 payloadValue:(id *)arg7 error:(id *)arg8;	// IMP=0x000000000001c557
- (_Bool)loadDictionaryFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 isRequired:(_Bool)arg5 defaultValue:(id)arg6 serializationType:(short)arg7 error:(id *)arg8;	// IMP=0x000000000001c490
- (_Bool)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 classType:(Class)arg4 nested:(_Bool)arg5 isRequired:(_Bool)arg6 defaultValue:(id)arg7 serializationType:(short)arg8 error:(id *)arg9;	// IMP=0x000000000001be00
- (_Bool)loadArrayFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 validator:(CDUnknownBlockType)arg4 isRequired:(_Bool)arg5 defaultValue:(id)arg6 error:(id *)arg7;	// IMP=0x000000000001ba29
- (_Bool)loadDataFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id *)arg7;	// IMP=0x000000000001b6b2
- (_Bool)loadDateFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 serializationType:(short)arg6 error:(id *)arg7;	// IMP=0x000000000001b2e5
- (_Bool)loadBooleanFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001b19d
- (_Bool)loadFloatFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001b058
- (_Bool)loadIntegerFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001af10
- (_Bool)loadStringFromDictionary:(id)arg1 usingKey:(id)arg2 forKeyPath:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001ae08
- (_Bool)_loadObjectOfClass:(Class)arg1 fromDictionary:(id)arg2 usingKey:(id)arg3 isRequired:(_Bool)arg4 defaultValue:(id)arg5 payloadValue:(id *)arg6 error:(id *)arg7;	// IMP=0x000000000001ab42
- (id)serializeAsDataWithType:(short)arg1 error:(id *)arg2;	// IMP=0x000000000001a979
- (id)serializeWithType:(short)arg1;	// IMP=0x000000000001a96c
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;	// IMP=0x000000000001a964
- (id)createNestedObjectWithClass:(Class)arg1 serializationType:(short)arg2 parentKey:(id)arg3 payload:(id)arg4 error:(id *)arg5;	// IMP=0x000000000001a4b2
- (void)mergeUnknownKeysFrom:(id)arg1 parentKey:(id)arg2;	// IMP=0x000000000001a1d2

@end

