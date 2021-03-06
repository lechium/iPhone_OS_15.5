//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXForYouSuggestionDisplayAsset, PXPhotoKitAdjustedUIMediaProvider;
@protocol PUForYouSuggestionActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUForYouSuggestionActionPerformer
{
    PXForYouSuggestionDisplayAsset *_asset;	// 8 = 0x8
    PXPhotoKitAdjustedUIMediaProvider *_mediaProvider;	// 16 = 0x10
    id <PUForYouSuggestionActionPerformerDelegate> _statusDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017a52a
@property(nonatomic) __weak id <PUForYouSuggestionActionPerformerDelegate> statusDelegate; // @synthesize statusDelegate=_statusDelegate;
@property(readonly, nonatomic) PXPhotoKitAdjustedUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXForYouSuggestionDisplayAsset *asset; // @synthesize asset=_asset;
- (id)init;	// IMP=0x000000000017a461
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000017a3d2

@end

