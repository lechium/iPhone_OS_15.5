//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>
#import <Transparency/NSSecureCoding-Protocol.h>

@class GPBExtensionDescriptor, GPBFieldDescriptor, GPBUnknownFieldSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBMessage : NSObject <NSSecureCoding, NSCopying>
{
    GPBUnknownFieldSet *unknownFields_;	// 8 = 0x8
    NSMutableDictionary *extensionMap_;	// 16 = 0x10
    NSMutableDictionary *autocreatedExtensionMap_;	// 24 = 0x18
    GPBMessage *autocreator_;	// 32 = 0x20
    GPBFieldDescriptor *autocreatorField_;	// 40 = 0x28
    GPBExtensionDescriptor *autocreatorExtension_;	// 48 = 0x30
    _Atomic id readOnlySemaphore_;	// 56 = 0x38
    struct GPBMessage_Storage *messageStorage_;	// 64 = 0x40
}

+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x000000000003d972
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003d884
+ (_Bool)resolveClassMethod:(SEL)arg1;	// IMP=0x000000000003d814
+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x000000000003c7fb
+ (id)parseDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000391fd
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000391ba
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000039177
+ (id)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000039160
+ (id)message;	// IMP=0x0000000000036479
+ (id)descriptor;	// IMP=0x00000000000363e7
+ (id)alloc;	// IMP=0x00000000000363dd
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000363a7
+ (void)initialize;	// IMP=0x0000000000036333
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d910
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003d88c
- (unsigned long long)serializedSize;	// IMP=0x000000000003b5d3
- (id)description;	// IMP=0x000000000003b578
- (unsigned long long)hash;	// IMP=0x000000000003b27c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003ae2a
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003a34a
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x00000000000396ef
- (void)addUnknownMapEntry:(int)arg1 value:(id)arg2;	// IMP=0x00000000000396c5
- (_Bool)parseUnknownField:(id)arg1 extensionRegistry:(id)arg2 tag:(unsigned int)arg3;	// IMP=0x0000000000039511
- (void)parseMessageSet:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x00000000000392d3
@property(copy, nonatomic) GPBUnknownFieldSet *unknownFields;
- (void)mergeDelimitedFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x00000000000390f3
- (void)mergeFromData:(id)arg1 extensionRegistry:(id)arg2;	// IMP=0x0000000000039086
- (void)clearExtension:(id)arg1;	// IMP=0x0000000000039033
- (void)setExtension:(id)arg1 index:(unsigned long long)arg2 value:(id)arg3;	// IMP=0x0000000000038f7b
- (void)addExtension:(id)arg1 value:(id)arg2;	// IMP=0x0000000000038e95
- (void)setExtension:(id)arg1 value:(id)arg2;	// IMP=0x0000000000038d65
- (void)writeExtensionsToCodedOutputStream:(id)arg1 range:(struct GPBExtensionRange)arg2 sortedExtensions:(id)arg3;	// IMP=0x0000000000038bdc
- (id)extensionsCurrentlySet;	// IMP=0x0000000000038bc6
- (_Bool)hasExtension:(id)arg1;	// IMP=0x0000000000038ba9
- (id)getExistingExtension:(id)arg1;	// IMP=0x0000000000038b93
- (id)getExtension:(id)arg1;	// IMP=0x00000000000389b0
- (void)writeField:(id)arg1 toCodedOutputStream:(id)arg2;	// IMP=0x0000000000038213
- (void)writeDelimitedToCodedOutputStream:(id)arg1;	// IMP=0x00000000000381c6
- (void)writeDelimitedToOutputStream:(id)arg1;	// IMP=0x000000000003816d
- (void)writeToCodedOutputStream:(id)arg1;	// IMP=0x0000000000037f92
- (void)writeToOutputStream:(id)arg1;	// IMP=0x0000000000037f39
- (id)delimitedData;	// IMP=0x0000000000037e71
- (id)data;	// IMP=0x0000000000037dcf
- (id)descriptor;	// IMP=0x0000000000037db5
@property(readonly, nonatomic, getter=isInitialized) _Bool initialized;
- (void)internalClear:(_Bool)arg1;	// IMP=0x0000000000037312
- (void)clear;	// IMP=0x00000000000372fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000036e18
- (void)copyFieldsInto:(id)arg1 zone:(struct _NSZone *)arg2 descriptor:(id)arg3;	// IMP=0x000000000003678c
- (void)dealloc;	// IMP=0x000000000003673a
- (id)initWithCodedInputStream:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003669e
- (id)initWithData:(id)arg1 extensionRegistry:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000364f8
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000364e1
- (id)init;	// IMP=0x000000000003648b

@end

