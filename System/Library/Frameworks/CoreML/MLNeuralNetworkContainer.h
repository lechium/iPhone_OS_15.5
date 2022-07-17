//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, MLNeuralNetworksCompileTimeParams, MLVersionInfo, NSArray, NSDictionary, NSString;

@interface MLNeuralNetworkContainer : NSObject
{
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> widths;	// 8 = 0x8
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> heights;	// 32 = 0x20
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> ks;	// 56 = 0x38
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> batches;	// 80 = 0x50
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> sequences;	// 104 = 0x68
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> ranks;	// 128 = 0x80
    _Bool _hasBidirectionalLayer;	// 152 = 0x98
    _Bool _hasOptionalInputSequenceConcat;	// 153 = 0x99
    _Bool _hasDynamicLayer;	// 154 = 0x9a
    _Bool _ndArrayInterpretation;	// 155 = 0x9b
    _Bool _modelIsEncrypted;	// 156 = 0x9c
    _Bool _modelIsMIL;	// 157 = 0x9d
    int _precision;	// 160 = 0xa0
    int _engine;	// 164 = 0xa4
    NSString *_modelFilePath;	// 168 = 0xa8
    NSArray *_inputLayerNames;	// 176 = 0xb0
    NSArray *_outputLayerNames;	// 184 = 0xb8
    NSString *_name;	// 192 = 0xc0
    NSDictionary *_inputDescription;	// 200 = 0xc8
    NSDictionary *_outputDescription;	// 208 = 0xd0
    NSDictionary *_imageParameters;	// 216 = 0xd8
    NSDictionary *_imagePreprocessingParams;	// 224 = 0xe0
    NSArray *_configurationList;	// 232 = 0xe8
    NSArray *_classLabels;	// 240 = 0xf0
    NSString *_classScoreVectorName;	// 248 = 0xf8
    MLModel *_transformDesc;	// 256 = 0x100
    MLNeuralNetworksCompileTimeParams *_updatableModelCompiledParams;	// 264 = 0x108
    NSDictionary *_optionalInputDefaultValues;	// 272 = 0x110
    MLVersionInfo *_modelVersionInfo;	// 280 = 0x118
    MLVersionInfo *_compilerVersionInfo;	// 288 = 0x120
    map_14517e23 _optionalInputTypes;	// 296 = 0x128
}

+ (id)containerFromCompiledArchive:(void *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000044534
+ (id)containerFromCompiledArchiveCommon:(void *)arg1 filename:(id)arg2 modelVersionInfo:(id)arg3 compilerVersionInfo:(id)arg4 configuration:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000043e08
+ (_Bool)readIsClassifier:(void *)arg1;	// IMP=0x0000000000043ddc
+ (id)containerFromFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;	// IMP=0x0000000000043d00
- (id).cxx_construct;	// IMP=0x0000000000043652
- (void).cxx_destruct;	// IMP=0x00000000000434f9
@property(retain, nonatomic) MLVersionInfo *compilerVersionInfo; // @synthesize compilerVersionInfo=_compilerVersionInfo;
@property(nonatomic) map_14517e23 optionalInputTypes; // @synthesize optionalInputTypes=_optionalInputTypes;
@property(nonatomic) int engine; // @synthesize engine=_engine;
@property(nonatomic) int precision; // @synthesize precision=_precision;
@property(nonatomic) _Bool modelIsMIL; // @synthesize modelIsMIL=_modelIsMIL;
@property(retain, nonatomic) MLVersionInfo *modelVersionInfo; // @synthesize modelVersionInfo=_modelVersionInfo;
@property(nonatomic) _Bool modelIsEncrypted; // @synthesize modelIsEncrypted=_modelIsEncrypted;
@property(retain, nonatomic) NSDictionary *optionalInputDefaultValues; // @synthesize optionalInputDefaultValues=_optionalInputDefaultValues;
@property(retain, nonatomic) MLNeuralNetworksCompileTimeParams *updatableModelCompiledParams; // @synthesize updatableModelCompiledParams=_updatableModelCompiledParams;
@property _Bool ndArrayInterpretation; // @synthesize ndArrayInterpretation=_ndArrayInterpretation;
@property(retain) MLModel *transformDesc; // @synthesize transformDesc=_transformDesc;
@property(retain) NSString *classScoreVectorName; // @synthesize classScoreVectorName=_classScoreVectorName;
@property(retain) NSArray *classLabels; // @synthesize classLabels=_classLabels;
@property(nonatomic) _Bool hasDynamicLayer; // @synthesize hasDynamicLayer=_hasDynamicLayer;
@property(nonatomic) _Bool hasOptionalInputSequenceConcat; // @synthesize hasOptionalInputSequenceConcat=_hasOptionalInputSequenceConcat;
@property(nonatomic) _Bool hasBidirectionalLayer; // @synthesize hasBidirectionalLayer=_hasBidirectionalLayer;
@property(retain, nonatomic) NSArray *configurationList; // @synthesize configurationList=_configurationList;
@property(retain, nonatomic) NSDictionary *imagePreprocessingParams; // @synthesize imagePreprocessingParams=_imagePreprocessingParams;
@property(retain, nonatomic) NSDictionary *imageParameters; // @synthesize imageParameters=_imageParameters;
@property(retain, nonatomic) NSDictionary *outputDescription; // @synthesize outputDescription=_outputDescription;
@property(retain, nonatomic) NSDictionary *inputDescription; // @synthesize inputDescription=_inputDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *outputLayerNames; // @synthesize outputLayerNames=_outputLayerNames;
@property(readonly, retain, nonatomic) NSArray *inputLayerNames; // @synthesize inputLayerNames=_inputLayerNames;
@property(retain, nonatomic) NSString *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
- (id)initWithFeatureDescriptions:(id)arg1 transformDesc:(id)arg2 outputLayerNames:(id)arg3 classScoreVectorName:(id)arg4 classLabels:(id)arg5 isEncrypted:(_Bool)arg6 modelVersionInfo:(id)arg7 compilerVersionInfo:(id)arg8;	// IMP=0x0000000000042d00
- (id)initWithFeatureDescriptions:(id)arg1 transformDesc:(id)arg2 outputLayerNames:(id)arg3 classScoreVectorName:(id)arg4 classLabels:(id)arg5 isEncrypted:(_Bool)arg6 modelVersionInfo:(id)arg7;	// IMP=0x0000000000042cda
- (id)initWithFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;	// IMP=0x0000000000042bb2

@end
