//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/UITextFieldDelegate-Protocol.h>

@class NSString, UIImageView;

@interface WFVariableField <UITextFieldDelegate>
{
    UIImageView *_pillImageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002cb9c9
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000002cb9ae
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000002cb999
- (void)layoutSubviews;	// IMP=0x00000000002cb652
- (void)setText:(id)arg1;	// IMP=0x00000000002cb54d
- (void)dealloc;	// IMP=0x00000000002cb48d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002cb0c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
