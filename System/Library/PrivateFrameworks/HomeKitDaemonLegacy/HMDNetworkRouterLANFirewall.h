//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSString;

@interface HMDNetworkRouterLANFirewall : NSObject <NSCopying, HAPTLVProtocol>
{
    long long _type;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000481baf
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000481a87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000481a36
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000481a1c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004818c0
- (id)initWithType:(long long)arg1;	// IMP=0x0000000000481883
- (id)init;	// IMP=0x0000000000481847

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

