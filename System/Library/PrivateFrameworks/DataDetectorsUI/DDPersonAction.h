//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BCSBusinessItem, NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface DDPersonAction
{
    _Bool _contactExists;	// 77 = 0x4d
    _Bool _fromCNContact;	// 78 = 0x4e
    BCSBusinessItem *_bizItem;	// 80 = 0x50
    _Bool _bizItemIsMessageable;	// 88 = 0x58
    NSString *_lastBizNumberFetched;	// 96 = 0x60
    UIViewController *_menuHeaderViewController;	// 104 = 0x68
}

+ (id)viewControllerProviderClass;	// IMP=0x0000000000007645
+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x0000000000007349
- (void).cxx_destruct;	// IMP=0x0000000000009ce8
- (id)menuHeaderView;	// IMP=0x00000000000099c5
- (_Bool)prefersActionMenuStyle;	// IMP=0x00000000000099bd
- (struct CGSize)suggestedContentSize;	// IMP=0x00000000000099a7
- (id)menuActions;	// IMP=0x000000000000983e
- (id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2;	// IMP=0x0000000000008932
- (id)_menuActionsForBusinessWithNumber:(id)arg1;	// IMP=0x00000000000084ad
- (_Bool)phoneNumberIsBusiness:(id)arg1;	// IMP=0x0000000000008381
- (id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5;	// IMP=0x0000000000007652
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;	// IMP=0x0000000000007542

@end
