//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLModel, NSString;

@interface MLLinkedModel <MLModelSpecificationLoader>
{
    MLModel *_linkedModel;	// 8 = 0x8
    NSString *_modelFileName;	// 16 = 0x10
    NSString *_modelSearchPath;	// 24 = 0x18
}

+ (id)loadModelFromSpecification:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f7f3d
+ (_Bool)areFeaturesIn:(id)arg1 modelNamed:(id)arg2 aSubsetOf:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f7c10
+ (id)findFile:(id)arg1 inSearchPath:(id)arg2 basePath:(id)arg3;	// IMP=0x00000000000f755a
- (void).cxx_destruct;	// IMP=0x00000000000f7518
@property(retain) NSString *modelSearchPath; // @synthesize modelSearchPath=_modelSearchPath;
@property(retain) NSString *modelFileName; // @synthesize modelFileName=_modelFileName;
@property(retain) MLModel *linkedModel; // @synthesize linkedModel=_linkedModel;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f732f
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f7267
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f7147
- (id)initWithLinkedModel:(id)arg1 modelFileName:(id)arg2 modelSearchPath:(id)arg3 configuration:(id)arg4;	// IMP=0x00000000000f6fbe
- (void)updateParameterDescriptionsByUnarchivingSpecification:(const void *)arg1;	// IMP=0x00000000000f6dbd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

