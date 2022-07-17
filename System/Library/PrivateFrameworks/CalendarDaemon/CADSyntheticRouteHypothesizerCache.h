//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CADSyntheticRouteHypothesizerCache : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSMutableDictionary *_eventExternalURLToSyntheticRouteHypothesizerMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000004787d
- (void).cxx_destruct;	// IMP=0x0000000000047e2f
@property(readonly, nonatomic) NSMutableDictionary *eventExternalURLToSyntheticRouteHypothesizerMap; // @synthesize eventExternalURLToSyntheticRouteHypothesizerMap=_eventExternalURLToSyntheticRouteHypothesizerMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg1;	// IMP=0x0000000000047d16
- (void)addSyntheticRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2;	// IMP=0x0000000000047b8a
- (id)syntheticRouteHypothesizerForEventExternalURL:(id)arg1;	// IMP=0x00000000000479b7
- (id)_init;	// IMP=0x000000000004791e

@end
