//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsPredictor-Protocol.h>

@class MapsSuggestionsSignalPackCache, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_closeTimer;	// 24 = 0x18
    MapsSuggestionsSignalPackCache *_signalPackCache;	// 32 = 0x20
    int _tempPredictedTransportMode;	// 40 = 0x28
}

+ (id)sharedPredictor;	// IMP=0x0000000000096283
- (void).cxx_destruct;	// IMP=0x000000000009bf13
@property(readonly, nonatomic) NSString *uniqueName;
- (void)cancelCapturingAnalytics;	// IMP=0x000000000009b46a
- (void)capturePredictedTransportationMode:(int)arg1;	// IMP=0x000000000009b27f
- (void)captureActualTransportationMode:(int)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3;	// IMP=0x0000000000098e2c
- (_Bool)predictedTransportModeForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000097e70
- (void)storeSignalPack:(id)arg1 forMapItem:(id)arg2 andEntry:(id)arg3;	// IMP=0x0000000000097c49
- (_Bool)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000009680a
- (void)dealloc;	// IMP=0x0000000000096446
- (id)init;	// IMP=0x00000000000962d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

