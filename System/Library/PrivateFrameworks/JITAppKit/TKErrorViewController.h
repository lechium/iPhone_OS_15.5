//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface TKErrorViewController : UIViewController
{
    UILabel *_label;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
}

+ (id)viewControllerForMessage:(id)arg1;	// IMP=0x00000000000023f0
- (void).cxx_destruct;	// IMP=0x0000000000002c10
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)viewDidLoad;	// IMP=0x0000000000002ae0
- (void)loadView;	// IMP=0x00000000000024b0

@end
