//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable;
@protocol MTLJSONSerializing;

@interface MTLJSONAdapter : NSObject
{
    Class _modelClass;	// 8 = 0x8
    NSDictionary *_JSONKeyPathsByPropertyKey;	// 16 = 0x10
    NSDictionary *_valueTransformersByPropertyKey;	// 24 = 0x18
    NSMapTable *_JSONAdaptersByModelClass;	// 32 = 0x20
}

+ (id)transformerForModelPropertiesOfObjCType:(const char *)arg1;	// IMP=0x0000000000309087
+ (id)transformerForModelPropertiesOfClass:(Class)arg1;	// IMP=0x0000000000308f88
+ (id)valueTransformersForModelClass:(Class)arg1;	// IMP=0x00000000003089c4
+ (id)JSONArrayFromModels:(id)arg1 error:(id *)arg2;	// IMP=0x000000000030869d
+ (id)JSONDictionaryFromModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000308609
+ (id)modelsOfClass:(Class)arg1 fromJSONArray:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003081cd
+ (id)modelOfClass:(Class)arg1 fromJSONDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000308141
+ (id)NSUUIDJSONTransformer;	// IMP=0x00000000003094ae
+ (id)NSURLJSONTransformer;	// IMP=0x0000000000309495
+ (id)arrayTransformerWithModelClass:(Class)arg1;	// IMP=0x000000000030939e
+ (id)dictionaryTransformerWithModelClass:(Class)arg1;	// IMP=0x0000000000309163
+ (id)JSONDictionaryFromModel:(id)arg1;	// IMP=0x000000000030a7d2
+ (id)JSONArrayFromModels:(id)arg1;	// IMP=0x000000000030a7be
- (void).cxx_destruct;	// IMP=0x00000000003079ab
@property(readonly, nonatomic) NSMapTable *JSONAdaptersByModelClass; // @synthesize JSONAdaptersByModelClass=_JSONAdaptersByModelClass;
@property(readonly, copy, nonatomic) NSDictionary *valueTransformersByPropertyKey; // @synthesize valueTransformersByPropertyKey=_valueTransformersByPropertyKey;
@property(readonly, copy, nonatomic) NSDictionary *JSONKeyPathsByPropertyKey; // @synthesize JSONKeyPathsByPropertyKey=_JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
- (id)serializablePropertyKeys:(id)arg1 forModel:(id)arg2;	// IMP=0x000000000030796d
- (id)JSONAdapterForModelClass:(Class)arg1 error:(id *)arg2;	// IMP=0x0000000000307748
- (id)modelFromJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000306aff
- (id)JSONDictionaryFromModel:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000306699
- (id)initWithModelClass:(Class)arg1;	// IMP=0x0000000000305fe2
- (id)init;	// IMP=0x0000000000305f54

// Remaining properties
@property(readonly, nonatomic) id <MTLJSONSerializing> model;

@end
