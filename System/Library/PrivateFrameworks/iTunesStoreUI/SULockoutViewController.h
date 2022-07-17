//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle, NSString, UIImage;

@interface SULockoutViewController
{
    UIImage *_image;	// 8 = 0x8
    NSBundle *_localizationBundle;	// 16 = 0x10
    NSString *_messageBody;	// 24 = 0x18
    NSString *_messageTitle;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(retain, nonatomic) NSBundle *localizationBundle; // @synthesize localizationBundle=_localizationBundle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)loadView;	// IMP=0x000000000004cb0e
- (id)copyArchivableContext;	// IMP=0x000000000004cb06
- (void)dealloc;	// IMP=0x000000000004ca08
- (id)init;	// IMP=0x000000000004c986

@end
