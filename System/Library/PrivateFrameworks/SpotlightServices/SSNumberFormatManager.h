//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSByteCountFormatter, NSNumberFormatter;

@interface SSNumberFormatManager : NSObject
{
    NSNumberFormatter *_numberFormatter;	// 8 = 0x8
    NSByteCountFormatter *_byteCountFormatter;	// 16 = 0x10
}

+ (id)stringFromByteCount:(long long)arg1;	// IMP=0x00000000000934c9
+ (id)stringFromInt:(int)arg1 withMinimumDigits:(unsigned long long)arg2;	// IMP=0x000000000009341f
+ (void)initialize;	// IMP=0x0000000000093303
- (void).cxx_destruct;	// IMP=0x0000000000093575
@property(retain) NSByteCountFormatter *byteCountFormatter; // @synthesize byteCountFormatter=_byteCountFormatter;
@property(retain) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (id)init;	// IMP=0x000000000009334a

@end
