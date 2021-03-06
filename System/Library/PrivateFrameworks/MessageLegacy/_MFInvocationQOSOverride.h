//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MFInvocationQOSOverride : NSObject
{
    struct pthread_override_s *_override;	// 8 = 0x8
    _Bool _lowPriority;	// 16 = 0x10
    unsigned int _desiredQoS;	// 20 = 0x14
    struct _opaque_pthread_t *_pthread;	// 24 = 0x18
}

@property(readonly, nonatomic) struct _opaque_pthread_t *pthread; // @synthesize pthread=_pthread;
@property(readonly, nonatomic) unsigned int desiredQoS; // @synthesize desiredQoS=_desiredQoS;
@property(readonly, nonatomic, getter=isLowPriority) _Bool lowPriority; // @synthesize lowPriority=_lowPriority;
- (_Bool)removeOverride;	// IMP=0x0000000000018879
- (void)applyOverrideWhileForeground:(_Bool)arg1;	// IMP=0x00000000000187cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018761
- (unsigned long long)hash;	// IMP=0x000000000001874f
- (void)dealloc;	// IMP=0x0000000000018711
- (id)initWithPthread:(struct _opaque_pthread_t *)arg1 desiredQoS:(unsigned int)arg2 lowPriority:(_Bool)arg3;	// IMP=0x00000000000186be

@end

