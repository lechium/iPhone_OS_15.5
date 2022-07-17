//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHRCardioFitnessFooter;

@interface HKHRCardioFitnessBridgeSettings : NSObject
{
    _Bool _settingVisible;	// 8 = 0x8
    _Bool _settingEnabled;	// 9 = 0x9
    _Bool _showOnboarding;	// 10 = 0xa
    HKHRCardioFitnessFooter *_footer;	// 16 = 0x10
}

+ (id)hiddenSettings;	// IMP=0x0000000000002639
- (void).cxx_destruct;	// IMP=0x00000000000026bd
@property(retain, nonatomic) HKHRCardioFitnessFooter *footer; // @synthesize footer=_footer;
@property(nonatomic) _Bool showOnboarding; // @synthesize showOnboarding=_showOnboarding;
@property(nonatomic) _Bool settingEnabled; // @synthesize settingEnabled=_settingEnabled;
@property(nonatomic) _Bool settingVisible; // @synthesize settingVisible=_settingVisible;
- (id)initWithSettingVisible:(_Bool)arg1 settingEnabled:(_Bool)arg2 showOnboarding:(_Bool)arg3 footer:(id)arg4;	// IMP=0x0000000000002572

@end
