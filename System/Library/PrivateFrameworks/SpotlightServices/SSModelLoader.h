//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface SSModelLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_pendingUpdates;	// 16 = 0x10
}

+ (id)assetDirectoryPathForType:(unsigned long long)arg1 forUpdate:(_Bool)arg2;	// IMP=0x00000000000131dc
+ (id)sharedInstance;	// IMP=0x00000000000130ca
- (void).cxx_destruct;	// IMP=0x0000000000014422
@property(retain, nonatomic) NSMutableSet *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)moveNewlyPackagedAssets:(id)arg1;	// IMP=0x0000000000013db8
- (void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000013a1f
- (void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000013955
- (void)unpackageModelAssets:(id)arg1 assetName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000137b9
- (void)removeAssetsForType:(unsigned long long)arg1 group:(id)arg2;	// IMP=0x000000000001364b
- (void)removeAssetsWithName:(id)arg1;	// IMP=0x0000000000013477
- (_Bool)hasPendingUpdates;	// IMP=0x0000000000013309
- (id)init;	// IMP=0x000000000001311f

@end
