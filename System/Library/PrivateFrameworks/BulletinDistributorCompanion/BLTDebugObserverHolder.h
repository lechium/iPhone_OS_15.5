//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/BBObserverDelegate-Protocol.h>

@class BBObserver, NSString;
@protocol BLTDebugObserverWatchKitAppList;

@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;	// 8 = 0x8
    id <BLTDebugObserverWatchKitAppList> _wkAppList;	// 16 = 0x10
}

+ (void)startWithWKAppList:(id)arg1;	// IMP=0x0000000000019eb5
- (void).cxx_destruct;	// IMP=0x000000000001a404
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001a0f1
- (void)dealloc;	// IMP=0x000000000001a0af
- (id)initWithWKAppList:(id)arg1;	// IMP=0x0000000000019fd5
- (id)init;	// IMP=0x0000000000019fc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
