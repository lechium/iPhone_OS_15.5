//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccountNotification/NSSecureCoding-Protocol.h>

@class NSString;

@interface ANSectionSubtypeDescriptor : NSObject <NSSecureCoding>
{
    _Bool _allowsAddingToLockScreenWhenUnlocked;	// 8 = 0x8
    NSString *_accountTypeID;	// 16 = 0x10
    long long _subtype;	// 24 = 0x18
    NSString *_fullUnlockActionLabel;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001e53
- (void).cxx_destruct;	// IMP=0x000000000000204f
@property(copy, nonatomic) NSString *fullUnlockActionLabel; // @synthesize fullUnlockActionLabel=_fullUnlockActionLabel;
@property(nonatomic) _Bool allowsAddingToLockScreenWhenUnlocked; // @synthesize allowsAddingToLockScreenWhenUnlocked=_allowsAddingToLockScreenWhenUnlocked;
@property(nonatomic) long long subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) NSString *accountTypeID; // @synthesize accountTypeID=_accountTypeID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001ef9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001e5b
- (id)initForAccountWithType:(id)arg1;	// IMP=0x0000000000001dd8
- (id)init;	// IMP=0x0000000000001dca

@end

