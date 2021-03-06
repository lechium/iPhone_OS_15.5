//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TSMTIEMask : NSObject
{
    NSArray *_elements;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (id)gPTP1Hop;	// IMP=0x000000000002aee7
+ (id)gPTP7Hop;	// IMP=0x000000000002ad22
+ (id)gPTPMask3;	// IMP=0x000000000002abb2
+ (id)gPTPMask2;	// IMP=0x000000000002aa42
+ (id)gPTPMask1;	// IMP=0x000000000002a87d
+ (id)UDPSoftwareMask;	// IMP=0x000000000002a708
+ (id)UDPHardwareMask;	// IMP=0x000000000002a593
- (void).cxx_destruct;	// IMP=0x000000000002bb5a
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (id)mtieMaskFromStart:(double)arg1 toEnd:(double)arg2 withStep:(double)arg3;	// IMP=0x000000000002b7f7
- (_Bool)mtieConformsToMask:(id)arg1 withErrors:(id *)arg2;	// IMP=0x000000000002b2b6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002b004

@end

