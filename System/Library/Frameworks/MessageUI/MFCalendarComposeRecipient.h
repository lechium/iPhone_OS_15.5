//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MFCalendarComposeRecipient
{
    NSString *_calAttendeeName;	// 72 = 0x48
    id _participant;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000020fb0
- (unsigned long long)hash;	// IMP=0x0000000000020f1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020e3c
- (id)displayString;	// IMP=0x0000000000020dd2
@property(retain, nonatomic) id participant;
- (void)setCalAttendeeName:(id)arg1;	// IMP=0x0000000000020d1b
- (id)initWithComposeRecipient:(id)arg1;	// IMP=0x0000000000020bf8

@end
