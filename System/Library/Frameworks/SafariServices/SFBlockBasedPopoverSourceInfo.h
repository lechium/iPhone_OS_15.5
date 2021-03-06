//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/_SFPopoverSourceInfo-Protocol.h>

@class NSString, UIBarButtonItem, UIView;

@interface SFBlockBasedPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>
{
    CDUnknownBlockType _sourceInfoProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000158980
@property(nonatomic) long long provenance;
@property(nonatomic) unsigned long long permittedArrowDirections;
@property(nonatomic) _Bool shouldHideArrow;
@property(nonatomic) _Bool shouldPassthroughSuperview;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
- (id)initWithSourceInfoProvider:(CDUnknownBlockType)arg1;	// IMP=0x0000000000158645

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldDismissIfSourceRemovedAfterRepositioning;
@property(readonly) Class superclass;

@end

