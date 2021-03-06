//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol RBClientInheritanceManagerDelegate;

@interface RBClientInheritanceManager : NSObject
{
    NSMutableSet *_inheritances;	// 8 = 0x8
    NSMutableSet *_queuedGainedInheritances;	// 16 = 0x10
    NSMutableSet *_queuedLostInheritances;	// 24 = 0x18
    _Bool _awaitingAck;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 36 = 0x24
    id <RBClientInheritanceManagerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005aa70
@property(readonly, nonatomic) __weak id <RBClientInheritanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x000000000005a6c8
- (void)setInheritances:(id)arg1;	// IMP=0x000000000005a359
- (id)init;	// IMP=0x000000000005a2d2
- (id)initWithInheritances:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000005a1ff

@end

