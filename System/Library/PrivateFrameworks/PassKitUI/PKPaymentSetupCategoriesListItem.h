//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSCopying-Protocol.h>

@class NSString, PKPaymentSetupProductCategory;

@interface PKPaymentSetupCategoriesListItem <NSCopying>
{
    PKPaymentSetupProductCategory *_category;	// 8 = 0x8
    unsigned long long _isLoadingIcon;	// 16 = 0x10
    NSString *_sectionIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006260c
@property(retain, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(nonatomic) unsigned long long isLoadingIcon; // @synthesize isLoadingIcon=_isLoadingIcon;
@property(retain, nonatomic) PKPaymentSetupProductCategory *category; // @synthesize category=_category;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000062530

@end

