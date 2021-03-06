//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PICompositionExporter : NSObject
{
}

+ (id)resetImageProperties:(id)arg1 preserveRegions:(_Bool)arg2;	// IMP=0x0000000000040f69
+ (id)metadataConverter;	// IMP=0x0000000000040f58
+ (void)setMetadataConverter:(id)arg1;	// IMP=0x0000000000040f44
- (void)_exportVideoToURLFull:(id)arg1 composition:(id)arg2 options:(id)arg3 properties:(id)arg4 progress:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000003df5d
- (void)_exportVideoToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 properties:(id)arg4 progress:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000003dd78
- (_Bool)shouldTryVideoRotationFastPath:(id)arg1 options:(id)arg2;	// IMP=0x000000000003d2e3
- (id)addVideoProperties:(id)arg1 composition:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003cc58
- (id)addImageProperties:(id)arg1 composition:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003c402
- (void)prepareAuxiliaryImagesFetchProperties:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c2a9
- (void)prepareImageExportRequest:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003c1b6
- (id)variationForFlavor:(id)arg1;	// IMP=0x000000000003c14a
- (id)exportComposition:(id)arg1 options:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a5a4
- (id)exportComposition:(id)arg1 toPrimaryURL:(id)arg2 videoComplementURL:(id)arg3 videoPosterFrameURL:(id)arg4 priority:(id)arg5 completionQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000003a424
- (id)exportVideoToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039fcc
- (void)exportImageToDataWithComposition:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039f07
- (void)exportImageToURL:(id)arg1 composition:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039e1a
- (id)init;	// IMP=0x0000000000039aa9

@end

