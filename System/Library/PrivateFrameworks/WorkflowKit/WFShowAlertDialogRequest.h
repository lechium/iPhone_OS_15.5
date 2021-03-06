//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, WFDialogButton;

@interface WFShowAlertDialogRequest <NSSecureCoding>
{
    NSString *_message;	// 8 = 0x8
    WFDialogButton *_okButton;	// 16 = 0x10
    WFDialogButton *_cancelButton;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000317685
- (void).cxx_destruct;	// IMP=0x0000000000317643
@property(readonly, copy, nonatomic) WFDialogButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, copy, nonatomic) WFDialogButton *okButton; // @synthesize okButton=_okButton;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000317507
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003173cc
- (id)description;	// IMP=0x0000000000317273
- (id)initWithPrompt:(id)arg1 message:(id)arg2 okButton:(id)arg3 cancelButton:(id)arg4 attribution:(id)arg5;	// IMP=0x0000000000317161
- (id)initWithPrompt:(id)arg1 message:(id)arg2 cancelButton:(id)arg3 attribution:(id)arg4;	// IMP=0x0000000000317088

@end

