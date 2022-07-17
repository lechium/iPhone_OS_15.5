//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SearchUIActionProvider, UIViewController;

@interface SearchUIPeekCommand
{
    UIViewController *_viewController;	// 8 = 0x8
    SearchUIActionProvider *_actions;	// 16 = 0x10
}

+ (id)urlMatchingScheme:(id)arg1 inPunchout:(id)arg2;	// IMP=0x00000000000aaf32
+ (_Bool)supportsRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000aae68
- (void).cxx_destruct;	// IMP=0x00000000000ab32a
@property(retain, nonatomic) SearchUIActionProvider *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (CDUnknownBlockType)actionProvider;	// IMP=0x00000000000ab11a
- (id)generateViewController;	// IMP=0x00000000000aaf2a

@end
