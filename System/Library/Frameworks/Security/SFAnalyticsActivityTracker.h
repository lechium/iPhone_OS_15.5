//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface SFAnalyticsActivityTracker : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    Class _clientClass;	// 24 = 0x18
    unsigned long long _start;	// 32 = 0x20
    _Bool _canceled;	// 40 = 0x28
    NSNumber *_measurement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000015f0b
@property(retain) NSNumber *measurement; // @synthesize measurement=_measurement;
- (void)dealloc;	// IMP=0x0000000000015e4d
- (void)cancel;	// IMP=0x0000000000015e43
- (void)stopWithEvent:(id)arg1 result:(id)arg2;	// IMP=0x0000000000015da8
- (void)stop;	// IMP=0x0000000000015c62
- (void)start;	// IMP=0x0000000000015bcf
- (void)performAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015b1f
- (id)initWithName:(id)arg1 clientClass:(Class)arg2;	// IMP=0x0000000000015996

@end
