//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface REMListBadge : NSObject
{
    NSString *emblem;	// 8 = 0x8
    NSString *emoji;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ae194
@property(copy, nonatomic) NSString *emoji; // @synthesize emoji;
@property(copy, nonatomic) NSString *emblem; // @synthesize emblem;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000adf6c
- (_Bool)_isJSONString:(id)arg1;	// IMP=0x00000000000adf14
- (id)_emojiFromRawString:(id)arg1;	// IMP=0x00000000000ade2c
- (_Bool)_isSingleCharacterEmoji:(id)arg1;	// IMP=0x00000000000ade19
@property(readonly, copy, nonatomic) NSString *rawValue;
- (id)initWithRawValue:(id)arg1;	// IMP=0x00000000000adc9b
- (id)initWithEmoji:(id)arg1;	// IMP=0x00000000000adc33
- (id)initWithEmblem:(id)arg1;	// IMP=0x00000000000adbcb

@end

