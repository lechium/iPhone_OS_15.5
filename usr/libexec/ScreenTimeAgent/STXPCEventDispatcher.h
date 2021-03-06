//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface STXPCEventDispatcher : NSObject
{
    NSString *_stream;	// 8 = 0x8
    NSMutableDictionary *_eventObserversByIdentifier;	// 16 = 0x10
}

+ (id)distnotedEventDispatcher;	// IMP=0x00400000000a4324
+ (id)alarmEventDispatcher;	// IMP=0x00100000000a42b8
+ (id)notifydEventDispatcher;	// IMP=0x00100000000a424c
+ (void)installEventHandlers;	// IMP=0x00100000000a41fa
- (void).cxx_destruct;	// IMP=0x00200000000a487f
@property(readonly, nonatomic) NSMutableDictionary *eventObserversByIdentifier; // @synthesize eventObserversByIdentifier=_eventObserversByIdentifier;
@property(readonly, copy, nonatomic) NSString *stream; // @synthesize stream=_stream;
- (id)registerObserverWithIdentifier:(id)arg1;	// IMP=0x00100000000a471d
- (void)_handleEventStream:(id)arg1;	// IMP=0x00100000000a4550
- (id)initWithStream:(id)arg1;	// IMP=0x00100000000a4390

@end

