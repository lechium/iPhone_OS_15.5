//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface __HMFLocationAuthorizationRequest <HMFLogging>
{
    _Bool _requested;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000022cfc
@property(readonly) long long type; // @synthesize type=_type;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000022abc
- (void)main;	// IMP=0x00000000000226f1
- (void)dealloc;	// IMP=0x0000000000022654
- (id)initWithType:(long long)arg1 authorization:(id)arg2;	// IMP=0x00000000000225d9
- (id)initWithType:(long long)arg1;	// IMP=0x000000000002257a
- (id)initWithAuthorization:(id)arg1;	// IMP=0x0000000000022537
- (id)initWithTimeout:(double)arg1;	// IMP=0x00000000000224f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

