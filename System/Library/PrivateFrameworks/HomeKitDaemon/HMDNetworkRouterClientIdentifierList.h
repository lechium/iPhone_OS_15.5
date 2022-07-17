//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterClientIdentifierList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_clientIdentifiers;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d1e60
- (void).cxx_destruct;	// IMP=0x00000000004d1e50
@property(retain, nonatomic) NSMutableArray *clientIdentifiers; // @synthesize clientIdentifiers=_clientIdentifiers;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d1c92
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d1c29
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004d1917
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d15a4
- (id)initWithClientIdentifiers:(id)arg1;	// IMP=0x00000000004d1539
- (id)init;	// IMP=0x00000000004d150a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
