//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCharacterSet;

__attribute__((visibility("hidden")))
@interface _HKCFGCharacterTerminal
{
    NSCharacterSet *_characterSet;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009536a
@property(copy, nonatomic) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
- (unsigned long long)_minimumLength;	// IMP=0x0000000000095339
- (id)_label;	// IMP=0x000000000009532c
- (_Bool)_scanValue:(id *)arg1 withScanner:(id)arg2;	// IMP=0x000000000001ba15

@end
