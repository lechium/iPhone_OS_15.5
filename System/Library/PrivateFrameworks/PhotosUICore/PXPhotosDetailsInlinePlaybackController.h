//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PXTilingController;
@protocol OS_dispatch_queue, PXPhotosDetailsInlinePlaybackControllerDelegate;

@interface PXPhotosDetailsInlinePlaybackController
{
    NSObject<OS_dispatch_queue> *_recordCreationQueue;	// 8 = 0x8
    PXTilingController *_tilingController;	// 16 = 0x10
    id <PXPhotosDetailsInlinePlaybackControllerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000933780
@property(nonatomic) __weak id <PXPhotosDetailsInlinePlaybackControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
- (_Bool)canPlayAsset:(id)arg1;	// IMP=0x00000000009336c8
- (struct CGRect)frameForPlaybackRecord:(id)arg1 minPlayableSize:(out struct CGSize *)arg2;	// IMP=0x0000000000933488
- (struct CGRect)currentVisibleRect;	// IMP=0x00000000009333fe
- (id)createPlaybackRecordForDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;	// IMP=0x0000000000933369
- (_Bool)shouldEnablePlayback;	// IMP=0x00000000009332ed
- (void)updatePlaybackEnabled;	// IMP=0x00000000009332db
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x000000000093317f
- (void)checkOutTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;	// IMP=0x0000000000932f6d
- (struct PXTileIdentifier)_currentTileIdentifierForRecord:(id)arg1;	// IMP=0x0000000000932d08
- (_Bool)_isRecognizedTileIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x0000000000932cf0
- (id)init;	// IMP=0x0000000000932c76
- (id)initWithTilingController:(id)arg1;	// IMP=0x0000000000932b9b

@end
