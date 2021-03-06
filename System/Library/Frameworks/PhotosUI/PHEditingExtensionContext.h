//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <PhotosUI/PUEditingExtensionVendor-Protocol.h>

@class NSNumber, NSUndoManager, PUEditingExtensionUndoAdapter, PUEditingInitialPayload;

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor>
{
    NSNumber *_fullSizeImageSandboxExtensionHandleWrapper;	// 8 = 0x8
    NSNumber *_videoPathSandboxExtensionHandleWrapper;	// 16 = 0x10
    _Bool _attemptUndoManagerAutoSetup;	// 24 = 0x18
    PUEditingInitialPayload *__initialPayload;	// 32 = 0x20
    PUEditingExtensionUndoAdapter *_undoAdapter;	// 40 = 0x28
    NSUndoManager *_undoManagerForBarButtons;	// 48 = 0x30
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000000f039
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000000f009
- (void).cxx_destruct;	// IMP=0x000000000000e2f0
@property(retain, nonatomic) NSUndoManager *undoManagerForBarButtons; // @synthesize undoManagerForBarButtons=_undoManagerForBarButtons;
@property(nonatomic) _Bool attemptUndoManagerAutoSetup; // @synthesize attemptUndoManagerAutoSetup=_attemptUndoManagerAutoSetup;
@property(retain, nonatomic) PUEditingExtensionUndoAdapter *undoAdapter; // @synthesize undoAdapter=_undoAdapter;
@property(readonly) PUEditingInitialPayload *_initialPayload; // @synthesize _initialPayload=__initialPayload;
- (void)querySDKVersionWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e1db
- (void)cancelContentEditingWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e13e
- (void)finishContentEditing;	// IMP=0x000000000000e0df
- (void)beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dc54
- (void)setupUndoProxyWithXPCListenerEndpoint:(id)arg1 attemptUndoManagerAutoSetup:(_Bool)arg2;	// IMP=0x000000000000db5f
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d97c
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d876
- (void)_releaseSandboxExtensions;	// IMP=0x000000000000d7f5
- (id)_contentEditingController;	// IMP=0x000000000000d714
- (void)dealloc;	// IMP=0x000000000000d6d6

@end

