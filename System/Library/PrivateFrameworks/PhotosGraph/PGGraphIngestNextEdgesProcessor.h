//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString, PGGraphBuilder;

@interface PGGraphIngestNextEdgesProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023642a
- (void)processNextEdgesWithSortedMomentNodes:(id)arg1 graph:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000235be1
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000023563d
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x000000000023556a
- (void)setGraphBuilder:(id)arg1;	// IMP=0x0000000000235559

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
