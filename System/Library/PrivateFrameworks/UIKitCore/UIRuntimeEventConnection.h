//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection
{
    unsigned long long eventMask;	// 8 = 0x8
}

@property unsigned long long eventMask; // @synthesize eventMask;
- (id)description;	// IMP=0x000000000089302a
- (void)connectForSimulator;	// IMP=0x0000000000892fbd
- (void)connect;	// IMP=0x0000000000892f71
@property(readonly) SEL action;
@property(readonly) id target;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000892e5b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000892de1

@end
