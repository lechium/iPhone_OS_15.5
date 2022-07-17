//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError;
@protocol NSSecureCoding><NSObject;

@interface DTXMessage : NSObject
{
    unsigned int _messageType;	// 8 = 0x8
    int _compressionType;	// 12 = 0xc
    unsigned int _status;	// 16 = 0x10
    NSData *_payloadData;	// 24 = 0x18
    unsigned long long _cost;	// 32 = 0x20
    NSData *_serializedData;	// 40 = 0x28
    id <NSSecureCoding><NSObject> _payloadObject;	// 48 = 0x30
    void *_auxiliary;	// 56 = 0x38
    _Atomic _Bool _immutable;	// 64 = 0x40
    _Bool _deserialized;	// 65 = 0x41
    _Bool _expectsReply;	// 66 = 0x42
    unsigned int _identifier;	// 68 = 0x44
    unsigned int _channelCode;	// 72 = 0x48
    unsigned int _conversationIndex;	// 76 = 0x4c
    NSDictionary *_auxiliaryPromoted;	// 80 = 0x50
}

+ (_Bool)extractSerializedCompressionInfoFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 compressionType:(int *)arg3 uncompressedLength:(unsigned long long *)arg4 compressedDataOffset:(unsigned long long *)arg5;	// IMP=0x000000000001a526
+ (id)message;	// IMP=0x000000000001749c
+ (id)messageWithSelector:(SEL)arg1 arguments:(id)arg2;	// IMP=0x00000000000173b8
+ (id)messageWithSelector:(SEL)arg1 objectArguments:(id)arg2;	// IMP=0x0000000000017232
+ (id)messageWithSelector:(SEL)arg1 typesAndArguments:(unsigned int)arg2;	// IMP=0x000000000001707e
+ (id)messageWithData:(id)arg1;	// IMP=0x0000000000016ffb
+ (id)messageReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016f89
+ (id)messageWithBuffer:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000016f40
+ (id)messageWithPrimitive:(void *)arg1;	// IMP=0x0000000000016ece
+ (id)messageWithError:(id)arg1;	// IMP=0x0000000000016e7c
+ (id)messageWithObject:(id)arg1;	// IMP=0x0000000000016e2a
+ (void)setReportCompressionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016924
+ (id)defaultAllowedSecureCodingClasses;	// IMP=0x0000000000016215
+ (void)initialize;	// IMP=0x0000000000015f84
- (void).cxx_destruct;	// IMP=0x000000000001ae90
@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(nonatomic) unsigned int errorStatus; // @synthesize errorStatus=_status;
@property(readonly, nonatomic) _Bool deserialized; // @synthesize deserialized=_deserialized;
@property(nonatomic) unsigned int conversationIndex; // @synthesize conversationIndex=_conversationIndex;
@property(nonatomic) _Bool expectsReply; // @synthesize expectsReply=_expectsReply;
@property(nonatomic) unsigned int channelCode; // @synthesize channelCode=_channelCode;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long serializedLength;
- (void)serializedFormApply:(CDUnknownBlockType)arg1;	// IMP=0x000000000001acaf
- (id)initWithSerializedForm:(const char *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3 compressor:(id)arg4;	// IMP=0x000000000001ab31
- (id)initWithSerializedForm:(id)arg1 compressor:(id)arg2;	// IMP=0x000000000001aa4a
- (id)_initWithReferencedSerializedForm:(id)arg1 compressor:(id)arg2 payloadSet:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a87a
- (id)_decompressedData:(id)arg1 compressor:(id)arg2 compressionType:(int)arg3;	// IMP=0x000000000001a582
- (void)invokeWithTarget:(id)arg1 replyChannel:(id)arg2 validator:(CDUnknownBlockType)arg3;	// IMP=0x000000000001997a
- (_Bool)shouldInvokeWithTarget:(id)arg1;	// IMP=0x00000000000197c7
@property(nonatomic) unsigned int messageType;
@property(readonly, nonatomic) _Bool isBarrier;
@property(readonly, nonatomic) _Bool isDispatch;
@property(retain, nonatomic) NSError *error;
- (id)valueForMessageKey:(id)arg1;	// IMP=0x00000000000195de
- (id)dataForMessageKey:(id)arg1;	// IMP=0x000000000001957a
- (id)stringForMessageKey:(id)arg1;	// IMP=0x0000000000019516
- (long long)integerForMessageKey:(id)arg1;	// IMP=0x0000000000019490
- (id)_faultAuxiliaryValueOfType:(Class)arg1 forKey:(id)arg2;	// IMP=0x00000000000193bb
- (void)setData:(id)arg1 forMessageKey:(id)arg2;	// IMP=0x000000000001930c
- (void)setInteger:(long long)arg1 forMessageKey:(id)arg2;	// IMP=0x0000000000019265
- (void)setString:(id)arg1 forMessageKey:(id)arg2;	// IMP=0x00000000000191b6
- (void)setObject:(id)arg1 forMessageKey:(id)arg2;	// IMP=0x00000000000191b0
- (id)_mutableAuxiliaryDictionary;	// IMP=0x00000000000190ff
- (void)_appendTypesAndValues:(unsigned int)arg1 withKey:(id)arg2 list:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000018e3a
- (void)_willModifyAuxiliary;	// IMP=0x0000000000018da4
- (void)_makeBarrier;	// IMP=0x0000000000018c89
- (void)_makeImmutable;	// IMP=0x0000000000018894
- (const void *)getBufferWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x000000000001884c
@property(readonly, nonatomic) id <NSSecureCoding><NSObject> object;
- (id)objectWithAllowedClasses:(id)arg1;	// IMP=0x00000000000186c7
@property(copy, nonatomic) id <NSSecureCoding><NSObject> payloadObject;
- (void)_setPayloadBuffer:(const char *)arg1 length:(unsigned long long)arg2 shouldCopy:(_Bool)arg3 destructor:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018262
- (void)dealloc;	// IMP=0x0000000000018215
- (id)initWithInvocation:(id)arg1;	// IMP=0x0000000000017f6b
- (id)initWithSelector:(SEL)arg1 objects:(id)arg2;	// IMP=0x0000000000017cff
- (id)initWithSelector:(SEL)arg1 firstArg:(id)arg2 remainingObjectArgs:(struct __va_list_tag [1])arg3;	// IMP=0x0000000000017a36
- (id)newReplyReferencingBuffer:(const void *)arg1 length:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;	// IMP=0x00000000000179a3
- (id)newReplyWithMessage:(id)arg1;	// IMP=0x000000000001765a
- (id)newReplyWithError:(id)arg1;	// IMP=0x00000000000175c7
- (id)newReplyWithObject:(id)arg1;	// IMP=0x0000000000017534
- (id)newReply;	// IMP=0x00000000000174ae
- (void)compressWithCompressor:(id)arg1 usingType:(int)arg2 forCompatibilityWithVersion:(long long)arg3;	// IMP=0x0000000000016a46
- (id)descriptionWithRoutingInformation:(struct DTXMessageRoutingInfo)arg1;	// IMP=0x0000000000016914
- (id)description;	// IMP=0x000000000001623e
@property(readonly, nonatomic) NSData *data; // @synthesize data=_payloadData;

@end
