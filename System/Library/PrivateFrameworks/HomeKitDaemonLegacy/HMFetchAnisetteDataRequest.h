//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMFetchAnisetteDataRequest <HMRemoteLoginMessageProtocol>
{
    _Bool _shouldProvision;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000005fe79
+ (id)messageName;	// IMP=0x000000000005fe6c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005fe64
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000005fccd
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000005fb58
@property(nonatomic) _Bool shouldProvision; // @synthesize shouldProvision=_shouldProvision;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005fabf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005fa39
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

