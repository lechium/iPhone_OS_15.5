//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BBObserverDelegate-Protocol.h>

@class BBObserver, NSString;

@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate>
{
    BBObserver *_bbObserver;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000004d14c7
- (void).cxx_destruct;	// IMP=0x00000000004d1a40
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x00000000004d1634
- (id)init;	// IMP=0x00000000004d154c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

