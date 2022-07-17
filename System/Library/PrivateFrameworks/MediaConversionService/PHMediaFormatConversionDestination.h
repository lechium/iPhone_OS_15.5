//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, PFVideoExportRangeCoordinator;

@interface PHMediaFormatConversionDestination
{
    NSURL *_temporaryFilesURLToDelete;	// 40 = 0x28
    NSURL *_temporaryOutputDirectoryURL;	// 48 = 0x30
    NSURL *_temporaryOutputFileURL;	// 56 = 0x38
    PFVideoExportRangeCoordinator *_singlePassVideoExportRangeCoordinator;	// 64 = 0x40
    NSString *_outputPathExtension;	// 72 = 0x48
    unsigned long long _singlePassVideoConversionTargetLength;	// 80 = 0x50
}

+ (id)sharedCleanupQueue;	// IMP=0x0000000000014ff0
+ (id)destinationForConversionReturningUnchangedSource:(id)arg1;	// IMP=0x0000000000014f5c
- (void).cxx_destruct;	// IMP=0x0000000000014ed1
@property unsigned long long singlePassVideoConversionTargetLength; // @synthesize singlePassVideoConversionTargetLength=_singlePassVideoConversionTargetLength;
@property(retain) NSString *outputPathExtension; // @synthesize outputPathExtension=_outputPathExtension;
@property(retain) PFVideoExportRangeCoordinator *singlePassVideoExportRangeCoordinator; // @synthesize singlePassVideoExportRangeCoordinator=_singlePassVideoExportRangeCoordinator;
- (id)errorForSinglePassVideoConversionError:(id)arg1;	// IMP=0x0000000000014d13
- (_Bool)waitForAvailabilityOfRange:(struct _NSRange)arg1 timeout:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000014bed
- (void)addAvailableRange:(struct _NSRange)arg1;	// IMP=0x0000000000014b4e
@property(readonly) _Bool usesSinglePassVideoConversion;
- (void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)arg1;	// IMP=0x0000000000014afe
- (_Bool)padImageToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000149e4
- (_Bool)padVideoToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000014838
- (_Bool)padToLength:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000145e9
- (void)dealloc;	// IMP=0x000000000001458b
- (void)removeTemporaryFilesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000144d2
- (void)removeTemporaryFiles;	// IMP=0x000000000001415a
@property(readonly) NSURL *temporaryOutputFileURL;
@property(readonly) NSURL *temporaryOutputDirectoryURL;
- (_Bool)createTemporaryOutputFileWithErrorError:(id *)arg1;	// IMP=0x0000000000013e15
- (_Bool)createTemporaryOutputDirectoryWithError:(id *)arg1;	// IMP=0x0000000000013bce
- (void)generateTemporaryOutputFileURLForRequest:(id)arg1;	// IMP=0x0000000000013759
- (id)temporaryDirectoryPrefix;	// IMP=0x000000000001374c
- (unsigned long long)length;	// IMP=0x00000000000136f4

@end
