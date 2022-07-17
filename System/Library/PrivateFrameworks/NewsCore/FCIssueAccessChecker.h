//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCIssueAccessChecker
{
    id <FCPaidAccessCheckerType> _paidAccessChecker;	// 8 = 0x8
    FCPrivateChannelMembershipController *_privateChannelMembershipController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ba3c2
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker; // @synthesize paidAccessChecker=_paidAccessChecker;
- (id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2;	// IMP=0x00000000002b9fa3
- (id)initWithAccessCheckers:(id)arg1;	// IMP=0x00000000002b9e55
- (id)init;	// IMP=0x00000000002b9d10

@end
