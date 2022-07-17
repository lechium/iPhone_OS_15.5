//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol APNSPackEncoderDelegate;

@interface APNSPackEncoder : NSObject
{
    id <APNSPackEncoderDelegate> _delegate;	// 8 = 0x8
    void *_encoder;	// 16 = 0x10
    void *_builder;	// 24 = 0x18
    unsigned long long _maxTableSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006508b
@property(nonatomic) unsigned long long maxTableSize; // @synthesize maxTableSize=_maxTableSize;
@property(nonatomic) __weak id <APNSPackEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) void *builder; // @synthesize builder=_builder;
@property(nonatomic) void *encoder; // @synthesize encoder=_encoder;
- (void)reset;	// IMP=0x001000000006501a
- (id)metrics;	// IMP=0x0010000000064fe4
- (id)valueTable;	// IMP=0x0010000000064e69
- (id)keyTable;	// IMP=0x0010000000064cee
- (id)errorMessage;	// IMP=0x0010000000064cb1
- (int)errorCode;	// IMP=0x0010000000064ca3
- (_Bool)hasError;	// IMP=0x0010000000064c95
- (id)copyMessage;	// IMP=0x0010000000064b27
- (void)addBinaryPropertyListWithAttributeId:(unsigned char)arg1 data:(id)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000064aa5
- (void)addBooleanWithAttributeId:(unsigned char)arg1 value:(_Bool)arg2;	// IMP=0x0010000000064a93
- (void)addInt64WithAttributeId:(unsigned char)arg1 number:(unsigned long long)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000064a7d
- (void)addInt32WithAttributeId:(unsigned char)arg1 number:(unsigned int)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000064a68
- (void)addInt16WithAttributeId:(unsigned char)arg1 number:(unsigned short)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000064a50
- (void)addInt8WithAttributeId:(unsigned char)arg1 number:(unsigned char)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000064a38
- (void)addStringWithAttributId:(unsigned char)arg1 string:(id)arg2 isIndexable:(_Bool)arg3;	// IMP=0x001000000006498e
- (void)addDataWithAttributeId:(unsigned char)arg1 data:(id)arg2 isIndexable:(_Bool)arg3;	// IMP=0x00100000000648fb
- (void)setCommand:(unsigned char)arg1;	// IMP=0x00100000000648a5
- (void)dealloc;	// IMP=0x0010000000064836
- (id)initWithMaxTableSize:(unsigned long long)arg1;	// IMP=0x0010000000064530

@end
