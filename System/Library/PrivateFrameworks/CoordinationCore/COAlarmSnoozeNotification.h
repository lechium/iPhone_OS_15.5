//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface COAlarmSnoozeNotification
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006a3ab
- (void).cxx_destruct;	// IMP=0x000000000006a3c4
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006a310
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006a275
- (id)initWithAlarmIdentifier:(id)arg1;	// IMP=0x000000000006a1fb

@end

