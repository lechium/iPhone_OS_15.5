//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;
@protocol HKDataFlowLinkProcessor, OS_os_log;

@interface HKDataFlowLink : NSObject
{
    NSHashTable *_sources;	// 8 = 0x8
    NSHashTable *_destinations;	// 16 = 0x10
    NSObject<OS_os_log> *_category;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    id <HKDataFlowLinkProcessor> _processor;	// 40 = 0x28
    Protocol *_sourceProtocol;	// 48 = 0x30
    Protocol *_destinationProtocol;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000012336e
@property(readonly, nonatomic) Protocol *destinationProtocol; // @synthesize destinationProtocol=_destinationProtocol;
@property(readonly, nonatomic) Protocol *sourceProtocol; // @synthesize sourceProtocol=_sourceProtocol;
@property(readonly, nonatomic) __weak id <HKDataFlowLinkProcessor> processor; // @synthesize processor=_processor;
- (id)description;	// IMP=0x00000000001232df
- (void)destination:(id)arg1 didAddDownstreamDestination:(id)arg2;	// IMP=0x000000000012324d
- (void)removeDestination:(id)arg1;	// IMP=0x0000000000123179
- (void)addDestination:(id)arg1;	// IMP=0x0000000000122ea3
- (void)sendToDestinationProcessors:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122cf6
- (id)destinationProcessorsConformingToProtocol:(id)arg1;	// IMP=0x00000000001229f2
- (id)allDestinationProcessors;	// IMP=0x0000000000122962
- (id)allSourceProcessors;	// IMP=0x00000000001228d2
- (void)source:(id)arg1 didAddUpstreamSource:(id)arg2;	// IMP=0x0000000000122840
- (void)removeSource:(id)arg1;	// IMP=0x0000000000122759
- (void)addSource:(id)arg1;	// IMP=0x00000000001223e3
- (id)initWithProcessor:(id)arg1 sourceProtocol:(id)arg2 destinationProtocol:(id)arg3 loggingCategory:(id)arg4;	// IMP=0x00000000001222a7

@end

