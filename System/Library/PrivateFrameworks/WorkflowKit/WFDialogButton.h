//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    long long _style;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000179075
+ (id)cancelButton;	// IMP=0x0000000000179018
+ (id)selectButton;	// IMP=0x0000000000178fbe
+ (id)okButton;	// IMP=0x0000000000178f64
+ (id)doneButton;	// IMP=0x0000000000178f0a
+ (id)defaultButtonWithTitle:(id)arg1;	// IMP=0x0000000000178ebb
- (void).cxx_destruct;	// IMP=0x0000000000178e93
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000178da3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000178c9a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000178c8f
- (id)initWithTitle:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000178be8
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3;	// IMP=0x0000000000178b1a
- (id)smartPromptIntentButton;	// IMP=0x00000000002c3c7f

@end
