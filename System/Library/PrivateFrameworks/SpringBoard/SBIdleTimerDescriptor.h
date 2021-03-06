//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>

@class NSString;

@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying>
{
    long long _timerMode;	// 8 = 0x8
    double _sampleInterval;	// 16 = 0x10
    double _warnInterval;	// 24 = 0x18
    double _totalInterval;	// 32 = 0x20
    double _quickUnwarnInterval;	// 40 = 0x28
}

@property(nonatomic) double quickUnwarnInterval; // @synthesize quickUnwarnInterval=_quickUnwarnInterval;
@property(nonatomic) double totalInterval; // @synthesize totalInterval=_totalInterval;
@property(nonatomic) double warnInterval; // @synthesize warnInterval=_warnInterval;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(nonatomic) long long timerMode; // @synthesize timerMode=_timerMode;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000004e054c
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000004e04fc
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003faa7
- (id)succinctDescription;	// IMP=0x000000000003fa57
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003edf4
@property(readonly, nonatomic) _Bool shouldExpireAfterWarn;
@property(readonly, nonatomic) _Bool shouldWarn;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e02cb
- (id)initWithTimerMode:(long long)arg1 warnInterval:(double)arg2 totalInterval:(double)arg3;	// IMP=0x000000000003c34e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

