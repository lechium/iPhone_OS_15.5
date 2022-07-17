//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/MTPerfBaseMeasurementTransformation-Protocol.h>

@class NSString;
@protocol MTFlexiblePerfEventHandlerDelegate;

@interface MTFlexiblePerfEventHandler <MTPerfBaseMeasurementTransformation>
{
}

- (id)xpSamplingPercentage:(id)arg1;	// IMP=0x0000000000044f04
- (_Bool)mtIncludeBaseFields;	// IMP=0x0000000000044e6e
- (id)knownFields;	// IMP=0x0000000000044d0b
- (id)metricsDataWithEventType:(id)arg1 eventData:(id)arg2;	// IMP=0x0000000000044c18
- (id)metricsDataWithPerfMeasurement:(id)arg1;	// IMP=0x0000000000029665

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTFlexiblePerfEventHandlerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
