//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface STKCallSetupSessionData
{
    NSString *_phoneNumber;	// 8 = 0x8
    _Bool _isHighPriority;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000012378
@property(readonly, nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000012290
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000012200
- (id)initWithText:(id)arg1 simLabel:(id)arg2 phoneNumber:(id)arg3;	// IMP=0x000000000001217e

@end

