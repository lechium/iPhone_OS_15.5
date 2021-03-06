//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensions/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling>
{
    _Bool _canGenerateNewAttachment;	// 8 = 0x8
    _Bool _allowUserAttachmentSelection;	// 9 = 0x9
    _Bool _isEnhancedLoggingStateOn;	// 10 = 0xa
    NSString *_loggingConsent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d921
@property(nonatomic) _Bool isEnhancedLoggingStateOn; // @synthesize isEnhancedLoggingStateOn=_isEnhancedLoggingStateOn;
@property(nonatomic) _Bool allowUserAttachmentSelection; // @synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection;
@property(nonatomic) _Bool canGenerateNewAttachment; // @synthesize canGenerateNewAttachment=_canGenerateNewAttachment;
@property(copy, nonatomic) NSString *loggingConsent; // @synthesize loggingConsent=_loggingConsent;
- (id)_getHostname;	// IMP=0x000000000000d7a5
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;	// IMP=0x000000000000d144
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d062
- (void)teardownWithParameters:(id)arg1;	// IMP=0x000000000000cfac
- (void)setupWithParameters:(id)arg1;	// IMP=0x000000000000cef3
- (id)attachmentsForParameters:(id)arg1;	// IMP=0x000000000000cee6
- (id)attachmentsWithParams:(id)arg1;	// IMP=0x000000000000ced4
- (id)attachmentList;	// IMP=0x000000000000cec7
- (void)disableLogging;	// IMP=0x000000000000cec1
- (void)enableLogging;	// IMP=0x000000000000cebb
- (_Bool)canEnableLogging;	// IMP=0x000000000000ceb3
- (_Bool)isLoggingEnabled;	// IMP=0x000000000000ceab
- (void)beginRequestWithExtensionContext:(id)arg1;	// IMP=0x000000000000cc57
- (id)init;	// IMP=0x000000000000cc05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

