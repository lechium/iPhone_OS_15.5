//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject
{
    _Bool _invalid;	// 8 = 0x8
    _Bool _interrupted;	// 9 = 0x9
    int _listenerResumedToken;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcSetupQueue;	// 24 = 0x18
    NSMutableArray *_observers;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000000004ad44
+ (id)hotspotInterface;	// IMP=0x000000000004ad3c
+ (id)hotspotClientInterface;	// IMP=0x000000000004ad34
+ (id)unlockInterface;	// IMP=0x000000000004ad23
+ (id)serviceManagerInterface;	// IMP=0x000000000004ad12
+ (id)serviceManagerClientInterface;	// IMP=0x000000000004ad01
+ (id)xpcManagerInterface;	// IMP=0x000000000004acf0
+ (void)initialize;	// IMP=0x000000000004a582
- (void).cxx_destruct;	// IMP=0x000000000004c6ca
@property(retain) NSMutableArray *observers; // @synthesize observers=_observers;
@property _Bool interrupted; // @synthesize interrupted=_interrupted;
@property int listenerResumedToken; // @synthesize listenerResumedToken=_listenerResumedToken;
@property(retain) NSObject<OS_dispatch_queue> *xpcSetupQueue; // @synthesize xpcSetupQueue=_xpcSetupQueue;
@property(getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)appleAccountSignedOut;	// IMP=0x000000000004c4f4
- (void)appleAccountSignedIn;	// IMP=0x000000000004c3c1
- (void)removeDedicatedCellularBearerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c17d
- (void)addDedicatedCellularBearer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bfbd
- (void)unlockManagerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bd6a
- (void)streamsForMessage:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ba97
- (void)serviceManagerProxyForIdentifier:(id)arg1 client:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b87b
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000004b7ff
- (void)registerObserver:(id)arg1;	// IMP=0x000000000004b76b
- (void)notifyOfInvalidation;	// IMP=0x000000000004b5ca
- (void)notifyOfResume;	// IMP=0x000000000004b429
- (void)notifyOfInterruption;	// IMP=0x000000000004b2ab
- (void)setupConnection;	// IMP=0x000000000004af7b
- (void)dealloc;	// IMP=0x000000000004af39
- (id)init;	// IMP=0x000000000004ad99

@end

