//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol MTLTexture, OS_dispatch_queue;

@interface CLKUIMetalAtlas
{
    id <MTLTexture> _texture;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_loaderQueue;	// 16 = 0x10
    id <MTLTexture> _loaderQueue_prewarmedTexture;	// 24 = 0x18
    unsigned long long _mainQueue_prewarmState;	// 32 = 0x20
}

+ (id)_createMTLTextureWithBacking:(id)arg1 device:(id)arg2 encoder:(id)arg3;	// IMP=0x000000000001a506
- (void).cxx_destruct;	// IMP=0x000000000001b8b4
- (void)purge;	// IMP=0x000000000001b69c
- (void)bind:(id)arg1 slot:(unsigned long long)arg2;	// IMP=0x000000000001b147
- (void)prewarm;	// IMP=0x000000000001aae3
- (void)dealloc;	// IMP=0x000000000001a45e
- (id)initWithUuid:(id)arg1;	// IMP=0x000000000001a41b

@end
