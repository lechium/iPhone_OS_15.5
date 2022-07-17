//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NPSManager, NSArray;

@interface IPWatchLocaleController : NSObject
{
    NPSDomainAccessor *_gizmoGlobalDomain;	// 8 = 0x8
    NPSManager *_syncManager;	// 16 = 0x10
    NSArray *_systemLanguages;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000031a8
@property(retain, nonatomic) NSArray *systemLanguages; // @synthesize systemLanguages=_systemLanguages;
@property(retain, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) NPSDomainAccessor *gizmoGlobalDomain; // @synthesize gizmoGlobalDomain=_gizmoGlobalDomain;
- (void)mirrorLanguagesAndLocaleToWatch;	// IMP=0x0000000000003029
- (_Bool)isMirroringEnabled;	// IMP=0x0000000000002f7b
- (void)initializeMirrorSettings;	// IMP=0x0000000000002b0c
- (void)setLocale:(id)arg1;	// IMP=0x0000000000002ad1
- (void)resetTimeFormat;	// IMP=0x0000000000002916
- (void)updateLocale:(id)arg1;	// IMP=0x00000000000027cd
- (void)postLocaleChangedNotification;	// IMP=0x00000000000027aa
- (id)deviceLanguage;	// IMP=0x0000000000002674
- (void)setLanguages:(id)arg1;	// IMP=0x0000000000002513
- (id)preferredLanguages;	// IMP=0x00000000000023eb
- (id)initWithSystemLanguages:(id)arg1;	// IMP=0x0000000000002330
- (id)init;	// IMP=0x000000000000231c

@end
