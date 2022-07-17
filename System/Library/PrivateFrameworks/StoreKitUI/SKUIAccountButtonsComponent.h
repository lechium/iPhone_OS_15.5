//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUIAccountButtonsViewElement, SKUILink;

__attribute__((visibility("hidden")))
@interface SKUIAccountButtonsComponent
{
    SKUILink *_ecommerceLink;	// 8 = 0x8
    _Bool _hidesTermsAndConditions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000029ea51
@property(nonatomic) _Bool hidesTermsAndConditions; // @synthesize hidesTermsAndConditions=_hidesTermsAndConditions;
@property(retain, nonatomic) SKUILink *ECommerceLink; // @synthesize ECommerceLink=_ecommerceLink;
- (long long)componentType;	// IMP=0x000000000029ea01
- (id)initWithViewElement:(id)arg1;	// IMP=0x000000000029e9d2
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;	// IMP=0x000000000029e8c4
- (id)initWithCustomPageContext:(id)arg1;	// IMP=0x000000000029e7e4

// Remaining properties
@property(readonly, nonatomic) SKUIAccountButtonsViewElement *viewElement; // @dynamic viewElement;

@end
