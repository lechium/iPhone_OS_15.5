//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>

@class NSString;

@interface SBFTraitsArbitrationDeviceOrientationInputs : NSObject <NSCopying, BSDescriptionProviding>
{
    long long _bksCurrentDeviceOrientation;	// 8 = 0x8
    long long _bksNonFlatDeviceOrientation;	// 16 = 0x10
    long long _bksRawDeviceOrientation;	// 24 = 0x18
}

@property(readonly, nonatomic) long long bksRawDeviceOrientation; // @synthesize bksRawDeviceOrientation=_bksRawDeviceOrientation;
@property(readonly, nonatomic) long long bksNonFlatDeviceOrientation; // @synthesize bksNonFlatDeviceOrientation=_bksNonFlatDeviceOrientation;
@property(readonly, nonatomic) long long bksCurrentDeviceOrientation; // @synthesize bksCurrentDeviceOrientation=_bksCurrentDeviceOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000082f6
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000082a6
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000008110
- (id)succinctDescription;	// IMP=0x00000000000080c0
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000080a3
- (id)initWithCurrentDeviceOrientation:(long long)arg1 nonFlatDeviceOrientation:(long long)arg2 rawDeviceOrientation:(long long)arg3;	// IMP=0x0000000000008050

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
