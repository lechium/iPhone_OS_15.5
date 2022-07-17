//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ADPeerLocationPolicyDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADPeerLocationPolicy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timerSource;	// 16 = 0x10
    id <ADPeerLocationPolicyDelegate> _delegate;	// 24 = 0x18
    double _allowedTimelimit;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001b247c
@property(nonatomic) double allowedTimelimit; // @synthesize allowedTimelimit=_allowedTimelimit;
@property(nonatomic) __weak id <ADPeerLocationPolicyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_resetTimer;	// IMP=0x00100000001b22da
- (void)_cancelTimer;	// IMP=0x00100000001b22a4
- (void)locationPeerDidChange;	// IMP=0x00100000001b2203
- (void)locationDataWasRecievedFromPeer;	// IMP=0x00100000001b21a2
- (id)init;	// IMP=0x00100000001b210b

@end
