//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol CREngine;

@interface CRImageReader : NSObject
{
    NSArray *_outputObjectTypes;	// 8 = 0x8
    _Bool _shouldCancel;	// 16 = 0x10
    NSDictionary *_userOptions;	// 24 = 0x18
    NSObject<CREngine> *_engine;	// 32 = 0x20
}

+ (unsigned long long)_typeForFeature:(id)arg1 enginePreferredRegionType:(unsigned long long)arg2;	// IMP=0x0000000000023047
+ (id)_engineFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022fbc
+ (Class)_engineClassFromOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000022e53
+ (id)descriptionForErrorCode:(long long)arg1;	// IMP=0x0000000000021db3
+ (id)defaultOptions;	// IMP=0x00000000000219e9
+ (id)prioritizationForOptions:(id)arg1;	// IMP=0x00000000000218a0
+ (struct CGSize)detectorImageSizeForOptions:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x0000000000021796
+ (_Bool)preheatModelsForOptions:(id)arg1 revision:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000021692
+ (id)errorWithErrorCode:(long long)arg1;	// IMP=0x000000000002158a
+ (_Bool)languageIsChinese:(id)arg1;	// IMP=0x0000000000020410
+ (id)languageSetFromOptionsDictionary:(id)arg1;	// IMP=0x000000000001fe87
+ (unsigned long long)defaultRevisionNumber;	// IMP=0x000000000001fe7c
+ (id)supportedLanguagesForOptions:(id)arg1 revision:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000001fdb3
- (void).cxx_destruct;	// IMP=0x0000000000023986
@property(retain, nonatomic) NSObject<CREngine> *engine; // @synthesize engine=_engine;
@property _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
- (id)_regionsFromTextFeatures:(id)arg1 imageSize:(struct CGSize)arg2 titleFeature:(id)arg3 title:(id *)arg4;	// IMP=0x0000000000023540
- (id)_lineRegionsFromTextFeatures:(id)arg1 imageSize:(struct CGSize)arg2 titleFeature:(id)arg3 title:(id *)arg4;	// IMP=0x00000000000232b3
- (id)_lineRegionFromTextFeature:(id)arg1 imageSize:(struct CGSize)arg2 titleFeature:(id)arg3 title:(id *)arg4;	// IMP=0x00000000000230f0
- (id)documentOutputRegionForImage:(id)arg1 roi:(struct CGRect)arg2 error:(id *)arg3 withProgressHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000230a8
- (id)orientationCorrectionStats;	// IMP=0x0000000000022d9e
- (id)textGroupingStats;	// IMP=0x0000000000022ce9
- (id)detectorInferenceStats;	// IMP=0x0000000000022c34
- (id)recognizerDecodingStats;	// IMP=0x0000000000022b7f
- (id)recognizerInferenceStats;	// IMP=0x0000000000022aca
- (id)recognizerStats;	// IMP=0x0000000000022a15
- (id)postProcStats;	// IMP=0x0000000000022960
- (id)detectorStats;	// IMP=0x00000000000228ab
- (void)cancel;	// IMP=0x0000000000022839
- (id)textResultsForImage:(id)arg1 roi:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4 withProgressHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000021e2c
- (id)recognizeDetectedBlocks:(id)arg1 inImage:(id)arg2 error:(id *)arg3 withProgressHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020af8
- (id)textDetectorResultsForImage:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000209fe
- (id)textRecognizerResultsForTextFeatures:(id)arg1 forImageAtURL:(id)arg2 options:(id)arg3;	// IMP=0x00000000000208a3
- (id)documentOutputRegionForTextFeatures:(id)arg1 image:(id)arg2;	// IMP=0x00000000000206db
- (id)textRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3;	// IMP=0x0000000000020616
- (id)textResultsForImage:(id)arg1 options:(id)arg2 withProgressHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000205c3
- (id)textResultsForImage:(id)arg1 options:(id)arg2;	// IMP=0x000000000002059e
- (id)textResultsForImageAtURL:(id)arg1 options:(id)arg2;	// IMP=0x00000000000204d0
- (id)confidenceThresholdProvider;	// IMP=0x00000000000204be
- (_Bool)purgeCaches:(id)arg1;	// IMP=0x00000000000204b6
- (struct CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(struct CGSize)arg2;	// IMP=0x000000000001fd27
- (id)documentOutputRegionForImage:(id)arg1 options:(id)arg2 roi:(struct CGRect)arg3 error:(id *)arg4 withProgressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f7b4
- (id)resultsForCRImage:(id)arg1 roi:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4 withProgressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001f02d
- (id)resultsForPixelBuffer:(struct __CVBuffer *)arg1 roi:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4 withProgressHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001ef39
- (id)resultsForPixelBuffer:(struct __CVBuffer *)arg1 roi:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001eefb
- (id)resultsForPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001eeae
@property(copy) NSArray *outputObjectTypes;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e8a1
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000001e88c

@end

