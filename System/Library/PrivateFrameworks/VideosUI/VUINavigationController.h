//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, VUIDocumentUIConfiguration;

__attribute__((visibility("hidden")))
@interface VUINavigationController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>
{
    UITapGestureRecognizer *_gesture;	// 8 = 0x8
    VUIDocumentUIConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000196f80
@property(retain, nonatomic) VUIDocumentUIConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000196e53
- (void)viewDidLoad;	// IMP=0x0000000000196e24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

