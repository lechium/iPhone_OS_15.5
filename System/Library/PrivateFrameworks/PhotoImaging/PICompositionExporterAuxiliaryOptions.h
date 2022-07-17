//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, NUAdjustment, NUImageExportFormat;

@interface PICompositionExporterAuxiliaryOptions
{
    _Bool _renderCompanionResources;	// 40 = 0x28
    _Bool _applyImageOrientationAsMetadata;	// 41 = 0x29
    _Bool _applyVideoOrientationAsMetadata;	// 42 = 0x2a
    NSURL *_primaryURL;	// 48 = 0x30
    NSURL *_videoComplementURL;	// 56 = 0x38
    NSURL *_videoPosterFrameURL;	// 64 = 0x40
    NSString *_videoCodecType;	// 72 = 0x48
    NUImageExportFormat *_imageExportFormat;	// 80 = 0x50
    NUAdjustment *_reframeCropAdjustment;	// 88 = 0x58
    NUAdjustment *_reframeVideoAdjustment;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000039a23
@property _Bool applyVideoOrientationAsMetadata; // @synthesize applyVideoOrientationAsMetadata=_applyVideoOrientationAsMetadata;
@property _Bool applyImageOrientationAsMetadata; // @synthesize applyImageOrientationAsMetadata=_applyImageOrientationAsMetadata;
@property(retain) NUAdjustment *reframeVideoAdjustment; // @synthesize reframeVideoAdjustment=_reframeVideoAdjustment;
@property(retain) NUAdjustment *reframeCropAdjustment; // @synthesize reframeCropAdjustment=_reframeCropAdjustment;
@property _Bool renderCompanionResources; // @synthesize renderCompanionResources=_renderCompanionResources;
@property(copy) NUImageExportFormat *imageExportFormat; // @synthesize imageExportFormat=_imageExportFormat;
@property(copy, nonatomic) NSString *videoCodecType; // @synthesize videoCodecType=_videoCodecType;
@property(retain) NSURL *videoPosterFrameURL; // @synthesize videoPosterFrameURL=_videoPosterFrameURL;
@property(retain) NSURL *videoComplementURL; // @synthesize videoComplementURL=_videoComplementURL;
@property(retain) NSURL *primaryURL; // @synthesize primaryURL=_primaryURL;

@end
