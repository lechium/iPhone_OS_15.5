//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount;

@interface HUAppleMusicAccountItem
{
    ACAccount *_account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002e3a16
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000002e341d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e336c
- (id)init;	// IMP=0x00000000002e32b7
- (id)initWithMediaProfileContainer:(id)arg1 account:(id)arg2;	// IMP=0x00000000002e31b4

@end

