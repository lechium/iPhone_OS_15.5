//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CMCallHandednessDelegate, OS_dispatch_queue;

@interface CMCallHandednessManager : NSObject
{
    NSObject<OS_dispatch_queue> *fPrivateQueue;	// 8 = 0x8
    struct Dispatcher *fDispatcher;	// 16 = 0x10
    id <CMCallHandednessDelegate> _delegate;	// 24 = 0x18
}

+ (_Bool)isCallHandednessAvailable;	// IMP=0x0000000000109a1f
@property(nonatomic) id <CMCallHandednessDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCallHandednessStateUpdated:(const Sample_9e52e243 *)arg1;	// IMP=0x0000000000109a2c
- (void)dealloc;	// IMP=0x000000000010992d
- (void)stopCallHandednessUpdates;	// IMP=0x000000000010966a
- (void)startCallHandednessUpdates;	// IMP=0x00000000001093ad
- (id)init;	// IMP=0x00000000001092f2

@end

