//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXSectionedSelectionManager;
@protocol PUAssetActionManagerDelegate;

@interface PUAssetActionManager : NSObject
{
    id <PUAssetActionManagerDelegate> _delegate;	// 8 = 0x8
}

+ (id)actionManagerLog;	// IMP=0x00000000000949f8
+ (CDUnknownBlockType)_unlockDeviceHandler;	// IMP=0x0000000000094996
+ (void)setUnlockDeviceHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000094891
- (void).cxx_destruct;	// IMP=0x00000000000951cf
@property(nonatomic) __weak id <PUAssetActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;	// IMP=0x000000000009509e
- (_Bool)canPerformAction:(unsigned long long)arg1 onAllAssetReferences:(id)arg2;	// IMP=0x0000000000095043
- (_Bool)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;	// IMP=0x0000000000094f39
- (id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg1 assetToSuggestionMap:(id)arg2;	// IMP=0x0000000000094f31
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000094f29
- (id)actionPerformerForSettingFavoriteTo:(_Bool)arg1 onAssetsByAssetCollection:(id)arg2;	// IMP=0x0000000000094f21
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetReferences:(id)arg2;	// IMP=0x0000000000094eba
- (id)_assetsByAssetCollectionForAssetReferences:(id)arg1;	// IMP=0x0000000000094a9b
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;	// IMP=0x0000000000094a93
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1 allowsRemove:(_Bool)arg2;	// IMP=0x0000000000094a8b
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;	// IMP=0x0000000000094a74
- (id)barButtonItemForActionType:(unsigned long long)arg1;	// IMP=0x0000000000094a6c
- (_Bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;	// IMP=0x0000000000094a64
- (_Bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;	// IMP=0x0000000000094a5c
@property(readonly, nonatomic) PXSectionedSelectionManager *px_selectionManager;

@end
