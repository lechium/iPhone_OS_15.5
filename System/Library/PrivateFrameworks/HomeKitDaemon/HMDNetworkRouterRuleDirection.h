//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterRuleDirection : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _direction;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004cf5ed
+ (id)directionFromLANDirection:(unsigned char)arg1;	// IMP=0x00000000004658f0
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cf4c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cf474
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004cf45a
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004cf2fe
- (id)initWithDirection:(long long)arg1;	// IMP=0x00000000004cf2c1
- (id)init;	// IMP=0x00000000004cf285

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
