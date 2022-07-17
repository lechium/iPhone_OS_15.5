//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNRouteHypothesizer-Protocol.h>

@class CADRouteHypothesis, EKTravelEngineHypothesis, GEORouteHypothesizer, NSString;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer>
{
    CADRouteHypothesis *currentCADRouteHypothesis;	// 8 = 0x8
    GEORouteHypothesizer *_routeHypothesizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000016342
@property(readonly, nonatomic) GEORouteHypothesizer *routeHypothesizer; // @synthesize routeHypothesizer=_routeHypothesizer;
@property(retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis; // @synthesize currentCADRouteHypothesis;
- (void)didPostUINotification:(unsigned long long)arg1;	// IMP=0x00000000000162d1
- (void)stopHypothesizing;	// IMP=0x0000000000016294
- (void)requestRefresh;	// IMP=0x0000000000016257
- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000161e5
@property(readonly, nonatomic) CDUnknownBlockType updateHandler;
@property(readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property(readonly, nonatomic) unsigned long long state;
- (id)initWithRouteHypothesizer:(id)arg1;	// IMP=0x00000000000160ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
