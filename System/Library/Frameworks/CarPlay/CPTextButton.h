//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/CPControl-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;
@protocol CPControlDelegate;

@interface CPTextButton : NSObject <CPControl, NSSecureCoding>
{
    _Bool _enabled;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    long long _textStyle;	// 32 = 0x20
    CDUnknownBlockType _handler;	// 40 = 0x28
    id <CPControlDelegate> _delegate;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000307dd
- (void).cxx_destruct;	// IMP=0x0000000000030de4
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <CPControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)handlePressesEnd;	// IMP=0x0000000000030d4d
- (void)handlePressesStart;	// IMP=0x0000000000030d47
- (void)handlePrimaryAction;	// IMP=0x0000000000030c3c
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000309d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000308cd
- (id)initWithTitle:(id)arg1 textStyle:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000307e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
