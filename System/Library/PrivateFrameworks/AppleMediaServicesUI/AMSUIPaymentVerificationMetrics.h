//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSUIPaymentVerificationMetrics : NSObject
{
    NSString *_appID;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    NSString *_displayReason;	// 24 = 0x18
}

+ (id)_event;	// IMP=0x000000000004739c
+ (id)_metricsInstanceWithBag:(id)arg1;	// IMP=0x0000000000047348
- (void).cxx_destruct;	// IMP=0x0000000000047855
@property(retain, nonatomic) NSString *displayReason; // @synthesize displayReason=_displayReason;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)_propertiesWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3;	// IMP=0x00000000000475ae
- (id)_propertiesWithPageId:(id)arg1 displayReason:(id)arg2;	// IMP=0x00000000000473cc
- (void)flushEvents;	// IMP=0x00000000000472c6
- (void)enqueueEventWithTargetId:(id)arg1 pageId:(id)arg2 displayReason:(id)arg3;	// IMP=0x000000000004717b
- (void)enqueueEventWithPageId:(id)arg1 displayReason:(id)arg2;	// IMP=0x0000000000047051
- (id)initWithBag:(id)arg1 appID:(id)arg2;	// IMP=0x0000000000046fb8

@end

