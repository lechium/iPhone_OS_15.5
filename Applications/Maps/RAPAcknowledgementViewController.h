//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, RAPAcknowledgementOptions;

__attribute__((visibility("hidden")))
@interface RAPAcknowledgementViewController : UIViewController
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    RAPAcknowledgementOptions *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000005ee093
@property(retain, nonatomic) RAPAcknowledgementOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00100000005ee044
- (void)done;	// IMP=0x00100000005edf76
- (void)viewDidLoad;	// IMP=0x00100000005ecdfb
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000005ecd7f
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000005eccbb

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

