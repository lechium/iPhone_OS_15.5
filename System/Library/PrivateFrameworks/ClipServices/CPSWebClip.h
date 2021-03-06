//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL, NSUserActivity;

@interface CPSWebClip : NSObject
{
    NSURL *_pageURL;	// 8 = 0x8
    struct CGImage *_iconImage;	// 16 = 0x10
    _Bool _scenelessBackgroundLaunch;	// 24 = 0x18
    _Bool _poweredBy;	// 25 = 0x19
    NSString *_temporaryIconPath;	// 32 = 0x20
    unsigned long long _bundleVersion;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
    NSString *_applicationBundleIdentifier;	// 64 = 0x40
    NSURL *_registeredURL;	// 72 = 0x48
    long long _webClipType;	// 80 = 0x50
    NSString *_fullAppName;	// 88 = 0x58
    NSString *_fullAppCaption;	// 96 = 0x60
    NSURL *_fullAppStoreURL;	// 104 = 0x68
    NSDate *_lastActivatedTime;	// 112 = 0x70
}

+ (id)appClips;	// IMP=0x0000000000015eab
- (void).cxx_destruct;	// IMP=0x0000000000016720
@property(copy, nonatomic) NSDate *lastActivatedTime; // @synthesize lastActivatedTime=_lastActivatedTime;
@property(copy, nonatomic) NSURL *fullAppStoreURL; // @synthesize fullAppStoreURL=_fullAppStoreURL;
@property(copy, nonatomic) NSString *fullAppCaption; // @synthesize fullAppCaption=_fullAppCaption;
@property(copy, nonatomic) NSString *fullAppName; // @synthesize fullAppName=_fullAppName;
@property(nonatomic, getter=isPoweredBy) _Bool poweredBy; // @synthesize poweredBy=_poweredBy;
@property(nonatomic) _Bool scenelessBackgroundLaunch; // @synthesize scenelessBackgroundLaunch=_scenelessBackgroundLaunch;
@property(readonly, nonatomic) long long webClipType; // @synthesize webClipType=_webClipType;
@property(copy, nonatomic) NSURL *registeredURL; // @synthesize registeredURL=_registeredURL;
@property(copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *_temporaryIconPath; // @synthesize _temporaryIconPath;
@property(readonly, nonatomic, getter=isApplicationInstalled) _Bool applicationInstalled;
- (id)description;	// IMP=0x0000000000016273
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) struct CGImage *iconImage;
@property(readonly, nonatomic) NSString *iconImagePath;
@property(readonly, nonatomic) NSUserActivity *appClipUserActivity;
@property(readonly, nonatomic) NSString *bundleIdentifier;
- (id)_bundleResourceWithName:(id)arg1;	// IMP=0x0000000000015b57
@property(readonly, nonatomic) NSDictionary *_dictionaryRepresentation;
- (void)_updateWithClipMetadata:(id)arg1;	// IMP=0x0000000000015683
- (id)_initWithIdentifier:(id)arg1 webClipDictionary:(id)arg2;	// IMP=0x0000000000015324
- (id)_init;	// IMP=0x000000000001523d

@end

