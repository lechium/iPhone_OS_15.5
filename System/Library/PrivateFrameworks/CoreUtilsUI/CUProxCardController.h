//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtilsUI/CUActivatable-Protocol.h>
#import <CoreUtilsUI/CUUIEnvironmentable-Protocol.h>

@class CUNavigationController, CUUIEnvironment, UIWindow;
@protocol OS_dispatch_queue;

@interface CUProxCardController : NSObject <CUActivatable, CUUIEnvironmentable>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_uiQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    CDUnknownBlockType _invalidationHandler;	// 32 = 0x20
    CUUIEnvironment *_environment;	// 40 = 0x28
    CUNavigationController *_navigationController;	// 48 = 0x30
    UIWindow *_window;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000001ee9
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) CUNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) CUUIEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_invalidated;	// IMP=0x0000000000001e0e
- (void)_invalidate;	// IMP=0x0000000000001df0
- (void)invalidate;	// IMP=0x0000000000001da5
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001b81
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001af6
- (id)init;	// IMP=0x0000000000001a79

@end

