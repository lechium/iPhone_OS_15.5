//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CAMPreviewFiltersCommand
{
    NSArray *_filters;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000046e73
@property(readonly, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void)executeWithContext:(id)arg1;	// IMP=0x000000000002480d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ff853
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ff71c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ff591
- (id)initWithSubcommands:(id)arg1;	// IMP=0x00000000000ff57d
- (id)initWithFilters:(id)arg1;	// IMP=0x000000000001e36b

@end

