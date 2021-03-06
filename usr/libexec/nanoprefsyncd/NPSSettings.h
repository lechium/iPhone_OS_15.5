//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NPSSettings : NSObject
{
    NSMutableDictionary *_syncedUserDefaults;	// 8 = 0x8
    NSMutableDictionary *_permittedUserDefaults;	// 16 = 0x10
}

+ (id)bbAppsSettings;	// IMP=0x0040000000028bcd
+ (id)preprocessItemSyncGroups:(id)arg1 forDomain:(id)arg2 key:(id)arg3;	// IMP=0x0010000000025eb3
+ (_Bool)domainShouldSyncFirst:(id)arg1 key:(id)arg2;	// IMP=0x0010000000025d01
- (void).cxx_destruct;	// IMP=0x0020000000028c6f
@property(retain, nonatomic) NSMutableDictionary *permittedUserDefaults; // @synthesize permittedUserDefaults=_permittedUserDefaults;
@property(retain, nonatomic) NSMutableDictionary *syncedUserDefaults; // @synthesize syncedUserDefaults=_syncedUserDefaults;
- (void)loadSettingsBundles;	// IMP=0x0010000000025fbd

@end

