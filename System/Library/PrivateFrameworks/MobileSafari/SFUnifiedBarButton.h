//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFUnifiedBarButtonView, UIImage;

@interface SFUnifiedBarButton
{
    SFUnifiedBarButtonView *_buttonView;	// 8 = 0x8
    CDUnknownBlockType _action;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003c5e4
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void)_performAction;	// IMP=0x000000000003c5a2
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *accessibilityIdentifier;
@property(nonatomic) _Bool showsPlatter;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000003c450
@property(retain, nonatomic) UIImage *image;
- (id)view;	// IMP=0x000000000003c401
- (id)initWithImage:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c303

@end

