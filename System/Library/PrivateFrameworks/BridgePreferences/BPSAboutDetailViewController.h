//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTextWelcomeController.h>

@class NSArray, NSString, UIImage;

@interface BPSAboutDetailViewController : OBTextWelcomeController
{
    NSString *_headerString;	// 8 = 0x8
    NSString *_footerString;	// 16 = 0x10
    NSArray *_bullets;	// 24 = 0x18
    NSArray *_paragraphs;	// 32 = 0x20
    NSString *_titleString;	// 40 = 0x28
    UIImage *_headerGlyph;	// 48 = 0x30
    CDUnknownBlockType _onDismiss;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000807d
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(retain, nonatomic) UIImage *headerGlyph; // @synthesize headerGlyph=_headerGlyph;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSArray *paragraphs; // @synthesize paragraphs=_paragraphs;
@property(retain, nonatomic) NSArray *bullets; // @synthesize bullets=_bullets;
@property(retain, nonatomic) NSString *footerString; // @synthesize footerString=_footerString;
@property(retain, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
- (void)presentWithController:(id)arg1 onDismiss:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007e02
- (void)presentWithController:(id)arg1;	// IMP=0x0000000000007dee
- (void)donePressed;	// IMP=0x0000000000007d81
- (void)viewDidLoad;	// IMP=0x000000000000788e
- (_Bool)contentViewIsInAdjustedScrollView;	// IMP=0x0000000000007886
- (id)init;	// IMP=0x00000000000077cd

@end

