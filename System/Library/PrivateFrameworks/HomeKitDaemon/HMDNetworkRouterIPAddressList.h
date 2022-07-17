//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterIPAddressList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_addresses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e8bad
- (void).cxx_destruct;	// IMP=0x00000000004e8b9d
@property(retain, nonatomic) NSMutableArray *addresses; // @synthesize addresses=_addresses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e89df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e8976
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004e8664
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e82f1
- (id)initWithAddresses:(id)arg1;	// IMP=0x00000000004e8286
- (id)init;	// IMP=0x00000000004e8257

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
