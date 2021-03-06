//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSOperationQueue, NSString, SKUIReloadConfigurationOperation;

@interface SKUIConfigurationPreloader : NSObject
{
    NSString *_configurationCachePath;	// 8 = 0x8
    NSOperationQueue *_workQueue;	// 16 = 0x10
    NSMutableArray *_completionBlocks;	// 24 = 0x18
    SKUIReloadConfigurationOperation *_pendingReloadOperation;	// 32 = 0x20
    NSDictionary *_loadedConfiguration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000069c0a
@property(retain, nonatomic) NSDictionary *loadedConfiguration; // @synthesize loadedConfiguration=_loadedConfiguration;
@property(retain, nonatomic) SKUIReloadConfigurationOperation *pendingReloadOperation; // @synthesize pendingReloadOperation=_pendingReloadOperation;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy, nonatomic) NSString *configurationCachePath; // @synthesize configurationCachePath=_configurationCachePath;
- (void)finishPreloadingConfiguration:(id)arg1 error:(id)arg2;	// IMP=0x00000000000699fb
- (void)preloadConfigurationForPurpose:(long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000694f6
- (id)newReloadConfigurationOperation;	// IMP=0x00000000000694e5
@property(readonly) _Bool hasExistingConfigurationCache;
- (id)init;	// IMP=0x0000000000069410
- (id)initWithConfigurationCachePath:(id)arg1;	// IMP=0x000000000006934a

@end

