//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HMDNetworkRouterIPAddress : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_v4;	// 8 = 0x8
    NSData *_v6;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d92d1
+ (id)ipAddressFromRuleAddress:(id)arg1 allowWildcard:(_Bool)arg2;	// IMP=0x00000000004660a7
+ (id)ipAddressFromNetAddress:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000465fc1
- (void).cxx_destruct;	// IMP=0x00000000004d92a9
@property(retain, nonatomic) NSData *v6; // @synthesize v6=_v6;
@property(retain, nonatomic) NSData *v4; // @synthesize v4=_v4;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d8fbb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d8f2d
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004d8c4b
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d8843
- (id)initWithV4:(id)arg1 v6:(id)arg2;	// IMP=0x00000000004d87aa
- (id)init;	// IMP=0x00000000004d877b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

