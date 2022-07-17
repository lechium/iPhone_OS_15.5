//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface STUsageBundleRegistry : NSObject
{
    NSDictionary *_reporters;	// 8 = 0x8
    NSDictionary *_usageApps;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000015904
@property(retain) NSDictionary *usageApps; // @synthesize usageApps=_usageApps;
@property(retain) NSDictionary *reporters; // @synthesize reporters=_reporters;
- (id)allAppsWithUsageBundles;	// IMP=0x00000000000158a8
- (id)usageBundleForIdentifier:(id)arg1;	// IMP=0x000000000001583e
- (id)loadBundlesForReporters:(id)arg1;	// IMP=0x00000000000150d6
- (id)loadReporters;	// IMP=0x0000000000014be1
- (id)init;	// IMP=0x0000000000014b4b

@end
