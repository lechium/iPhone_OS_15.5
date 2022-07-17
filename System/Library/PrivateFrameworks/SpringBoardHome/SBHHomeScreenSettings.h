//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBHAppLibrarySettings, SBHFolderSettings, SBHHomePullToSearchSettings, SBHIconAnimationRootSettings, SBHIconEditingSettings, SBHIconSettings, SBHRootFolderSettings, SBHWidgetIntroductionSettings, SBHWidgetSettings;

@interface SBHHomeScreenSettings : PTSettings
{
    _Bool _usesMinimumViableHomeScreen;	// 8 = 0x8
    _Bool _showPopOvers;	// 9 = 0x9
    SBHIconAnimationRootSettings *_iconAnimationSettings;	// 16 = 0x10
    SBHIconSettings *_iconSettings;	// 24 = 0x18
    SBHFolderSettings *_folderSettings;	// 32 = 0x20
    SBHRootFolderSettings *_rootFolderSettings;	// 40 = 0x28
    SBHIconEditingSettings *_iconEditingSettings;	// 48 = 0x30
    SBHWidgetSettings *_widgetSettings;	// 56 = 0x38
    SBHAppLibrarySettings *_appLibrarySettings;	// 64 = 0x40
    SBHHomePullToSearchSettings *_pullToSearchSettings;	// 72 = 0x48
    SBHWidgetIntroductionSettings *_widgetIntroductionSettings;	// 80 = 0x50
}

+ (id)settingsControllerModule;	// IMP=0x000000000016abd3
+ (id)homeScreenDefaults;	// IMP=0x000000000016ab04
- (void).cxx_destruct;	// IMP=0x000000000016b27a
@property(retain, nonatomic) SBHWidgetIntroductionSettings *widgetIntroductionSettings; // @synthesize widgetIntroductionSettings=_widgetIntroductionSettings;
@property(retain, nonatomic) SBHHomePullToSearchSettings *pullToSearchSettings; // @synthesize pullToSearchSettings=_pullToSearchSettings;
@property(retain, nonatomic) SBHAppLibrarySettings *appLibrarySettings; // @synthesize appLibrarySettings=_appLibrarySettings;
@property(retain, nonatomic) SBHWidgetSettings *widgetSettings; // @synthesize widgetSettings=_widgetSettings;
@property(retain, nonatomic) SBHIconEditingSettings *iconEditingSettings; // @synthesize iconEditingSettings=_iconEditingSettings;
@property(retain, nonatomic) SBHRootFolderSettings *rootFolderSettings; // @synthesize rootFolderSettings=_rootFolderSettings;
@property(retain, nonatomic) SBHFolderSettings *folderSettings; // @synthesize folderSettings=_folderSettings;
@property(retain, nonatomic) SBHIconSettings *iconSettings; // @synthesize iconSettings=_iconSettings;
@property(retain, nonatomic) SBHIconAnimationRootSettings *iconAnimationSettings; // @synthesize iconAnimationSettings=_iconAnimationSettings;
@property(nonatomic) _Bool showPopOvers; // @synthesize showPopOvers=_showPopOvers;
@property(nonatomic) _Bool usesMinimumViableHomeScreen; // @synthesize usesMinimumViableHomeScreen=_usesMinimumViableHomeScreen;
- (void)setDefaultValues;	// IMP=0x000000000016ab59

@end
