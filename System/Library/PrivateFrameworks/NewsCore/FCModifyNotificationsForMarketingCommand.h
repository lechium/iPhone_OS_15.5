//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FCModifyNotificationsForMarketingCommand
{
    int _type;	// 8 = 0x8
    int _action;	// 12 = 0xc
    NSString *_dsid;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000028ccb4
- (void).cxx_destruct;	// IMP=0x000000000028d210
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;	// IMP=0x000000000028ccbc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000028cba5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028ca8f
- (id)initWithType:(int)arg1 action:(int)arg2 iTunesDSID:(id)arg3;	// IMP=0x000000000028c9f1

@end

