//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BCDiscoverPluginManager : NSObject
{
    struct os_unfair_lock_s _discoverPluginsLock;	// 8 = 0x8
    NSArray *_discoverPlugins;	// 16 = 0x10
}

+ (id)discoverPluginBundles;	// IMP=0x000000000000269a
+ (id)_discoverPluginDirectoryURL;	// IMP=0x000000000000256e
- (void).cxx_destruct;	// IMP=0x0000000000002d21
@property(readonly, nonatomic) struct os_unfair_lock_s discoverPluginsLock; // @synthesize discoverPluginsLock=_discoverPluginsLock;
@property(copy, nonatomic) NSArray *discoverPlugins; // @synthesize discoverPlugins=_discoverPlugins;
- (id)sortedPluginsBySectionForInput:(id)arg1;	// IMP=0x0000000000002b31
- (id)_buildDiscoverPlugins;	// IMP=0x0000000000002784
- (id)init;	// IMP=0x0000000000002519

@end
