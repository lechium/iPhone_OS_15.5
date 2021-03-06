//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANStatusList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_statuses;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ed166
- (void).cxx_destruct;	// IMP=0x00000000004ed156
@property(retain, nonatomic) NSMutableArray *statuses; // @synthesize statuses=_statuses;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004ecf98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004ecf2f
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004ecc1d
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ec8aa
- (id)initWithStatuses:(id)arg1;	// IMP=0x00000000004ec83f
- (id)init;	// IMP=0x00000000004ec810

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

