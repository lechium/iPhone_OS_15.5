//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest <NSSecureCoding>
{
    _Bool _requiresRunningShortcut;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000317d6d
- (void).cxx_destruct;	// IMP=0x0000000000317d5a
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (void)setRequiresRunningShortcut:(_Bool)arg1;	// IMP=0x0000000000317d39
- (_Bool)requiresRunningShortcut;	// IMP=0x0000000000317d31
- (id)initWithShortcutName:(id)arg1 applicationBundleIdentifier:(id)arg2;	// IMP=0x0000000000317ba5

@end

