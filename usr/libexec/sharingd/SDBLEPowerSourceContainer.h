//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, SFPowerSource;

__attribute__((visibility("hidden")))
@interface SDBLEPowerSourceContainer : NSObject
{
    struct LogCategory *_ucat;	// 8 = 0x8
    CUCoalescer *_powerSourceIdleCoalescer;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    SFPowerSource *_powerSource;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003b91f
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) SFPowerSource *powerSource; // @synthesize powerSource=_powerSource;
- (void)_invalidate;	// IMP=0x001000000003b78b
- (void)invalidate;	// IMP=0x001000000003b6f4
- (int)publish;	// IMP=0x001000000003b5a6
- (void)trigger;	// IMP=0x001000000003b4fc
- (id)description;	// IMP=0x001000000003b3e8
- (unsigned long long)hash;	// IMP=0x001000000003b3d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003b2db
- (void)dealloc;	// IMP=0x001000000003b202
- (id)initWithPowerSource:(id)arg1;	// IMP=0x001000000003aeaa

@end
