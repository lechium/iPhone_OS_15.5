//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject
{
    unsigned long long _resumeMenuBehavior;	// 8 = 0x8
}

@property(nonatomic) unsigned long long resumeMenuBehavior; // @synthesize resumeMenuBehavior=_resumeMenuBehavior;
- (void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2;	// IMP=0x000000000002fbab
- (void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2;	// IMP=0x000000000002fb33
- (void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2;	// IMP=0x000000000002fabb
- (id)_clipMediaItemsMediaItem:(id)arg1 fromTimelineElement:(id)arg2;	// IMP=0x000000000002f7af
- (id)_storeAuxMediaItemForIKMediaElement:(id)arg1 isExtrasContent:(_Bool)arg2;	// IMP=0x000000000002f243
- (id)_storeMediaItemsForAdamID:(long long)arg1 IKMediaElement:(id)arg2;	// IMP=0x000000000002ede8
- (id)playlistForIKMediaElements:(id)arg1 isExtrasContent:(_Bool)arg2;	// IMP=0x000000000002e932
- (_Bool)_shouldDisableResumeMenuForAsset:(id)arg1;	// IMP=0x000000000002e8e1
- (id)init;	// IMP=0x000000000002e8a5

@end
