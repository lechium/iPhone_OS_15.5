//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/QLPreviewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKPreviewControllerDelegate : NSObject <QLPreviewControllerDelegate>
{
    void *_previewController;	// 8 = 0x8
    struct IntRect _linkRect;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000003333a8
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x0000000000333220
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;	// IMP=0x000000000033305c
- (id)presentingViewController;	// IMP=0x0000000000333037
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000332fb0
- (id)initWithSystemPreviewController:(void *)arg1;	// IMP=0x0000000000332f73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

