//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMCoreLite/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface FMAlert : NSObject <NSSecureCoding>
{
    _Bool _showMsgInLockScreen;	// 8 = 0x8
    _Bool _dismissMsgOnUnlock;	// 9 = 0x9
    _Bool _dismissMsgOnLock;	// 10 = 0xa
    NSUUID *_alertId;	// 16 = 0x10
    unsigned long long _category;	// 24 = 0x18
    NSString *_msgTitle;	// 32 = 0x20
    NSString *_msgText;	// 40 = 0x28
    NSString *_defaultButtonTitle;	// 48 = 0x30
    NSString *_alternateButtonTitle;	// 56 = 0x38
    double _timeout;	// 64 = 0x40
    NSDictionary *_additionalSettings;	// 72 = 0x48
    CDUnknownBlockType _defaultButtonAction;	// 80 = 0x50
    CDUnknownBlockType _alternateButtonAction;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010b0b
- (void).cxx_destruct;	// IMP=0x0000000000010dfd
@property(copy, nonatomic) CDUnknownBlockType alternateButtonAction; // @synthesize alternateButtonAction=_alternateButtonAction;
@property(copy, nonatomic) CDUnknownBlockType defaultButtonAction; // @synthesize defaultButtonAction=_defaultButtonAction;
@property(retain, nonatomic) NSDictionary *additionalSettings; // @synthesize additionalSettings=_additionalSettings;
@property(nonatomic) _Bool dismissMsgOnLock; // @synthesize dismissMsgOnLock=_dismissMsgOnLock;
@property(nonatomic) _Bool dismissMsgOnUnlock; // @synthesize dismissMsgOnUnlock=_dismissMsgOnUnlock;
@property(nonatomic) _Bool showMsgInLockScreen; // @synthesize showMsgInLockScreen=_showMsgInLockScreen;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(retain, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(retain, nonatomic) NSString *msgText; // @synthesize msgText=_msgText;
@property(retain, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *alertId; // @synthesize alertId=_alertId;
- (id)description;	// IMP=0x0000000000010b13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010913
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001069e
- (id)init;	// IMP=0x000000000001061e

@end
