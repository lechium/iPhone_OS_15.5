//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterIPAddressList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_addresses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000049b995
- (void).cxx_destruct;	// IMP=0x000000000049b985
@property(retain, nonatomic) NSMutableArray *addresses; // @synthesize addresses=_addresses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000049b7c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049b75e
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000049b44c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000049b0d9
- (id)initWithAddresses:(id)arg1;	// IMP=0x000000000049b06e
- (id)init;	// IMP=0x000000000049b03f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

