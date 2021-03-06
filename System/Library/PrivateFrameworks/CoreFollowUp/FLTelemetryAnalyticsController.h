//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLTelemetryController-Protocol.h>

@class NSString;

@interface FLTelemetryAnalyticsController : NSObject <FLTelemetryController>
{
}

- (void)_captureItem:(id)arg1 event:(id)arg2 source:(id)arg3;	// IMP=0x0000000000007c05
- (void)captureItemRemoval:(id)arg1;	// IMP=0x0000000000007be5
- (void)captureItemView:(id)arg1;	// IMP=0x0000000000007bc5
- (void)captureItemAddition:(id)arg1;	// IMP=0x0000000000007ba5
- (void)captureCurrentState:(id)arg1;	// IMP=0x0000000000007802
- (void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3;	// IMP=0x0000000000007716

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

