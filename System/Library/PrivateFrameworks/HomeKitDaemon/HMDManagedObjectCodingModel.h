//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSMutableDictionary, NSString;

@interface HMDManagedObjectCodingModel : NSObject
{
    NSManagedObjectModel *_model;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    NSMutableDictionary *_descriptions;	// 24 = 0x18
    NSString *_typeIDConfigKey;	// 32 = 0x20
    NSString *_keyAttributesConfigKey;	// 40 = 0x28
    NSString *_includeConfigKey;	// 48 = 0x30
    NSString *_codingKeyConfigKey;	// 56 = 0x38
    NSString *_transformerConfigKey;	// 64 = 0x40
    _Bool _hasAnyReferenceRelationships;	// 72 = 0x48
}

+ (unsigned long long)defaultOptions;	// IMP=0x000000000038329d
- (void).cxx_destruct;	// IMP=0x000000000038214f
- (_Bool)isReferenceRelationship:(id)arg1;	// IMP=0x0000000000382130
- (_Bool)isParentChildRelationship:(id)arg1;	// IMP=0x0000000000382111
- (_Bool)shouldIncludeRelationship:(id)arg1;	// IMP=0x00000000003820f3
- (id)transformerNameForAttribute:(id)arg1;	// IMP=0x0000000000381fac
- (id)subentityOfDescription:(id)arg1 withTypeID:(id)arg2;	// IMP=0x0000000000381ec8
- (id)descriptionForManagedObject:(id)arg1;	// IMP=0x0000000000381e44
- (id)descriptionForRelationship:(id)arg1;	// IMP=0x0000000000381dc0
- (id)descriptionForEntity:(id)arg1;	// IMP=0x0000000000381d5d
@property(readonly) _Bool hasOnlyParentChildRelationships;
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntities:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000380b9b
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntities:(id)arg3;	// IMP=0x0000000000380ab2
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntityNames:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x0000000000380958
- (id)initWithModel:(id)arg1 configNamespace:(id)arg2 rootEntityNames:(id)arg3;	// IMP=0x00000000003808b7
- (id)insertOrUpdateRootObjectForEntity:(id)arg1 inContext:(id)arg2 fromReader:(id)arg3;	// IMP=0x00000000006c47fe
- (_Bool)updateRootObject:(id)arg1 fromReader:(id)arg2;	// IMP=0x00000000006c4546
- (id)decodeRootEntity:(id)arg1 fromReader:(id)arg2;	// IMP=0x00000000006c4311
- (_Bool)encodeRootObject:(id)arg1 forEntity:(id)arg2 withWriter:(id)arg3;	// IMP=0x00000000006c417c
- (_Bool)encodeRootObject:(id)arg1 withWriter:(id)arg2;	// IMP=0x00000000006c4040

@end

