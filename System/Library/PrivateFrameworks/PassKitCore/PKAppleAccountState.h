//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAppleAccountState : NSObject <NSSecureCoding>
{
    _Bool _isWalletDataclassEnabled;	// 8 = 0x8
    _Bool _isUbiquityDataclassEnabled;	// 9 = 0x9
    _Bool _isManaged;	// 10 = 0xa
    _Bool _isPrimary;	// 11 = 0xb
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021045d
- (void).cxx_destruct;	// IMP=0x00000000002107b0
@property(readonly, nonatomic) _Bool isPrimary; // @synthesize isPrimary=_isPrimary;
@property(readonly, nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(readonly, nonatomic) _Bool isUbiquityDataclassEnabled; // @synthesize isUbiquityDataclassEnabled=_isUbiquityDataclassEnabled;
@property(readonly, nonatomic) _Bool isWalletDataclassEnabled; // @synthesize isWalletDataclassEnabled=_isWalletDataclassEnabled;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000021073c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000210648
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000210594
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000210465

@end

