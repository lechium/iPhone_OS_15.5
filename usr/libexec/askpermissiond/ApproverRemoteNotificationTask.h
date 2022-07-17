//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSDictionary, NSString;

@interface ApproverRemoteNotificationTask : AMSTask
{
    NSDictionary *_payload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000062b8
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void)_presentRequest:(id)arg1;	// IMP=0x001000000000622f
- (id)_requestFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000056fa
- (id)_approvalRequestFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000005608
- (id)_serverRequestWithError:(id *)arg1;	// IMP=0x00100000000051d9
- (id)_requestWithError:(id *)arg1;	// IMP=0x0010000000004f0d
- (id)_approvalRequestWithError:(id *)arg1;	// IMP=0x0010000000004c41
- (id)perform;	// IMP=0x001000000000458f
@property(readonly, nonatomic) NSString *requestIdentifier;
@property(readonly, nonatomic) long long requestStatus;
- (id)initWithPayload:(id)arg1;	// IMP=0x00100000000043f5

@end
