//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface NUCGImageSourceNode
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _loaded;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
    NSString *_UTI;	// 32 = 0x20
    struct CGImageSource *_cgImageSource;	// 40 = 0x28
    NSDictionary *_cgImageProperties;	// 48 = 0x30
    long long _orientation;	// 56 = 0x38
    struct CGColorSpace *_colorSpace;	// 64 = 0x40
    long long _alphaInfo;	// 72 = 0x48
    long long _componentInfo;	// 80 = 0x50
    NSDictionary *_auxiliaryImagesProperties;	// 88 = 0x58
    CDStruct_d58201db _size;	// 96 = 0x60
}

+ (_Bool)isFusedOvercaptureFromCGImageProperties:(id)arg1;	// IMP=0x000000000003e137
- (void).cxx_destruct;	// IMP=0x000000000003d01b
@property(retain) NSDictionary *auxiliaryImagesProperties; // @synthesize auxiliaryImagesProperties=_auxiliaryImagesProperties;
@property long long componentInfo; // @synthesize componentInfo=_componentInfo;
@property long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(retain, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property long long orientation; // @synthesize orientation=_orientation;
@property CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(retain, nonatomic) NSDictionary *cgImageProperties; // @synthesize cgImageProperties=_cgImageProperties;
@property(retain, nonatomic) struct CGImageSource *cgImageSource; // @synthesize cgImageSource=_cgImageSource;
@property _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly) NSString *UTI; // @synthesize UTI=_UTI;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003cc51
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003cbcd
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;	// IMP=0x000000000003c344
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003bec4
- (id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2;	// IMP=0x000000000003bdec
- (void)_addDefaultFinalizedSourceOptions:(id)arg1;	// IMP=0x000000000003bccc
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;	// IMP=0x000000000003b5f4
- (id)debugQuickLookObject;	// IMP=0x000000000003b56a
- (_Bool)load:(out id *)arg1;	// IMP=0x000000000003b4a4
- (_Bool)_load:(out id *)arg1;	// IMP=0x000000000003ab60
- (_Bool)_setAuxiliaryImagePropertiesFromCGProperties:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003a80d
- (_Bool)_setGeometryFromProperties:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000003a251
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;	// IMP=0x0000000000039e61
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;	// IMP=0x00000000000399a7
- (_Bool)canPropagateOriginalAuxiliaryData;	// IMP=0x0000000000039974
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000039838
- (id)resolvedAuxiliaryImageNodeForPipelineState:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000039370
- (id)auxiliaryImagePropertiesForAuxImageType:(long long)arg1;	// IMP=0x00000000000392e8
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000038ac7
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;	// IMP=0x0000000000038a98
- (long long)normalizeSubsampleFactor:(long long)arg1;	// IMP=0x000000000003898e
- (long long)sourceOrientation;	// IMP=0x0000000000038631
- (void)dealloc;	// IMP=0x00000000000385db
- (id)initWithSettings:(id)arg1;	// IMP=0x000000000003825f
- (id)initWithURL:(id)arg1 UTI:(id)arg2 settings:(id)arg3;	// IMP=0x00000000000380cc
- (id)initWithURL:(id)arg1 UTI:(id)arg2 identifier:(id)arg3;	// IMP=0x00000000000379d2
- (id)initWithImageSource:(struct CGImageSource *)arg1 identifier:(id)arg2;	// IMP=0x00000000000378d6
- (void)_init;	// IMP=0x0000000000037881

@end
