//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface CNQualityOfServiceSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;	// 8 = 0x8
    unsigned long long _qualityOfService;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019e08
@property(readonly, nonatomic) unsigned long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x0000000000019d11
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019c75
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000019bec
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019b62
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000019aea
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019a72
- (id)initWithScheduler:(id)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x00000000000199e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
