//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUSuggestLessPersonActivity : PXActivity
{
    NSString *_cachedImageName;	// 8 = 0x8
}

+ (long long)_activityStyle;	// IMP=0x000000000021cf8f
+ (long long)activityCategory;	// IMP=0x000000000021cf87
- (void).cxx_destruct;	// IMP=0x000000000021d73b
- (id)_personFromFace:(id)arg1;	// IMP=0x000000000021d59c
- (id)_facesInCurrentAsset;	// IMP=0x000000000021d4a6
- (void)performActivity;	// IMP=0x000000000021d48f
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000021d354
- (id)_systemImageName;	// IMP=0x000000000021d1e5
- (id)activityTitle;	// IMP=0x000000000021cfae
- (id)activityType;	// IMP=0x000000000021cf9a

@end

