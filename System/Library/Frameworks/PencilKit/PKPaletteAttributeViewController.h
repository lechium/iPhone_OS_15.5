//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface PKPaletteAttributeViewController : UIViewController
{
    _Bool _didExperienceUserInteraction;	// 8 = 0x8
    _Bool _didSendDismissStatistics;	// 9 = 0x9
    NSString *_toolIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000efb33
@property(nonatomic) _Bool didSendDismissStatistics; // @synthesize didSendDismissStatistics=_didSendDismissStatistics;
@property(retain, nonatomic) NSString *toolIdentifier; // @synthesize toolIdentifier=_toolIdentifier;
@property(nonatomic) _Bool didExperienceUserInteraction; // @synthesize didExperienceUserInteraction=_didExperienceUserInteraction;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000efa03
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ef9a2

@end

