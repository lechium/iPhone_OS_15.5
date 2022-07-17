//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MRProtobufSerialization : NSObject
{
    NSDictionary *_protobufKeyToDictionaryKeyMapping;	// 8 = 0x8
    NSDictionary *_dictionaryKeyToProtobufKeyMapping;	// 16 = 0x10
    Class _protobufClass;	// 24 = 0x18
    CDUnknownBlockType _dictionaryValueToProtobufValueTransformer;	// 32 = 0x20
    CDUnknownBlockType _protobufValueToDictionaryValueTransformer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000930de
@property(copy, nonatomic) CDUnknownBlockType protobufValueToDictionaryValueTransformer; // @synthesize protobufValueToDictionaryValueTransformer=_protobufValueToDictionaryValueTransformer;
@property(copy, nonatomic) CDUnknownBlockType dictionaryValueToProtobufValueTransformer; // @synthesize dictionaryValueToProtobufValueTransformer=_dictionaryValueToProtobufValueTransformer;
@property(retain, nonatomic) Class protobufClass; // @synthesize protobufClass=_protobufClass;
@property(copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping; // @synthesize dictionaryKeyToProtobufKeyMapping=_dictionaryKeyToProtobufKeyMapping;
- (id)createProtobufFromDictionary:(id)arg1;	// IMP=0x0000000000092edd
- (id)createDictionaryFromProtobuf:(id)arg1;	// IMP=0x0000000000092d0d

@end
