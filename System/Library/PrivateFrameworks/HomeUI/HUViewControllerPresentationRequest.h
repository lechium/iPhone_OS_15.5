//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface HUViewControllerPresentationRequest : NSObject
{
    _Bool _animated;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    unsigned long long _preferredPresentationType;	// 24 = 0x18
}

+ (id)requestWithViewController:(id)arg1;	// IMP=0x000000000007462f
- (void).cxx_destruct;	// IMP=0x000000000007471b
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) unsigned long long preferredPresentationType; // @synthesize preferredPresentationType=_preferredPresentationType;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithViewController:(id)arg1;	// IMP=0x000000000007467c

@end

