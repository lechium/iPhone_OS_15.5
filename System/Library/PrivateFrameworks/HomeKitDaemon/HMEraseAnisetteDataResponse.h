//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMEraseAnisetteDataResponse <HMRemoteLoginMessageProtocol>
{
    _Bool _didSucceed;	// 8 = 0x8
}

+ (id)xpcMessageName;	// IMP=0x0000000000061924
+ (id)messageName;	// IMP=0x0000000000061917
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006190f
+ (id)objWithMessage:(id)arg1;	// IMP=0x0000000000061778
+ (id)objWithDict:(id)arg1;	// IMP=0x0000000000061603
@property(nonatomic) _Bool didSucceed; // @synthesize didSucceed=_didSucceed;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006156a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000614e4
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
