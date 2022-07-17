//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject
{
    FTCServiceMonitor *_monitor;	// 8 = 0x8
    NSMutableSet *_listeners;	// 16 = 0x10
}

@property(readonly, retain, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) FTCServiceMonitor *monitor; // @synthesize monitor=_monitor;
- (_Bool)removeListenerID:(id)arg1;	// IMP=0x0000000000002b03
- (_Bool)addListenerID:(id)arg1;	// IMP=0x0000000000002abd
- (_Bool)hasListenerID:(id)arg1;	// IMP=0x0000000000002a9e
- (void)dealloc;	// IMP=0x0000000000002a54
- (id)initWithServiceType:(long long)arg1;	// IMP=0x00000000000029de

@end
