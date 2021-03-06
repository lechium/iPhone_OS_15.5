//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterRuleDirection : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _direction;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004823d5
+ (id)directionFromLANDirection:(unsigned char)arg1;	// IMP=0x00000000004202ee
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004822ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048225c
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000482242
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004820e6
- (id)initWithDirection:(long long)arg1;	// IMP=0x00000000004820a9
- (id)init;	// IMP=0x000000000048206d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

