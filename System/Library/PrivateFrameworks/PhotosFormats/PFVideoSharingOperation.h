//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AVAsset, AVAssetExportSession, AVAudioMix, AVVideoComposition, CLLocation, NSArray, NSDate, NSError, NSObject, NSString, NSURL, PFAssetAdjustments;
@protocol OS_dispatch_queue;

@interface PFVideoSharingOperation : NSOperation
{
    AVAsset *_videoAsset;	// 8 = 0x8
    AVAudioMix *_audioMix;	// 16 = 0x10
    AVVideoComposition *_videoComposition;	// 24 = 0x18
    NSArray *_videoMetadata;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_externalIsolation;	// 40 = 0x28
    AVAssetExportSession *_exportSession;	// 48 = 0x30
    _Bool _beganExport;	// 56 = 0x38
    _Bool _operationSuccess;	// 57 = 0x39
    NSError *_operationError;	// 64 = 0x40
    _Bool _shouldStripMetadata;	// 72 = 0x48
    _Bool _shouldStripLocation;	// 73 = 0x49
    _Bool _shouldStripCaption;	// 74 = 0x4a
    _Bool _shouldStripAccessibilityDescription;	// 75 = 0x4b
    NSURL *_outputDirectoryURL;	// 80 = 0x50
    NSString *_outputFilename;	// 88 = 0x58
    CLLocation *_customLocation;	// 96 = 0x60
    NSDate *_customDate;	// 104 = 0x68
    NSString *_customCaption;	// 112 = 0x70
    NSString *_customAccessibilityLabel;	// 120 = 0x78
    NSString *_exportPreset;	// 128 = 0x80
    NSString *_exportFileType;	// 136 = 0x88
    NSURL *_videoURL;	// 144 = 0x90
    NSURL *_resultingFileURL;	// 152 = 0x98
    PFAssetAdjustments *__adjustments;	// 160 = 0xa0
}

+ (id)operationErrorWithCode:(long long)arg1 underlyingError:(id)arg2 withDescription:(id)arg3;	// IMP=0x0000000000094eb8
- (void).cxx_destruct;	// IMP=0x0000000000094004
@property(retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments; // @synthesize _adjustments=__adjustments;
@property(readonly, copy, nonatomic) NSURL *resultingFileURL; // @synthesize resultingFileURL=_resultingFileURL;
@property(copy, nonatomic, setter=_setVideoURL:) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSString *exportFileType; // @synthesize exportFileType=_exportFileType;
@property(copy, nonatomic) NSString *exportPreset; // @synthesize exportPreset=_exportPreset;
@property(copy, nonatomic) NSString *customAccessibilityLabel; // @synthesize customAccessibilityLabel=_customAccessibilityLabel;
@property(nonatomic) _Bool shouldStripAccessibilityDescription; // @synthesize shouldStripAccessibilityDescription=_shouldStripAccessibilityDescription;
@property(copy, nonatomic) NSString *customCaption; // @synthesize customCaption=_customCaption;
@property(nonatomic) _Bool shouldStripCaption; // @synthesize shouldStripCaption=_shouldStripCaption;
@property(copy, nonatomic) NSDate *customDate; // @synthesize customDate=_customDate;
@property(copy, nonatomic) CLLocation *customLocation; // @synthesize customLocation=_customLocation;
@property(nonatomic) _Bool shouldStripLocation; // @synthesize shouldStripLocation=_shouldStripLocation;
@property(nonatomic) _Bool shouldStripMetadata; // @synthesize shouldStripMetadata=_shouldStripMetadata;
@property(copy, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(copy, nonatomic) NSURL *outputDirectoryURL; // @synthesize outputDirectoryURL=_outputDirectoryURL;
@property(retain, nonatomic, setter=_setOperationError:) NSError *operationError;
@property(nonatomic, setter=_setSuccess:) _Bool success;
- (void)cancel;	// IMP=0x00000000000936c3
@property(readonly, nonatomic) float progress;
- (_Bool)_runExport;	// IMP=0x0000000000092844
- (void)_validateMetadata;	// IMP=0x0000000000091f9b
- (_Bool)_ensureVideoProperties;	// IMP=0x0000000000091cf6
- (void)main;	// IMP=0x0000000000091c9f
- (id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2;	// IMP=0x0000000000091bb6

@end

