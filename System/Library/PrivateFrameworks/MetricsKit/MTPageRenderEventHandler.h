//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/MTPerfBaseMeasurementTransformation-Protocol.h>

@class NSString;
@protocol MTPageRenderEventHandlerDelegate;

@interface MTPageRenderEventHandler <MTPerfBaseMeasurementTransformation>
{
}

- (id)xpSamplingPercentageUsers:(id)arg1;	// IMP=0x0000000000023acc
- (id)xpSessionDuration:(id)arg1;	// IMP=0x0000000000023888
- (id)eventVersion:(id)arg1;	// IMP=0x0000000000023826
- (id)eventType;	// IMP=0x00000000000237c0
- (id)knownFields;	// IMP=0x0000000000023505
- (id)metricsDataWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;	// IMP=0x000000000002341f
- (id)metricsDataWithPerfMeasurement:(id)arg1;	// IMP=0x000000000003b826

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MTPageRenderEventHandlerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

