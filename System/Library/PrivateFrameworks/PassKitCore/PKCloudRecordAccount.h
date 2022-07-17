//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccount;

@interface PKCloudRecordAccount
{
    PKAccount *_account;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f6bc0
- (void).cxx_destruct;	// IMP=0x00000000003f70b5
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)applyCloudRecordObject:(id)arg1;	// IMP=0x00000000003f6faa
- (id)_descriptionWithIncludeItem:(_Bool)arg1;	// IMP=0x00000000003f6ec1
- (id)description;	// IMP=0x00000000003f6e32
- (id)descriptionWithItem:(_Bool)arg1;	// IMP=0x00000000003f6d9b
- (long long)compare:(id)arg1;	// IMP=0x00000000003f6ce0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f6c63
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f6bc8
- (id)item;	// IMP=0x00000000003f6bab

@end
