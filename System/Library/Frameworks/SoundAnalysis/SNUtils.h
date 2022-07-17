//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNUtils : NSObject
{
}

+ (id)loadModelAtURL:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;	// IMP=0x0000000000052564
+ (id)createMultiArrayContainingPreciseTimeRangeOfAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 prefixBufferPopulator:(CDUnknownBlockType)arg5 suffixBufferPopulator:(CDUnknownBlockType)arg6 numDimensions:(unsigned long long)arg7 error:(id *)arg8;	// IMP=0x00000000000520f7
+ (_Bool)flushBytesFromPreciseTimeRangeInAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 prefixBufferPopulator:(CDUnknownBlockType)arg5 suffixBufferPopulator:(CDUnknownBlockType)arg6 intoSink:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x0000000000051d88
+ (_Bool)flushBytesFromStreamSource:(CDUnknownBlockType)arg1 toBuffer:(void *)arg2 ofSizeInBytes:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000051c4f
+ (_Bool)flushAudioBuffer:(id)arg1 channelIndex:(unsigned long long)arg2 intoSink:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000051b5b
+ (CDUnknownBlockType)zeroBufferPopulator;	// IMP=0x0000000000051af9
+ (_Bool)readApproximateTimeRangeFromAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 preferShrinkingWhenRounding:(_Bool)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(_Bool)arg5 prefixBufferPopulator:(CDUnknownBlockType)arg6 suffixBufferPopulator:(CDUnknownBlockType)arg7 handler:(CDUnknownBlockType)arg8 error:(id *)arg9;	// IMP=0x0000000000051913
+ (_Bool)readPreciseTimeRangeFromAudioFile:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 prefixBufferPopulator:(CDUnknownBlockType)arg5 suffixBufferPopulator:(CDUnknownBlockType)arg6 handler:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x0000000000050fd5
+ (CDStruct_1b6d18a9)readApproximateTimeDurationFromAudioFile:(id)arg1 timeDuration:(CDStruct_1b6d18a9)arg2 roundingMethod:(unsigned int)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(_Bool)arg5 handler:(CDUnknownBlockType)arg6 error:(id *)arg7;	// IMP=0x0000000000050e7e
+ (CDStruct_1b6d18a9)readPreciseTimeDurationFromAudioFile:(id)arg1 timeDuration:(CDStruct_1b6d18a9)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000050d32
+ (unsigned int)readFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 atSampleRate:(double)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(_Bool)arg5 handler:(CDUnknownBlockType)arg6 error:(id *)arg7;	// IMP=0x0000000000050a9e
+ (unsigned int)readFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(_Bool)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0000000000050566
+ (void)processFrameCount:(unsigned int)arg1 bufferFactory:(CDUnknownBlockType)arg2 populator:(CDUnknownBlockType)arg3 handler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005036f
+ (id)toFloatScalarConvertFromMLMultiArray:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000502b9
+ (id)toMLMultiArrayConvertFromFloatScalar:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000501d2
+ (CDStruct_e83c9415)getTimeRangeEncompassingEntireAudioFileAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050116
+ (CDStruct_e83c9415)getTimeRangeEncompassingEntireAudioFile:(id)arg1;	// IMP=0x000000000004fffb
+ (CDStruct_e83c9415)addOffset:(CDStruct_1b6d18a9)arg1 toTimeRange:(CDStruct_e83c9415)arg2;	// IMP=0x000000000004ff87
+ (CDStruct_e83c9415)clipTimeRange:(CDStruct_e83c9415)arg1 toBounds:(CDStruct_e83c9415)arg2;	// IMP=0x000000000004fdc1
+ (void)clipTimeRange:(CDStruct_e83c9415)arg1 toBounds:(CDStruct_e83c9415)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004f99f
+ (CDStruct_e83c9415)standardizeTimeRange:(CDStruct_e83c9415)arg1 directionShouldBePositive:(_Bool)arg2 negativeShouldResideInTimescale:(_Bool)arg3;	// IMP=0x000000000004f8f4
+ (CDStruct_e83c9415)standardizeTimeRange:(CDStruct_e83c9415)arg1 negativeShouldResideInTimescale:(_Bool)arg2;	// IMP=0x000000000004f84c
+ (CDStruct_1b6d18a9)standardizeTime:(CDStruct_1b6d18a9)arg1 negativeShouldResideInTimescale:(_Bool)arg2;	// IMP=0x000000000004f7fa
+ (CDStruct_e83c9415)standardizeTimeRange:(CDStruct_e83c9415)arg1 directionShouldBePositive:(_Bool)arg2;	// IMP=0x000000000004f730
+ (CDStruct_e83c9415)convertScaleForTimeRange:(CDStruct_e83c9415)arg1 toValue:(int)arg2 preferShrinkingWhenRounding:(_Bool)arg3;	// IMP=0x000000000004f6bf
+ (CDStruct_e83c9415)convertScaleForTimeRange:(CDStruct_e83c9415)arg1 toValue:(int)arg2 startRoundingMethod:(unsigned int)arg3 durationRoundingMethod:(unsigned int)arg4;	// IMP=0x000000000004f607
+ (_Bool)checkTimeRange:(CDStruct_e83c9415)arg1 isIdenticalToOther:(CDStruct_e83c9415)arg2;	// IMP=0x000000000004f5ce
+ (CDStruct_e83c9415)makeInvalidTimeRange;	// IMP=0x000000000004f572
+ (long long)detectionCountInResults:(id)arg1;	// IMP=0x000000000004f3fc
+ (id)valueForEntitlement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f32d
+ (id)valueForEntitlement:(id)arg1 fromTask:(struct __SecTask *)arg2 error:(id *)arg3;	// IMP=0x000000000004f265
+ (long long)audioFileFrameCount:(id)arg1;	// IMP=0x000000000004f0df
+ (id)diskSpaceRemainingBytesContainingDirectory:(id)arg1;	// IMP=0x000000000004f002
+ (id)fileSizeBytes:(id)arg1;	// IMP=0x000000000004ef25
+ (id)fileCreationDate:(id)arg1;	// IMP=0x000000000004ee48
+ (void)_deleteWAVAndTextFilesInDirectory:(id)arg1 createdBeforeDate:(id)arg2 withRemainingDirectoryByteSizeLessThan:(long long)arg3;	// IMP=0x000000000004e109
+ (void)deleteWAVAndTextFilesInDirectory:(id)arg1 createdBeforeDate:(id)arg2 withRemainingDirectoryByteSizeLessThan:(long long)arg3;	// IMP=0x000000000004e070
+ (id)loggingPrefixForRequest:(id)arg1;	// IMP=0x000000000004df56
+ (_Bool)isInternalBuild;	// IMP=0x000000000004ded7
+ (_Bool)isRunningInDaemon;	// IMP=0x000000000004de38
+ (_Bool)isFormatPCM:(id)arg1;	// IMP=0x000000000004de18
+ (id)parseFeedbackConnectionsString:(id)arg1;	// IMP=0x000000000004d946
+ (id)subtractSet:(id)arg1 from:(id)arg2;	// IMP=0x000000000004d859
+ (id)userSuppliedFeatureNames:(id)arg1 direction:(long long)arg2;	// IMP=0x000000000004d4cd
+ (id)userSuppliedOutputFeatureNames:(id)arg1;	// IMP=0x000000000004d4a6
+ (id)userSuppliedInputFeatureNames:(id)arg1;	// IMP=0x000000000004d482
+ (id)feedbackConnections:(id)arg1;	// IMP=0x000000000004cd5d
+ (id)anyOutputMultiArrayShape:(id)arg1;	// IMP=0x000000000004cc4e
+ (id)anyInputMultiArrayShape:(id)arg1;	// IMP=0x000000000004cb3f
+ (struct _NSRange)lastDimensionSizeRange:(id)arg1;	// IMP=0x000000000004c9dd
+ (_Bool)multiArrayConstraintLastDimensionIsFlexible:(id)arg1;	// IMP=0x000000000004c8a5
+ (int)shapeNonUnitaryDimensionCount:(id)arg1;	// IMP=0x000000000004c72c
+ (unsigned int)modelChannelCount:(id)arg1;	// IMP=0x000000000004c5f8
+ (unsigned int)modelBlockSize:(id)arg1 channelCount:(unsigned int)arg2;	// IMP=0x000000000004c44e
+ (unsigned int)modelBlockSize:(id)arg1;	// IMP=0x000000000004c3f2
+ (unsigned int)modelSampleRate:(id)arg1 orDefaultRate:(unsigned int)arg2;	// IMP=0x000000000004c24d
+ (id)vggishFrontEndProcessingModelDescription;	// IMP=0x000000000004bea7
+ (id)vggishFeatureEmbeddingOutputShape;	// IMP=0x000000000004be9a
+ (id)vggishFeatureEmbeddingInputShape;	// IMP=0x000000000004be8d
+ (id)vggishFrontEndProcessingOutputShape;	// IMP=0x000000000004be80
+ (id)vggishFrontEndProcessingInputShape;	// IMP=0x000000000004be73
+ (CDStruct_1b6d18a9)roundTime:(CDStruct_1b6d18a9)arg1 toAllowableTime:(id)arg2;	// IMP=0x000000000004ba45
+ (id)windowDurationConstraintFromMultiArrayShapeConstraint:(id)arg1 sampleRate:(unsigned int)arg2;	// IMP=0x000000000004b454
+ (id)filteredClassLabelsFromModelDescription:(id)arg1;	// IMP=0x000000000004b376
+ (id)filterClassLabelsInDictionary:(id)arg1 usingDenylist:(id)arg2;	// IMP=0x000000000004b2fa
+ (id)denylistFromModelDescription:(id)arg1;	// IMP=0x000000000004b20b
+ (int)numberOfElements:(id)arg1;	// IMP=0x000000000004b067
+ (void)copyAudioBufferList:(struct AudioBufferList *)arg1 to:(struct AudioBufferList *)arg2 frameCount:(unsigned int)arg3 bytesPerFrame:(unsigned int)arg4;	// IMP=0x000000000004afd6
+ (void)silenceUnfilledFramesInBuffer:(id)arg1;	// IMP=0x000000000004ae21
+ (id)splitBuffer:(id)arg1 intoBuffersWithFrameCount:(unsigned int)arg2;	// IMP=0x000000000004ab46

@end
