//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindowScene.h>

@interface UIWindowScene (AVAdditions)
+ (_Bool)avkit_supportsInteractiveCounterRotationDismissals;	// IMP=0x0000000000031771
- (void)avkit_disableTouchCancellation:(_Bool)arg1 forRotationActions:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031640
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;	// IMP=0x00000000000a557c
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;	// IMP=0x00000000000a546a
- (long long)avkit_screenType;	// IMP=0x00000000000a5237
- (id)avkit_asWindowScene;	// IMP=0x00000000000a522e
@end

