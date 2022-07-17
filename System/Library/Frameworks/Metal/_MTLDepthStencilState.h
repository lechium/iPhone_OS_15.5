//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLDepthStencilStateSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI>
{
    id <MTLDevice> _device;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

@property(readonly) NSString *label; // @synthesize label=_label;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) _Bool writesStencil;
@property(readonly) _Bool readsStencil;
@property(readonly) _Bool writesDepth;
@property(readonly) _Bool readsDepth;
@property(readonly, copy) NSString *description;
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000ae67f
- (void)dealloc;	// IMP=0x00000000000ae635
- (id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2;	// IMP=0x00000000000ae2e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
