//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, RAPDisplayUserContentTableViewCell, RAPUserContentTableViewFooterView;

__attribute__((visibility("hidden")))
@interface RAPUserInfoSection
{
    ACAccount *_account;	// 8 = 0x8
    RAPDisplayUserContentTableViewCell *_cell;	// 16 = 0x10
    RAPUserContentTableViewFooterView *_footerView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000a900bf
- (void)_footerViewTapped;	// IMP=0x0010000000a90035
- (id)footerView;	// IMP=0x0010000000a8ffb8
- (id)cellForRowAtIndex:(long long)arg1;	// IMP=0x0010000000a8ff5e
- (long long)rowsCount;	// IMP=0x0010000000a8ff47
- (id)init;	// IMP=0x0010000000a8feda

@end

