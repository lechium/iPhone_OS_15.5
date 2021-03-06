//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDHomeManager, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAssistantGather : HMFObject <HMFLogging>
{
    HMDHomeManager *_manager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSArray *_currentHomekitObjects;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x000000000079a7f6
- (void).cxx_destruct;	// IMP=0x000000000079a4fb
@property(retain, nonatomic) NSArray *currentHomekitObjects; // @synthesize currentHomekitObjects=_currentHomekitObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak HMDHomeManager *manager; // @synthesize manager=_manager;
- (void)getSyncEntityObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000079a3d3
@property(readonly, nonatomic) NSArray *homeKitObjects;
- (void)gatherHomeKitObjectsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000079a2da
- (void)_gatherHomeKitObjects;	// IMP=0x000000000079891c
@property(readonly, nonatomic) NSString *currentHomeAssistantIdentifier;
@property(readonly, nonatomic) NSString *currentHomeName;
@property(readonly, nonatomic) NSString *primaryHomeAssistantIdentifier;
@property(readonly, nonatomic) NSString *primaryHomeName;
@property(readonly, nonatomic) long long homeCount;
- (id)_getCurrentHome;	// IMP=0x000000000079853c
- (id)_getPrimaryHome;	// IMP=0x0000000000798313
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000798278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

