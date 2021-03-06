//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLULookupItemContent, NSArray, NSDictionary, NSString, NSURL;

@interface MLULookupItem : NSObject
{
    NSURL *_url;	// 8 = 0x8
    struct __DDResult *_ddResult;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    struct _NSRange _focusRange;	// 32 = 0x20
    NSArray *_attachments;	// 48 = 0x30
    unsigned long long _currentAttachmentIndex;	// 56 = 0x38
    struct _NSRange _proposedRange;	// 64 = 0x40
    _Bool _resolved;	// 80 = 0x50
    NSDictionary *_documentProperties;	// 88 = 0x58
    MLULookupItemContent *_previewContent;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000003831
@property(retain, nonatomic) MLULookupItemContent *previewContent; // @synthesize previewContent=_previewContent;
@property(retain) NSDictionary *documentProperties; // @synthesize documentProperties=_documentProperties;
- (void)commitWithTransitionForPreviewViewController:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002c04
- (unsigned long long)commitType;	// IMP=0x0000000000002bc0
- (void)commit;	// IMP=0x0000000000002b33
- (id)viewControllerToPresent;	// IMP=0x0000000000002ae3
- (struct _NSRange)proposedRange;	// IMP=0x0000000000002ad5
- (id)webUrlToPresent;	// IMP=0x0000000000002ac7
- (_Bool)resolve;	// IMP=0x00000000000029cd
- (_Bool)_resolveText:(id)arg1 focusRange:(struct _NSRange)arg2;	// IMP=0x0000000000002810
- (_Bool)_resolveURL:(id)arg1 DDResult:(struct __DDResult *)arg2 focusRange:(struct _NSRange)arg3;	// IMP=0x0000000000002721
- (_Bool)_resolveAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;	// IMP=0x0000000000002477
- (id)initWithURL:(id)arg1 dataDetectorsResult:(struct __DDResult *)arg2 text:(id)arg3 range:(struct _NSRange)arg4;	// IMP=0x00000000000023b6
- (id)initWithAttachments:(id)arg1 currentAttachment:(unsigned long long)arg2;	// IMP=0x00000000000022e4
- (void)dealloc;	// IMP=0x000000000000229d

@end

