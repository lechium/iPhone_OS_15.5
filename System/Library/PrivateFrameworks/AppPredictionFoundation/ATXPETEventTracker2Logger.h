//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionFoundation/ATXPETEventTracker2Protocol-Protocol.h>

@interface ATXPETEventTracker2Logger : NSObject <ATXPETEventTracker2Protocol>
{
}

- (void)trackDistributionForMessage:(id)arg1 value:(double)arg2;	// IMP=0x00000000000077f4
- (void)trackScalarForMessage:(id)arg1 count:(int)arg2;	// IMP=0x0000000000007778
- (void)trackScalarForMessage:(id)arg1;	// IMP=0x0000000000007702
- (void)logMessage:(id)arg1;	// IMP=0x000000000000768c

@end

