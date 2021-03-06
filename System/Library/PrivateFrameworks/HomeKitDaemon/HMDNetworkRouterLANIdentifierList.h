//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterLANIdentifierList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_identifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d9cd2
- (void).cxx_destruct;	// IMP=0x00000000004d9cc2
@property(retain, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d9b04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d9a9b
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004d9789
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d9416
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x00000000004d93ab
- (id)init;	// IMP=0x00000000004d937c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

