//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXUIAvatarUtilities : NSObject
{
}

+ (id)_axStringForPresetCategory:(long long)arg1;	// IMP=0x00000000000185ee
+ (_Bool)_shouldSkipPresetCategory:(long long)arg1;	// IMP=0x00000000000185e1
+ (id)customContentForMemoji:(id)arg1;	// IMP=0x00000000000182fb
+ (id)customContentForAvatarWithRecord:(id)arg1;	// IMP=0x0000000000018163
+ (id)descriptionForMemoji:(id)arg1;	// IMP=0x0000000000017af7
+ (id)descriptionForAnimoji:(id)arg1;	// IMP=0x0000000000017a12
+ (id)descriptionForAvatarWithRecord:(id)arg1 includeVideoPrefix:(_Bool)arg2;	// IMP=0x000000000001767a
+ (void)performValidations;	// IMP=0x000000000001712e
+ (_Bool)avatarFrameworksArePresent;	// IMP=0x0000000000017104

@end
