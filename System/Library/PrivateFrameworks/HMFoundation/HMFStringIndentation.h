//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMFStringIndentation
{
    unsigned long long _width;	// 8 = 0x8
    unsigned long long _level;	// 16 = 0x10
}

+ (id)indentationWithWidth:(unsigned long long)arg1;	// IMP=0x000000000001d632
+ (id)indentation;	// IMP=0x000000000001d61e
@property(readonly) unsigned long long level; // @synthesize level=_level;
@property(readonly) unsigned long long width; // @synthesize width=_width;
- (id)indentationByLevels:(long long)arg1;	// IMP=0x000000000001d722
- (id)description;	// IMP=0x000000000001d6c5
- (id)initWithWidth:(unsigned long long)arg1;	// IMP=0x000000000001d675
- (id)init;	// IMP=0x000000000001d661

@end
