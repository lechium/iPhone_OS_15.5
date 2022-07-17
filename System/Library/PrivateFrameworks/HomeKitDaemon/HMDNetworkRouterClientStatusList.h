//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientStatusList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_clientStatuses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ebb64
- (void).cxx_destruct;	// IMP=0x00000000004ebb54
@property(retain, nonatomic) NSMutableArray *clientStatuses; // @synthesize clientStatuses=_clientStatuses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004eb996
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004eb92d
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004eb61b
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004eb2a8
- (id)initWithClientStatuses:(id)arg1;	// IMP=0x00000000004eb23d
- (id)init;	// IMP=0x00000000004eb20e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
