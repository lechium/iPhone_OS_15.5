//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INAppInfo, NSArray, NSDictionary, NSString, WFImage;
@protocol OS_dispatch_queue;

@interface ICApp : NSObject
{
    _Bool _installed;	// 8 = 0x8
    _Bool _checkedInstallStatus;	// 9 = 0x9
    NSArray *_schemes;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    WFImage *_icon;	// 32 = 0x20
    INAppInfo *_appInfo;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSDictionary *_definition;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_stateAccessQueue;	// 64 = 0x40
}

+ (void)loadIconWithBundleIdentifier:(id)arg1 desiredSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000015520e
- (void).cxx_destruct;	// IMP=0x00000000001548e3
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue; // @synthesize stateAccessQueue=_stateAccessQueue;
@property(nonatomic) _Bool checkedInstallStatus; // @synthesize checkedInstallStatus=_checkedInstallStatus;
@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)identifierFromDictionaryForCurrentIdiom:(id)arg1;	// IMP=0x00000000001547de
- (void)loadAppInStoreController:(id)arg1 withCampaignToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000154357
- (void)openFile:(id)arg1 withAnnotation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001542b2
- (void)openFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000015429b
@property(readonly, nonatomic, getter=isInstalled) _Bool installed; // @synthesize installed=_installed;
- (void)updateInstalledStatus;	// IMP=0x0000000000154160
- (void)resetInstalledStatus;	// IMP=0x00000000001540ef
- (_Bool)isCurrentlyInstalled;	// IMP=0x0000000000154050
- (_Bool)determinesInstallStatusViaURLScheme;	// IMP=0x0000000000153fc0
@property(readonly, nonatomic) INAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic) NSString *iconName;
@property(readonly, nonatomic) NSArray *metadata;
@property(readonly, nonatomic) NSArray *documentActions;
@property(readonly, nonatomic) NSArray *documentTypes;
@property(readonly, nonatomic) NSArray *exportedFileTypes;
- (id)schemeNamed:(id)arg1;	// IMP=0x000000000015389b
@property(readonly, nonatomic) NSArray *schemes; // @synthesize schemes=_schemes;
@property(retain, nonatomic) WFImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) NSString *iTunesIdentifier;
- (id)localizedString:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000153415
@property(readonly, nonatomic) NSString *localizedShortName;
@property(readonly, nonatomic) NSString *shortName;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSArray *allBundleIdentifiers;
- (id)bundleIdentifiersByIdiom;	// IMP=0x0000000000152f0e
- (id)description;	// IMP=0x0000000000152e11
- (unsigned long long)hash;	// IMP=0x0000000000152d84
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000152c17
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2;	// IMP=0x0000000000152aaf

@end

