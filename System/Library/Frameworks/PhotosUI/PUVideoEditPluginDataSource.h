//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUVideoEditPluginSessionDataSource-Protocol.h>

@class NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface PUVideoEditPluginDataSource : NSObject <PUVideoEditPluginSessionDataSource>
{
    _Bool _allowsRevertInSession;	// 8 = 0x8
    PHAsset *_videoAsset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000047b06f
@property(nonatomic) _Bool allowsRevertInSession; // @synthesize allowsRevertInSession=_allowsRevertInSession;
@property(retain, nonatomic) PHAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000047ad71
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000047ac59
- (_Bool)editPluginSessionCanRevertToOriginal:(id)arg1;	// IMP=0x000000000047ab56
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000047a9e6
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000047a945
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000047a73e
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000047a553
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000047a384
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000047a251
- (id)initWithVideoAsset:(id)arg1;	// IMP=0x000000000047a1d4
- (id)init;	// IMP=0x000000000047a1c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

