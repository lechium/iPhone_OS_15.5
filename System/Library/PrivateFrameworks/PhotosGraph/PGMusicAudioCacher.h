//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGMusicAudioCacher : NSObject
{
}

+ (void)_addSongsWithAdamIDs:(id)arg1 toPlaylist:(id)arg2 inLibrary:(id)arg3 progressReporter:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000043905d
+ (id)songPropertiesByAdamIDCachedForPhotosWithError:(id *)arg1;	// IMP=0x0000000000438a77
+ (void)removeAllSongsCachedForPhotosWithProgressReporter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004386e8
+ (void)removeSongsCachedForPhotosWithAdamIDs:(id)arg1 progressReporter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000437edd
+ (void)cacheSongAudioForAdamIDs:(id)arg1 progressReporter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000437dbb

@end

