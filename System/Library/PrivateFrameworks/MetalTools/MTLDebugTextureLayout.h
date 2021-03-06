//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLDebugDevice, MTLTextureDescriptor;

@interface MTLDebugTextureLayout
{
    MTLDebugDevice *_debugDevice;	// 40 = 0x28
    MTLTextureDescriptor *_descriptor;	// 48 = 0x30
}

@property(readonly, copy, nonatomic) MTLTextureDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) MTLDebugDevice *debugDevice; // @synthesize debugDevice=_debugDevice;
- (void)dealloc;	// IMP=0x00000000000a6066
- (id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3;	// IMP=0x00000000000a5ff3

@end

