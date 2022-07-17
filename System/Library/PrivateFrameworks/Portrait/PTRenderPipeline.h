//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PTRenderPipelineDescriptor;
@protocol MTLDeviceSPI;

@interface PTRenderPipeline : NSObject
{
    PTRenderPipelineDescriptor *_descriptor;	// 8 = 0x8
    id <MTLDeviceSPI> _device;	// 16 = 0x10
    unsigned long long _activeVersion;	// 24 = 0x18
    NSString *_description;	// 32 = 0x20
}

+ (int)prewarmForMediaserverd;	// IMP=0x000000000006947a
+ (int)prewarmWithDescriptor:(id)arg1;	// IMP=0x0000000000069228
+ (unsigned long long)latestVersion;	// IMP=0x0000000000069209
+ (_Bool)isRenderVersionSupported:(unsigned long long)arg1;	// IMP=0x00000000000691e9
+ (_Bool)isMetalDeviceSupported:(id)arg1;	// IMP=0x0000000000069191
- (void).cxx_destruct;	// IMP=0x00000000000699b2
- (void)setResourceHeap:(id)arg1;	// IMP=0x0000000000069971
- (unsigned long long)minimumResourceHeapSize;	// IMP=0x000000000006992e
- (int)encodeRenderTo:(id)arg1 withRenderRequest:(id)arg2;	// IMP=0x00000000000698a1
- (id)createRenderStateWithQuality:(int)arg1;	// IMP=0x0000000000069865
- (void)prewarm;	// IMP=0x00000000000697ac
- (void)setActiveVersion:(unsigned long long)arg1;	// IMP=0x000000000006921e
@property(readonly) unsigned long long activeVersion;
- (id)initWithDescriptor:(id)arg1;	// IMP=0x0000000000068de2
- (id)description;	// IMP=0x0000000000068dd4

@end
