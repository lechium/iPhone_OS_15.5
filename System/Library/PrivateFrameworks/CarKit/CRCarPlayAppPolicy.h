//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CRCarPlayAppPolicy : NSObject
{
    _Bool _carPlaySupported;	// 8 = 0x8
    _Bool _canDisplayOnCarScreen;	// 9 = 0x9
    _Bool _launchUsingSiri;	// 10 = 0xa
    _Bool _launchNotificationsUsingSiri;	// 11 = 0xb
    _Bool _launchUsingMusicUIService;	// 12 = 0xc
    _Bool _badgesAppIcon;	// 13 = 0xd
    _Bool _showsNotifications;	// 14 = 0xe
    _Bool _handlesCarIntents;	// 15 = 0xf
    _Bool _launchUsingTemplateUI;	// 16 = 0x10
    NSDictionary *_siriActivationOptions;	// 24 = 0x18
    NSString *_bundlePath;	// 32 = 0x20
    unsigned long long _applicationCategory;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001c090
@property(nonatomic) unsigned long long applicationCategory; // @synthesize applicationCategory=_applicationCategory;
@property(readonly, copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(nonatomic) _Bool launchUsingTemplateUI; // @synthesize launchUsingTemplateUI=_launchUsingTemplateUI;
@property(nonatomic) _Bool handlesCarIntents; // @synthesize handlesCarIntents=_handlesCarIntents;
@property(nonatomic) _Bool showsNotifications; // @synthesize showsNotifications=_showsNotifications;
@property(nonatomic) _Bool badgesAppIcon; // @synthesize badgesAppIcon=_badgesAppIcon;
@property(nonatomic) _Bool launchUsingMusicUIService; // @synthesize launchUsingMusicUIService=_launchUsingMusicUIService;
@property(copy, nonatomic) NSDictionary *siriActivationOptions; // @synthesize siriActivationOptions=_siriActivationOptions;
@property(nonatomic) _Bool launchNotificationsUsingSiri; // @synthesize launchNotificationsUsingSiri=_launchNotificationsUsingSiri;
@property(nonatomic) _Bool launchUsingSiri; // @synthesize launchUsingSiri=_launchUsingSiri;
@property(nonatomic) _Bool canDisplayOnCarScreen; // @synthesize canDisplayOnCarScreen=_canDisplayOnCarScreen;
@property(nonatomic, getter=isCarPlaySupported) _Bool carPlaySupported; // @synthesize carPlaySupported=_carPlaySupported;
- (id)init;	// IMP=0x000000000001bec7

@end

