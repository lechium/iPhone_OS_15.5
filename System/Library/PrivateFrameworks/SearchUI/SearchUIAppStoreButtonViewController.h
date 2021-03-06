//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/ASCLockupViewDelegate-Protocol.h>

@class ASCLockupView, NSString;

@interface SearchUIAppStoreButtonViewController <ASCLockupViewDelegate>
{
    ASCLockupView *_lockupView;	// 8 = 0x8
}

+ (id)lockupViewGroup;	// IMP=0x00000000000283a2
+ (id)lockupCache;	// IMP=0x000000000002834d
+ (id)storeIdentifierForRowModel:(id)arg1;	// IMP=0x000000000002825e
+ (_Bool)supportsRowModel:(id)arg1;	// IMP=0x00000000000281ac
- (void).cxx_destruct;	// IMP=0x0000000000028e89
@property(retain, nonatomic) ASCLockupView *lockupView; // @synthesize lockupView=_lockupView;
- (id)metricsActivityForLockupView:(id)arg1 toPerformActionOfOffer:(id)arg2;	// IMP=0x0000000000028dfd
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)arg1;	// IMP=0x0000000000028d81
- (void)lockupViewDidFinishRequest:(id)arg1;	// IMP=0x0000000000028b88
- (id)presentingViewControllerForLockupView:(id)arg1;	// IMP=0x0000000000028b04
- (unsigned long long)type;	// IMP=0x0000000000028af9
- (void)updateWithRowModel:(id)arg1;	// IMP=0x0000000000028703
- (void)tlk_updateForAppearance:(id)arg1;	// IMP=0x000000000002852a
- (id)setupView;	// IMP=0x000000000002840e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

