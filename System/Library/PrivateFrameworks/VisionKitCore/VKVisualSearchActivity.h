//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSString, UIImage, UIViewController;

@interface VKVisualSearchActivity : UIActivity
{
    NSString *_title;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    struct CGImage *_imageToProcess;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002877f
@property(retain, nonatomic) struct CGImage *imageToProcess; // @synthesize imageToProcess=_imageToProcess;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)performActivity;	// IMP=0x0000000000028646
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000002863e
- (id)activityType;	// IMP=0x0000000000028631
- (id)activityImage;	// IMP=0x000000000002861f
- (id)activityTitle;	// IMP=0x000000000002860d
- (id)initWithImage:(struct CGImage *)arg1 presentingViewController:(id)arg2;	// IMP=0x0000000000028498

@end

