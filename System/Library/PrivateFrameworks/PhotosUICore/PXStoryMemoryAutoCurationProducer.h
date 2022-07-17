//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryAutoCurationProducer-Protocol.h>

@class NSCache, PHMemory;
@protocol OS_dispatch_queue;

@interface PXStoryMemoryAutoCurationProducer : NSObject <PXStoryAutoCurationProducer>
{
    NSCache *_curationCache;	// 8 = 0x8
    PHMemory *_memory;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)_optionsForAssets:(id)arg1;	// IMP=0x00000000003feed6
- (void).cxx_destruct;	// IMP=0x00000000003fe9b9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
- (id)requestCuratedAssetsWithOptions:(unsigned long long)arg1 targetOverallDurationInfo:(CDStruct_5d4c7ed3)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003fe7bd
- (id)requestCurationLengthsWithOptions:(unsigned long long)arg1 allAssets:(id)arg2 curatedAssets:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003fe5c5
- (id)initWithMemory:(id)arg1;	// IMP=0x00000000003fe499
- (id)init;	// IMP=0x00000000003fe41f

@end
