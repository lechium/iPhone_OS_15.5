//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMSyncAnisetteDataResponse <HMRemoteLoginMessageProtocol>
{
    _Bool _didSucceed;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x000000000005ee46
+ (id)messageName;	// IMP=0x000000000005ee39
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005ee31
+ (id)objWithMessage:(id)arg1;	// IMP=0x000000000005ec9a
+ (id)objWithDict:(id)arg1;	// IMP=0x000000000005eb25
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005ea8c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005ea06
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

