//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKStrokeRenderCache-Protocol.h>

@class NSMutableArray, NSString;

@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache>
{
    NSMutableArray *_buffers;	// 8 = 0x8
    unsigned long long _totalCost;	// 16 = 0x10
    _Bool _purgeableBuffers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b738c
- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;	// IMP=0x00000000001b70c4
- (_Bool)isCompatibleWithInk:(id)arg1;	// IMP=0x00000000001b70bc
- (_Bool)needsCompute;	// IMP=0x00000000001b70b4
- (unsigned long long)cacheCost;	// IMP=0x00000000001b70aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
