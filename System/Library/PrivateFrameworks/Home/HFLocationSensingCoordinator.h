//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFLocationManagerObserver-Protocol.h>

@class HFLocationManagerDispatcher, NAFuture, NSString, NSUserDefaults;
@protocol HFLocationSensingCoordinatorDelegate;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver>
{
    int _defaultsChangedNotifyToken;	// 8 = 0x8
    id <HFLocationSensingCoordinatorDelegate> _delegate;	// 16 = 0x10
    NSUserDefaults *_defaults;	// 24 = 0x18
    HFLocationManagerDispatcher *_locationDispatcher;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002eb0e
@property(nonatomic) int defaultsChangedNotifyToken; // @synthesize defaultsChangedNotifyToken=_defaultsChangedNotifyToken;
@property(retain, nonatomic) HFLocationManagerDispatcher *locationDispatcher; // @synthesize locationDispatcher=_locationDispatcher;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) __weak id <HFLocationSensingCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_defaultsDidChange;	// IMP=0x000000000002e95f
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000000002e8a1
@property(nonatomic) _Bool homeSensingEnabled;
@property(readonly, nonatomic) NAFuture *locationSensingAvailableFuture;
- (void)dealloc;	// IMP=0x000000000002e57f
- (id)init;	// IMP=0x000000000002e56b
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000002e221

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
