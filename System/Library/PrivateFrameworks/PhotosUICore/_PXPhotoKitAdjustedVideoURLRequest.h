//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PHVideoRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedVideoURLRequest
{
    PLPhotoEditRenderer *_renderer;	// 80 = 0x50
    PHVideoRequestOptions *_options;	// 88 = 0x58
    NSString *_pairingIdentifier;	// 96 = 0x60
    CDUnknownBlockType _resultHandler;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000e9d4d
@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, copy, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) PHVideoRequestOptions *options; // @synthesize options=_options;
- (void)_handleExportFinished:(_Bool)arg1 error:(id)arg2 videoURL:(id)arg3;	// IMP=0x00000000000e9bcb
- (void)_renderIfNeeded;	// IMP=0x00000000000e992e
- (void)progressDidChange;	// IMP=0x00000000000e9819
- (void)editSourceDidChange;	// IMP=0x00000000000e9807
- (void)start;	// IMP=0x00000000000e97f5
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000e96f2

@end

