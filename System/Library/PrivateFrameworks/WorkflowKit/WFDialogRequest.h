//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString, WFDialogAttribution;

@interface WFDialogRequest : NSObject <NSSecureCoding>
{
    _Bool _requiresRunningShortcut;	// 8 = 0x8
    WFDialogAttribution *_attribution;	// 16 = 0x10
    NSString *_prompt;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002dd10e
- (void).cxx_destruct;	// IMP=0x00000000002dd0e6
@property(nonatomic) _Bool requiresRunningShortcut; // @synthesize requiresRunningShortcut=_requiresRunningShortcut;
@property(readonly, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(readonly, nonatomic) WFDialogAttribution *attribution; // @synthesize attribution=_attribution;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002dcfec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002dcee4
@property(readonly, nonatomic) _Bool shouldCenterPrompt;
@property(readonly, nonatomic) NSString *promptForDisplay;
- (id)initWithAttribution:(id)arg1 prompt:(id)arg2;	// IMP=0x00000000002dcd90
- (id)initWithAppBundleIdentifier:(id)arg1 prompt:(id)arg2;	// IMP=0x00000000002dcd0a

@end

