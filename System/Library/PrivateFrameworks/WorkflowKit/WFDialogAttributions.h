//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class WFDialogAttribution;

@interface WFDialogAttributions : NSObject <NSCopying, NSSecureCoding>
{
    WFDialogAttribution *_defaultAttribution;	// 8 = 0x8
    WFDialogAttribution *_workflowAttribution;	// 16 = 0x10
    WFDialogAttribution *_privacyAttribution;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000028715c
- (void).cxx_destruct;	// IMP=0x00000000002874df
@property(readonly, nonatomic) WFDialogAttribution *privacyAttribution; // @synthesize privacyAttribution=_privacyAttribution;
@property(readonly, nonatomic) WFDialogAttribution *workflowAttribution; // @synthesize workflowAttribution=_workflowAttribution;
@property(readonly, nonatomic) WFDialogAttribution *defaultAttribution; // @synthesize defaultAttribution=_defaultAttribution;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002873de
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028727a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000287197
- (void)setPrivacyAttribution:(id)arg1;	// IMP=0x0000000000287186
- (void)setWorkflowAttribution:(id)arg1;	// IMP=0x0000000000287175
- (void)setDefaultAttribution:(id)arg1;	// IMP=0x0000000000287164

@end
