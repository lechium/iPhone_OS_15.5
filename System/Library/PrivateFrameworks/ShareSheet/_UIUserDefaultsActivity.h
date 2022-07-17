//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIViewController, _UIActivityUserDefaults;

@interface _UIUserDefaultsActivity
{
    NSArray *_availableActivities;	// 8 = 0x8
    _UIActivityUserDefaults *_userDefaults;	// 16 = 0x10
    UIViewController *_presentableActivityViewController;	// 24 = 0x18
    long long _activityCategory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000505ac
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(retain, nonatomic) UIViewController *presentableActivityViewController; // @synthesize presentableActivityViewController=_presentableActivityViewController;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSArray *availableActivities; // @synthesize availableActivities=_availableActivities;
- (void)_prepareActivityViewControllerIfNeeded;	// IMP=0x000000000005035b
- (void)_cleanup;	// IMP=0x0000000000050347
- (void)_settingsViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000050333
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;	// IMP=0x0000000000050279
- (id)activityViewController;	// IMP=0x000000000005024b
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000050243
- (id)_actionImage;	// IMP=0x0000000000050183
- (id)_activityImage;	// IMP=0x000000000004ff73
- (id)activityTitle;	// IMP=0x000000000004fefc
- (id)activityType;	// IMP=0x000000000004fee8
- (id)initWithUserDefaults:(id)arg1 activityCategory:(long long)arg2;	// IMP=0x000000000004fe4e

@end
