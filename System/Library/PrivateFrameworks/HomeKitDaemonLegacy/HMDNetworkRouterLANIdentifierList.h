//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterLANIdentifierList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_identifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000048caba
- (void).cxx_destruct;	// IMP=0x000000000048caaa
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000048c8ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048c883
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000048c571
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000048c1fe
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x000000000048c193
- (id)init;	// IMP=0x000000000048c164

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
