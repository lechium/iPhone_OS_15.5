//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/TSDRepDirectLayerHostProvider-Protocol.h>

@class CALayer, NSString;

@interface SXTangierRepDirectLayerHostProvider : NSObject <TSDRepDirectLayerHostProvider>
{
    CALayer *_aboveRepsLayerHost;	// 8 = 0x8
    CALayer *_underRepsLayerHost;	// 16 = 0x10
    CALayer *_overlayLayerHost;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004f4bc
@property(retain, nonatomic) CALayer *overlayLayerHost; // @synthesize overlayLayerHost=_overlayLayerHost;
@property(retain, nonatomic) CALayer *underRepsLayerHost; // @synthesize underRepsLayerHost=_underRepsLayerHost;
@property(retain, nonatomic) CALayer *aboveRepsLayerHost; // @synthesize aboveRepsLayerHost=_aboveRepsLayerHost;
- (void)directLayerHostUpdateRepOverlayLayers:(id)arg1;	// IMP=0x000000000004f3a5
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)arg1;	// IMP=0x000000000004f2df
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)arg1;	// IMP=0x000000000004f219
- (id)directLayerHostForRep:(id)arg1;	// IMP=0x000000000004f197

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
