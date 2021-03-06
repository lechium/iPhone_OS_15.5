//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientControlResponse : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_operationResponses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e6975
- (void).cxx_destruct;	// IMP=0x00000000004e6965
@property(retain, nonatomic) NSMutableArray *operationResponses; // @synthesize operationResponses=_operationResponses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e67a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e673e
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004e642c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e60b9
- (id)initWithOperationResponses:(id)arg1;	// IMP=0x00000000004e604e
- (id)init;	// IMP=0x00000000004e601f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

