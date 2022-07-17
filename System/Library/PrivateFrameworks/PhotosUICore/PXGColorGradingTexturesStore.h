//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, PXGColorLookupCube;
@protocol MTLDevice, OS_dispatch_queue;

@interface PXGColorGradingTexturesStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSCache *_cachedTextures;	// 16 = 0x10
    PXGColorLookupCube *_placeholderCube;	// 24 = 0x18
    id <MTLDevice> _device;	// 32 = 0x20
}

+ (id)colorGradingTextureStoreForDevice:(id)arg1;	// IMP=0x0000000000625e08
- (void).cxx_destruct;	// IMP=0x0000000000625d21
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (void)_createPlaceholderCube;	// IMP=0x0000000000625c2f
- (id)colorGradingTextureWithColorLookupCube:(id)arg1;	// IMP=0x0000000000625a4a
- (id)initWithMetalDevice:(id)arg1;	// IMP=0x00000000006258f2
- (id)init;	// IMP=0x0000000000625878

@end
