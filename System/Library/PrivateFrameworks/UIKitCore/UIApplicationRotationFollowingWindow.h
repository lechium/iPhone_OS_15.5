//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIApplicationRotationFollowingWindow
{
    _Bool _limitToWindowLevel;	// 160 = 0xa0
    long long _priorityLevel;	// 168 = 0xa8
}

+ (_Bool)_isSystemWindow;	// IMP=0x000000000077ddb2
@property(nonatomic) _Bool limitToWindowLevel; // @synthesize limitToWindowLevel=_limitToWindowLevel;
@property(nonatomic) long long priorityLevel; // @synthesize priorityLevel=_priorityLevel;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000077e8d2
- (_Bool)_shouldControlAutorotation;	// IMP=0x000000000077e8ca
- (_Bool)isInterfaceAutorotationDisabled;	// IMP=0x000000000077e805
- (void)_handleStatusBarOrientationChange:(id)arg1;	// IMP=0x000000000077e7ff
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000077e5f4
- (void)applicationWindowRotated:(id)arg1;	// IMP=0x000000000077e28e
- (id)_topMostWindow;	// IMP=0x000000000077e273
- (id)initWithWindowScene:(id)arg1;	// IMP=0x000000000077e06f
- (id)_initWithFrame:(struct CGRect)arg1 attached:(_Bool)arg2;	// IMP=0x000000000077e012
- (id)init;	// IMP=0x000000000077dfc6
- (void)_commonApplicationRotationFollowingWindowInit;	// IMP=0x000000000077ddba

@end

