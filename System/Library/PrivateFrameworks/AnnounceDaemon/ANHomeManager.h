//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnounceDaemon/ANAnalyticsDailyHomesProvider-Protocol.h>
#import <AnnounceDaemon/HMAccessoryDelegatePrivate-Protocol.h>
#import <AnnounceDaemon/HMHomeDelegate-Protocol.h>
#import <AnnounceDaemon/HMHomeDelegatePrivate-Protocol.h>
#import <AnnounceDaemon/HMHomeManagerDelegate-Protocol.h>

@class ANAccessorySettingsCache, HMAccessory, HMHome, HMHomeManager, NSArray, NSDate, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ANHomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, ANAnalyticsDailyHomesProvider>
{
    _Bool _homesLoaded;	// 8 = 0x8
    ANAccessorySettingsCache *_accessorySettingsCache;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSMutableArray *_homesLoadedCompletionHandlers;	// 32 = 0x20
    HMHomeManager *_homeManager;	// 40 = 0x28
    NSMapTable *_delegatesToQueues;	// 48 = 0x30
    NSDate *_loadHomesStart;	// 56 = 0x38
}

+ (id)shared;	// IMP=0x000000000002c03d
+ (unsigned long long)defaultHomeOptions;	// IMP=0x000000000002bfdd
- (void).cxx_destruct;	// IMP=0x000000000002ebe1
@property(readonly, nonatomic) NSDate *loadHomesStart; // @synthesize loadHomesStart=_loadHomesStart;
@property(readonly, nonatomic) NSMapTable *delegatesToQueues; // @synthesize delegatesToQueues=_delegatesToQueues;
@property(readonly, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSMutableArray *homesLoadedCompletionHandlers; // @synthesize homesLoadedCompletionHandlers=_homesLoadedCompletionHandlers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool homesLoaded; // @synthesize homesLoaded=_homesLoaded;
@property(readonly, nonatomic) ANAccessorySettingsCache *accessorySettingsCache; // @synthesize accessorySettingsCache=_accessorySettingsCache;
- (void)_executeBlockForDelegates:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e854
- (void)accessoryDidUpdateControllable:(id)arg1;	// IMP=0x000000000002e57d
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x000000000002e25f
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x000000000002df41
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x000000000002dc60
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x000000000002d961
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;	// IMP=0x000000000002d61c
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;	// IMP=0x000000000002d3b6
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x000000000002d0fe
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x000000000002cd16
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x000000000002c79e
- (void)_notifyManagerLoadedHomes:(id)arg1;	// IMP=0x000000000002c5fc
@property(readonly, nonatomic) HMAccessory *currentAccessory;
@property(readonly, nonatomic) HMHome *currentHome;
@property(readonly, nonatomic) NSArray *homes;
@property(readonly, nonatomic) NSArray *allHomes;
- (void)loadHomeSynchronous;	// IMP=0x000000000002c2d5
- (void)loadHomes:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c0c2
- (id)initWithCaching:(_Bool)arg1 homeOptions:(unsigned long long)arg2;	// IMP=0x000000000002bda3
- (id)initWithCaching:(_Bool)arg1;	// IMP=0x000000000002bd5c
- (id)init;	// IMP=0x000000000002bd45
- (_Bool)isEndpointWithUUID:(id)arg1 inRoomWithName:(id)arg2;	// IMP=0x00000000000122d3
- (_Bool)isLocalDeviceInRoom:(id)arg1;	// IMP=0x00000000000121c2
@property(readonly, nonatomic) NSArray *homesSupportingAnnounce;
- (id)homesWithZoneNames:(id)arg1;	// IMP=0x00000000000120e5
- (id)homesWithRoomNames:(id)arg1;	// IMP=0x0000000000012058
- (id)homeWithName:(id)arg1;	// IMP=0x0000000000011e70
- (id)homeForID:(id)arg1;	// IMP=0x0000000000011c88
- (id)_currentHomesWeAreIn;	// IMP=0x00000000000271cc
- (id)_findBestHomeNames;	// IMP=0x0000000000026e5d
- (id)_homeNamesForAccessoryForContext:(id)arg1;	// IMP=0x0000000000026a1b
- (id)_homesForContext:(id)arg1;	// IMP=0x00000000000266a9
- (id)homeNamesForContext:(id)arg1;	// IMP=0x0000000000026498
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002ec35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
