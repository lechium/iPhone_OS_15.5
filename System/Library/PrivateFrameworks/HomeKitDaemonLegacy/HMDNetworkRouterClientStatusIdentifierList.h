//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientStatusIdentifierList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_clientStatusIdentifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000049dea0
- (void).cxx_destruct;	// IMP=0x000000000049cf87
@property(retain, nonatomic) NSMutableArray *clientStatusIdentifiers; // @synthesize clientStatusIdentifiers=_clientStatusIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000049cdc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000049cd60
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000049ca4e
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000049c6db
- (id)initWithClientStatusIdentifiers:(id)arg1;	// IMP=0x000000000049c670
- (id)init;	// IMP=0x000000000049c641

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
