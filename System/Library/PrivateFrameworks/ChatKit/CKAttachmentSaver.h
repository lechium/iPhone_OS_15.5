//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CKAttachmentSaver : NSObject
{
    unsigned long long _errorCount;	// 8 = 0x8
    NSMutableArray *_attachments;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002a937
- (void)_saveCompletion:(id)arg1;	// IMP=0x000000000002a657
- (void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void *)arg3;	// IMP=0x000000000002a642
- (void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void *)arg3;	// IMP=0x000000000002a62d
- (void)_saveNextAttachment;	// IMP=0x0000000000029e0b
- (void)_pop;	// IMP=0x0000000000029de0
- (void)runToCompletion;	// IMP=0x0000000000029dce
- (void)popAndSaveNextAttachment;	// IMP=0x0000000000029da0
- (id)initWithAttachments:(id)arg1;	// IMP=0x0000000000029d2d

@end

