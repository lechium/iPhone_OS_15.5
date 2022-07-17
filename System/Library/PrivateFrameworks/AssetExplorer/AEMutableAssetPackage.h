//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AEMutableAssetPackage
{
}

- (void)removeSidecarObjectForKey:(id)arg1;	// IMP=0x00000000000060d0
- (void)addSidecarEntriesFromDictionary:(id)arg1;	// IMP=0x000000000000601e
- (void)setSidecarObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000005e40
- (void)removeURLForType:(id)arg1;	// IMP=0x0000000000005d8e
- (void)storeURL:(id)arg1 forType:(id)arg2;	// IMP=0x0000000000005cb1
- (id)initWithAssetIdentifier:(id)arg1;	// IMP=0x0000000000005c7d
- (void)expressURLForType:(id)arg1;	// IMP=0x00000000000067e0
- (void)suppressURLForType:(id)arg1;	// IMP=0x000000000000672e
- (void)storeMetadataFromPHAsset:(id)arg1 imageURL:(id)arg2 adjustmentURL:(id)arg3;	// IMP=0x00000000000070ce
- (void)storeMetadataFromReviewAsset:(id)arg1;	// IMP=0x0000000000006f5e
- (id)_copyMetadataFromDisplayAsset:(id)arg1;	// IMP=0x0000000000006b34
- (void)endSuppressingLivePhoto;	// IMP=0x0000000000008118
- (void)beginSupressingLivePhoto;	// IMP=0x000000000000806d
- (void)setMediaOrigin:(long long)arg1;	// IMP=0x00000000000082f1

@end
