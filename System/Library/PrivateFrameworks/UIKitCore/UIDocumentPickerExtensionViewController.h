//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIDocumentPickerExtensionViewController-Protocol.h>

@class NSArray, NSString, NSURL;

@interface UIDocumentPickerExtensionViewController <_UIDocumentPickerExtensionViewController>
{
    unsigned long long _documentPickerMode;	// 8 = 0x8
    NSURL *_originalURL;	// 16 = 0x10
    NSArray *_validTypes;	// 24 = 0x18
    NSString *_providerIdentifier;	// 32 = 0x20
    NSURL *_documentStorageURL;	// 40 = 0x28
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00000000005b147e
+ (id)_exportedInterface;	// IMP=0x00000000005b13b3
- (void).cxx_destruct;	// IMP=0x00000000005b1bc0
@property(copy, nonatomic, setter=_setDocumentStorageURL:) NSURL *documentStorageURL; // @synthesize documentStorageURL=_documentStorageURL;
@property(copy, nonatomic, setter=_setProviderIdentifier:) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(copy, nonatomic, setter=_setPickableTypes:) NSArray *validTypes; // @synthesize validTypes=_validTypes;
@property(copy, nonatomic, setter=_setUploadURL:) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(nonatomic, setter=_setPickerMode:) unsigned long long documentPickerMode; // @synthesize documentPickerMode=_documentPickerMode;
- (void)_documentPickerDidDismiss;	// IMP=0x00000000005b1b21
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005b1581
- (void)prepareForPresentationInMode:(unsigned long long)arg1;	// IMP=0x00000000005b157b
- (void)prepareForDocumentSelectionInMode:(unsigned long long)arg1;	// IMP=0x00000000005b1575
- (void)_setUploadURLWrapper:(id)arg1;	// IMP=0x00000000005b149e
- (void)_setTintColor:(id)arg1;	// IMP=0x00000000005b1341
- (void)dismissGrantingAccessToURL:(id)arg1;	// IMP=0x00000000005b0f52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

