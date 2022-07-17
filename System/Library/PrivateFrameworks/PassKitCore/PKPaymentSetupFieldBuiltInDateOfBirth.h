//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKPaymentSetupFieldBuiltInDateOfBirth
{
    long long _minimumAge;	// 224 = 0xe0
}

@property(readonly, nonatomic) long long minimumAge; // @synthesize minimumAge=_minimumAge;
- (_Bool)submissionStringMeetsAllRequirements;	// IMP=0x000000000003a627
- (void)updateWithConfiguration:(id)arg1;	// IMP=0x000000000003a5a5
- (_Bool)isBuiltIn;	// IMP=0x000000000003a59d
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000003a4e5

@end
