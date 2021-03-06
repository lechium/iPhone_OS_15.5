//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSEditingPane.h>

@class NSThread, UITextView;

@interface CPUActivityPane : PSEditingPane
{
    NSThread *_worker;	// 32 = 0x20
    UITextView *_textView;	// 40 = 0x28
    char _buf1[4096];	// 48 = 0x30
    char _buf2[4096];	// 4144 = 0x1030
    char *_readBuffer;	// 8240 = 0x2030
    char *_writeBuffer;	// 8248 = 0x2038
}

- (void).cxx_destruct;	// IMP=0x0000000000006913
- (void)_worker;	// IMP=0x00000000000065b7
- (void)_switchBuffers:(id)arg1;	// IMP=0x000000000000652c
- (void)setPreferenceSpecifier:(id)arg1;	// IMP=0x00000000000064eb
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000064d2
- (void)_killWorker;	// IMP=0x0000000000006490
- (void)_startWorker;	// IMP=0x0000000000006406
- (void)_cleanupTextView;	// IMP=0x00000000000063ce
- (void)dealloc;	// IMP=0x000000000000636c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000061b8

@end

