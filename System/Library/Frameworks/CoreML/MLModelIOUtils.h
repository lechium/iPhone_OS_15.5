//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLModelIOUtils : NSObject
{
}

+ (id)specificationURLFromModelAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000013d633
+ (id)orderedFeatureNamesFromInterface:(void *)arg1 forInput:(_Bool)arg2;	// IMP=0x000000000013d600
+ (id)trainingInputDescriptionFromInterface:(void *)arg1;	// IMP=0x000000000013d5e7
+ (id)outputDescriptionFromInterface:(void *)arg1;	// IMP=0x000000000013d5ce
+ (id)inputDescriptionFromInterface:(void *)arg1;	// IMP=0x000000000013d5b5
+ (id)deserializeMetadataAndInterfaceFromArchive:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000013d496
+ (_Bool)serializeMetadataAndInterfaceFromSpecification:(void *)arg1 archive:(void *)arg2 error:(id *)arg3;	// IMP=0x000000000013d3d1
+ (id)deserializeVersionInfoFromArchive:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000013d2b9
+ (_Bool)serializeVersionInfo:(id)arg1 archive:(void *)arg2 error:(id *)arg3;	// IMP=0x000000000013d162
+ (id)orderedNamesFromProto:(const void *)arg1;	// IMP=0x000000000013d07c
+ (id)descriptionFromProto:(const void *)arg1;	// IMP=0x000000000013ce84
+ (id)populateConstraintsForFeatureDescription:(const void *)arg1;	// IMP=0x000000000013c3c3
+ (id)populateConstraintsForImageFeatureDescriptionElement:(void *)arg1;	// IMP=0x000000000013c3ae
+ (id)populateConstraintsForImageFeatureDescription:(const void *)arg1;	// IMP=0x000000000013bb0b
+ (struct _NSRange)rangeFromAllowedSizeRangeProtoMessage:(const void *)arg1;	// IMP=0x000000000013bad3
+ (_Bool)deserializeInterfaceFormat:(void *)arg1 archive:(void *)arg2 error:(id *)arg3;	// IMP=0x000000000013b631
+ (_Bool)serializeInterfaceFormat:(void *)arg1 archive:(void *)arg2 error:(id *)arg3;	// IMP=0x000000000013b2d9
+ (id)serializeSpecification:(void *)arg1 toArchive:(void *)arg2 error:(id *)arg3;	// IMP=0x000000000013afc4
+ (id)versionForSerializedSpecification:(void *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000013af8a
+ (id)loadFromModelSpecificationInArchive:(void *)arg1 withClass:(Class)arg2 versionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;	// IMP=0x000000000013ac28

@end

