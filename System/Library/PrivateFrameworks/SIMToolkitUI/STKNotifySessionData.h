//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface STKNotifySessionData
{
    long long _notifyType;	// 8 = 0x8
}

@property(readonly, nonatomic) long long notifyType; // @synthesize notifyType=_notifyType;
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000000103ba
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000010345
- (id)initWithText:(id)arg1 simLabel:(id)arg2 notifyType:(long long)arg3;	// IMP=0x000000000001024c

@end
