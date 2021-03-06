//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AFPluginManager : NSObject
{
    NSString *_path;	// 8 = 0x8
    NSArray *_domainKeys;	// 16 = 0x10
    CDUnknownBlockType _factoryInitializationBlock;	// 24 = 0x18
    NSMutableDictionary *_domainKeyDictionary;	// 32 = 0x20
    _Bool _hasLoadedBundles;	// 40 = 0x28
}

+ (id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000df6c1
- (void).cxx_destruct;	// IMP=0x00000000000e05ef
- (id)description;	// IMP=0x00000000000e0573
- (void)_registerBundle:(id)arg1;	// IMP=0x00000000000dfffa
- (void)_loadBundlesIfNeeded;	// IMP=0x00000000000dfd15
- (void)preloadBundles;	// IMP=0x00000000000dfc79
- (void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000df74f
- (id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000df3ec

@end

