//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMStopPanoramaCommand
{
    _Bool __interrupted;	// 8 = 0x8
}

@property(readonly, nonatomic) _Bool _interrupted; // @synthesize _interrupted=__interrupted;
- (void)executeWithContext:(id)arg1;	// IMP=0x00000000001c5a16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c59c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c5968
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c58d8
- (id)initWithInterrupted:(_Bool)arg1;	// IMP=0x00000000001c5876

@end
