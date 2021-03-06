//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPassSecurePreviewContext : NSObject
{
    struct CGImage *_image;	// 8 = 0x8
    struct CGImage *_backgroundImage;	// 16 = 0x10
    NSString *_backgroundColor;	// 24 = 0x18
    NSString *_primaryText;	// 32 = 0x20
    NSString *_primaryColor;	// 40 = 0x28
    NSString *_secondaryText;	// 48 = 0x30
    NSString *_secondaryColor;	// 56 = 0x38
    NSString *_tertiaryText;	// 64 = 0x40
    NSString *_tertiaryColor;	// 72 = 0x48
}

+ (id)createMessagesPreviewForPassesFileURL:(id)arg1 withOutputDirectory:(id)arg2;	// IMP=0x0000000000361ab4
+ (id)createMessagesPreviewForPassFileURL:(id)arg1 withOutputDirectory:(id)arg2;	// IMP=0x0000000000361aa4
- (void).cxx_destruct;	// IMP=0x0000000000360d35
@property(copy, nonatomic) NSString *tertiaryColor; // @synthesize tertiaryColor=_tertiaryColor;
@property(copy, nonatomic) NSString *tertiaryText; // @synthesize tertiaryText=_tertiaryText;
@property(copy, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct CGImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
- (void)setBackgroundImage:(struct CGImage *)arg1;	// IMP=0x0000000000360c46
- (void)setImage:(struct CGImage *)arg1;	// IMP=0x0000000000360c1a
- (void)dealloc;	// IMP=0x0000000000360bd7
- (id)_initWithBackgroundColor:(id)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 tertiaryColor:(id)arg4;	// IMP=0x0000000000360aca
- (id)init;	// IMP=0x0000000000360abc

@end

