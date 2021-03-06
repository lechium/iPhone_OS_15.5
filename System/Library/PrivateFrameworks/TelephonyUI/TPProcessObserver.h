//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor;
@protocol TPProcessObserverDelegate;

__attribute__((visibility("hidden")))
@interface TPProcessObserver : NSObject
{
    _Bool _cachedApplicationRunning;	// 8 = 0x8
    id <TPProcessObserverDelegate> _delegate;	// 16 = 0x10
    BKSApplicationStateMonitor *_applicationMonitor;	// 24 = 0x18
}

+ (_Bool)isApplicationStateRunning:(unsigned int)arg1;	// IMP=0x000000000000e53e
- (void).cxx_destruct;	// IMP=0x000000000000e587
@property(nonatomic) _Bool cachedApplicationRunning; // @synthesize cachedApplicationRunning=_cachedApplicationRunning;
@property(readonly, nonatomic) BKSApplicationStateMonitor *applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(nonatomic) __weak id <TPProcessObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)applicationMonitorStateDidChangeForBundleIdentifier:(id)arg1;	// IMP=0x000000000000e295
- (void)dealloc;	// IMP=0x000000000000e22a
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000000e006

@end

