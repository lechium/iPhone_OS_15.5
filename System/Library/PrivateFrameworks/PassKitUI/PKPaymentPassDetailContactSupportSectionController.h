//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPaymentPassDetailTableViewSectionController-Protocol.h>

@class NSArray, NSString, UIColor;
@protocol PKPaymentPassDetailContactSupportSectionControllerDelegate;

@interface PKPaymentPassDetailContactSupportSectionController : NSObject <PKPaymentPassDetailTableViewSectionController>
{
    id <PKPaymentPassDetailContactSupportSectionControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_allSectionIdentifiers;	// 16 = 0x10
    NSArray *_sectionIdentifiers;	// 24 = 0x18
    unsigned long long _contactOption;	// 32 = 0x20
    NSString *_titleText;	// 40 = 0x28
    UIColor *_titleColor;	// 48 = 0x30
    NSString *_footerText;	// 56 = 0x38
}

+ (_Bool)validForPaymentPass:(id)arg1;	// IMP=0x0000000000076f61
- (void).cxx_destruct;	// IMP=0x00000000000771b7
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) unsigned long long contactOption; // @synthesize contactOption=_contactOption;
@property(retain, nonatomic) NSArray *sectionIdentifiers; // @synthesize sectionIdentifiers=_sectionIdentifiers;
@property(readonly, nonatomic) NSArray *allSectionIdentifiers; // @synthesize allSectionIdentifiers=_allSectionIdentifiers;
@property(nonatomic) __weak id <PKPaymentPassDetailContactSupportSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x00000000000770d0
- (id)titleForFooterInSectionIdentifier:(id)arg1;	// IMP=0x00000000000770c2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x0000000000076fba
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;	// IMP=0x0000000000076faf
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000076e0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

