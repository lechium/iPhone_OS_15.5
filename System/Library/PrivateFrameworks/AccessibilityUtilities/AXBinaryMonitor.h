//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AXBinaryMonitor : NSObject
{
    NSMutableDictionary *_bundleHandlerMap;	// 8 = 0x8
    NSMutableDictionary *_frameworkHandlerMap;	// 16 = 0x10
    NSMutableDictionary *_dylibHandlerMap;	// 24 = 0x18
    NSMutableDictionary *_appHandlerMap;	// 32 = 0x20
    NSMutableDictionary *_appExtensionHandlerMap;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_binaryMonitorQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0000000000040ed2
+ (void)initialize;	// IMP=0x0000000000040eb0
- (void).cxx_destruct;	// IMP=0x000000000004295d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *binaryMonitorQueue; // @synthesize binaryMonitorQueue=_binaryMonitorQueue;
@property(retain, nonatomic) NSMutableDictionary *appExtensionHandlerMap; // @synthesize appExtensionHandlerMap=_appExtensionHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *appHandlerMap; // @synthesize appHandlerMap=_appHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *dylibHandlerMap; // @synthesize dylibHandlerMap=_dylibHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *frameworkHandlerMap; // @synthesize frameworkHandlerMap=_frameworkHandlerMap;
@property(retain, nonatomic) NSMutableDictionary *bundleHandlerMap; // @synthesize bundleHandlerMap=_bundleHandlerMap;
- (void)_handleLoadedImagePath:(id)arg1;	// IMP=0x00000000000426f9
- (void)_applyHandlerBlocks:(id)arg1 handlerMap:(id)arg2;	// IMP=0x0000000000042581
- (id)_dylibNameForImage:(id)arg1;	// IMP=0x0000000000042426
- (id)_appNameForImage:(id)arg1;	// IMP=0x00000000000422cb
- (id)_appExtensionNameForImage:(id)arg1;	// IMP=0x0000000000042170
- (id)_bundleNameForImage:(id)arg1;	// IMP=0x0000000000041fbf
- (id)_frameworkNameForImage:(id)arg1;	// IMP=0x0000000000041e1a
- (_Bool)_loadImageIsAppExtension:(id)arg1;	// IMP=0x0000000000041dcf
- (_Bool)_loadImageIsApp:(id)arg1;	// IMP=0x0000000000041d84
- (_Bool)_loadImageIsDylib:(id)arg1;	// IMP=0x0000000000041d39
- (_Bool)_loadImageIsBundle:(id)arg1;	// IMP=0x0000000000041ccd
- (_Bool)_loadImageIsFramework:(id)arg1;	// IMP=0x0000000000041c82
- (id)_bundleNameAndType:(id)arg1;	// IMP=0x0000000000041c2f
- (void)_addHandler:(CDUnknownBlockType)arg1 withName:(id)arg2 toMap:(id *)arg3;	// IMP=0x0000000000041875
- (void)addHandler:(CDUnknownBlockType)arg1 forApp:(id)arg2;	// IMP=0x00000000000417c2
- (void)addHandler:(CDUnknownBlockType)arg1 forAppExtension:(id)arg2;	// IMP=0x000000000004170f
- (void)addHandler:(CDUnknownBlockType)arg1 forDylib:(id)arg2;	// IMP=0x000000000004165c
- (void)addHandler:(CDUnknownBlockType)arg1 forFramework:(id)arg2;	// IMP=0x00000000000415a9
- (void)addHandler:(CDUnknownBlockType)arg1 forBundleName:(id)arg2;	// IMP=0x00000000000414cc
- (void)addHandler:(CDUnknownBlockType)arg1 forBundleID:(id)arg2;	// IMP=0x00000000000414b6
- (void)evaluateExistingBinaries;	// IMP=0x0000000000041146
- (id)init;	// IMP=0x0000000000040f27

@end

