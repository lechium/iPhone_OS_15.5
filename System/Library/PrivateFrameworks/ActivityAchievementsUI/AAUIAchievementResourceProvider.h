//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AAUIAchievementResourceProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000073f8
- (id)_compressedBadgeModelPathForAchievement:(id)arg1;	// IMP=0x000000000000739a
- (id)_modelFilePathForAchievement:(id)arg1;	// IMP=0x00000000000072f6
- (id)_modelDirectoryForAchievement:(id)arg1;	// IMP=0x00000000000071d6
- (id)_badgeModelFilename;	// IMP=0x00000000000071c9
- (id)_cachedModelsPath;	// IMP=0x000000000000713e
- (_Bool)_queue_decompressZipFileAtPath:(id)arg1 toDirectory:(id)arg2;	// IMP=0x0000000000006fb0
- (id)_assetBundleForAchievement:(id)arg1;	// IMP=0x0000000000006e86
- (id)badgeConfigurationForAchievement:(id)arg1;	// IMP=0x0000000000006b90
- (id)enamelColorForAchievement:(id)arg1;	// IMP=0x0000000000006b40
- (id)metalColorForAchievement:(id)arg1;	// IMP=0x0000000000006af0
- (id)backSideIconImageForAchievement:(id)arg1;	// IMP=0x000000000000677b
- (id)stickerURLsForAchievement:(id)arg1;	// IMP=0x00000000000064f2
- (id)stickersBundlePathForAchievement:(id)arg1;	// IMP=0x0000000000006421
- (id)texturePathForAchievement:(id)arg1;	// IMP=0x0000000000006142
- (id)badgeModelPathForAchievement:(id)arg1;	// IMP=0x0000000000005eb9
- (id)init;	// IMP=0x0000000000005e58

@end
