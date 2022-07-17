//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RBSAssertion, RBSProcessHandle;
@protocol OS_dispatch_queue, PPLPeopleAppLauncherDelegate;

@interface PPLPeopleAppLauncher : NSObject
{
    id <PPLPeopleAppLauncherDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    RBSProcessHandle *_peopleAppProcessHandle;	// 24 = 0x18
    RBSAssertion *_initializationAssertion;	// 32 = 0x20
}

+ (id)sharedLauncher;	// IMP=0x0000000000002760
- (void).cxx_destruct;	// IMP=0x0000000000002f71
@property(retain, nonatomic) RBSAssertion *initializationAssertion; // @synthesize initializationAssertion=_initializationAssertion;
@property(retain, nonatomic) RBSProcessHandle *peopleAppProcessHandle; // @synthesize peopleAppProcessHandle=_peopleAppProcessHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <PPLPeopleAppLauncherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)launchPeopleAppIfNeededWithForegroundPriority:(_Bool)arg1;	// IMP=0x000000000000287d
- (id)init;	// IMP=0x00000000000027f9

@end
