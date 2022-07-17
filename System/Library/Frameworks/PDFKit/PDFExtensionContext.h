//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <PDFKit/PDFExtensionProtocol-Protocol.h>

@class NSString, PDFExtensionViewController;

@interface PDFExtensionContext : NSExtensionContext <PDFExtensionProtocol>
{
    PDFExtensionViewController *_extensionViewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000003e87f
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000003e866
- (void).cxx_destruct;	// IMP=0x000000000003f8a4
@property(nonatomic) __weak PDFExtensionViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
- (oneway void)hostToExtension:(id)arg1;	// IMP=0x000000000003e898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
