//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject
{
    NSMutableDictionary *_managersByBundleID;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000027afb
- (void).cxx_destruct;	// IMP=0x0000000000027ed9
- (id)pluginManagerForBundle:(id)arg1;	// IMP=0x0000000000027dda
- (id)mainPluginManager;	// IMP=0x0000000000027d60
- (void)registerPluginsFromBundle:(id)arg1;	// IMP=0x0000000000027c28
- (void)registerPlugins;	// IMP=0x0000000000027bc1

@end
