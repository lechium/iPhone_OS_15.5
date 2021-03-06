//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions
{
    _Bool _optimizeForSharing;	// 40 = 0x28
    _Bool _applyImageOrientationAsMetadata;	// 41 = 0x29
    NUImageExportFormat *_imageExportFormat;	// 48 = 0x30
    double _JPEGCompressionQuality;	// 56 = 0x38
    CDUnknownBlockType _metadataProcessor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000039876
@property _Bool applyImageOrientationAsMetadata; // @synthesize applyImageOrientationAsMetadata=_applyImageOrientationAsMetadata;
@property _Bool optimizeForSharing; // @synthesize optimizeForSharing=_optimizeForSharing;
@property(copy) CDUnknownBlockType metadataProcessor; // @synthesize metadataProcessor=_metadataProcessor;
@property double JPEGCompressionQuality; // @synthesize JPEGCompressionQuality=_JPEGCompressionQuality;
@property(copy) NUImageExportFormat *imageExportFormat; // @synthesize imageExportFormat=_imageExportFormat;
- (id)imageExportFormatForURL:(id)arg1;	// IMP=0x000000000003925d
- (id)init;	// IMP=0x000000000003921f

@end

