//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAInheritanceContactController, NSString;

@interface AAUIInheritanceAccessKeyPDFGenerator : NSObject
{
    NSString *_ownerDisplayName;	// 8 = 0x8
    NSString *_ownerFirstName;	// 16 = 0x10
    NSString *_ownerEmailAddress;	// 24 = 0x18
    NSString *_contactDisplayName;	// 32 = 0x20
    AAInheritanceContactController *_contactController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000066a96
- (void)_renderFooterWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x0000000000066852
- (void)_renderAccessKeyWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x00000000000665c1
- (double)_renderQRCodeImageWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x00000000000663e6
- (double)_renderRectBoxWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2 drawContext:(struct CGContext *)arg3;	// IMP=0x0000000000066282
- (double)_renderMessageWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x0000000000065fe6
- (id)_attributedStringWithField:(id)arg1 value:(id)arg2;	// IMP=0x0000000000065d6c
- (double)_renderAccountDetailsWithPageRect:(struct CGRect)arg1 yPosition:(double)arg2;	// IMP=0x0000000000065b22
- (double)_renderTitleWithPageRect:(struct CGRect)arg1;	// IMP=0x00000000000658ac
- (void)_renderLogoImageWithPageRect:(struct CGRect)arg1;	// IMP=0x0000000000065725
- (id)_pdfMetaData;	// IMP=0x000000000006567a
- (id)createPDFDocumentData;	// IMP=0x00000000000653a8
- (id)initWithAppleAccount:(id)arg1 localContactInfo:(id)arg2;	// IMP=0x000000000006519e

@end

