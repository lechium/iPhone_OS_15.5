//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class PUEditPlugin;

__attribute__((visibility("hidden")))
@interface PUEditPluginActivity : UIActivity
{
    PUEditPlugin *_plugin;	// 8 = 0x8
}

+ (long long)activityCategory;	// IMP=0x0000000000115b62
- (void).cxx_destruct;	// IMP=0x0000000000115b4f
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (_Bool)_isHiddenByDefault;	// IMP=0x0000000000115b36
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000115b2e
- (id)_activitySettingsImage;	// IMP=0x0000000000115ade
- (id)_activityImage;	// IMP=0x0000000000115a8e
- (id)activityTitle;	// IMP=0x0000000000115a3e
- (id)activityType;	// IMP=0x00000000001159c4
- (id)initWithPlugin:(id)arg1;	// IMP=0x0000000000115956

@end
