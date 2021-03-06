//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKAppleAccountState;

@interface PKAppleAccountChange : NSObject <NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    long long _event;	// 16 = 0x10
    PKAppleAccountState *_currentState;	// 24 = 0x18
    PKAppleAccountState *_previousState;	// 32 = 0x20
}

+ (long long)changeTypeToAccount:(id)arg1 fromAccount:(id)arg2;	// IMP=0x0000000000210e6d
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002107c0
- (void).cxx_destruct;	// IMP=0x0000000000210f30
@property(readonly, nonatomic) PKAppleAccountState *previousState; // @synthesize previousState=_previousState;
@property(readonly, nonatomic) PKAppleAccountState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000000210da3
- (_Bool)shouldBeNotedByPassLibrary;	// IMP=0x0000000000210d09
- (_Bool)didAccountOrderChange;	// IMP=0x0000000000210cca
- (_Bool)didAccountManagedStateChange;	// IMP=0x0000000000210c8b
- (_Bool)didRelevantDataclassesChange;	// IMP=0x0000000000210c25
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000210ab7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002109ca
- (id)initWithEvent:(long long)arg1 currentAccount:(id)arg2 previousAccount:(id)arg3;	// IMP=0x00000000002107c8

@end

